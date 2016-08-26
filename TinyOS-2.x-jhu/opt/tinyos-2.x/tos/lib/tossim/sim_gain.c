#include <sim_gain.h>

typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;

gain_entry_t* connectivity[TOSSIM_MAX_NODES + 1][16];
sim_gain_noise_t localNoise[TOSSIM_MAX_NODES + 1][16];//[16] added by Bo, but where is sim_gain_noise_t defined?

double sensitivity = 4.0;
gain_entry_t* sim_gain_allocate_link(int mote, int channel_id); //not sure if we want to add the channel info here
void sim_gain_deallocate_link(gain_entry_t* linkToDelete); //not sure what this does, and if we shall add channel info here

gain_entry_t* sim_gain_first(int src, int channel_id) __attribute__ ((C, spontaneous)) {

  dbg("channel_switching_debug", "Gain modeling: in sim_gain_first() and channel id is: %u\n", channel_id);

  if (src > TOSSIM_MAX_NODES) {
    return connectivity[TOSSIM_MAX_NODES][channel_id];
  } 
  return connectivity[src][channel_id];
}

gain_entry_t* sim_gain_next(gain_entry_t* currentLink) __attribute__ ((C, spontaneous)) {
  return currentLink->next; // we will have add the channel condition here, ???
}

void sim_gain_add(int src, int dest, double gain, int channel_id) __attribute__ ((C, spontaneous))  {
  gain_entry_t* current;
  int temp = sim_node(); // return current_node, added by Bo
  if (src > TOSSIM_MAX_NODES) {
    src = TOSSIM_MAX_NODES;
  }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != NULL) {
    if (current->mote == dest) {
      sim_set_node(temp);
      break;
    }
    current = current->next;
  }
  if (current == NULL) {
    current = sim_gain_allocate_link(dest, channel_id); // changed by Bo
    current->next = connectivity[src][channel_id]; // changed by Bo
    connectivity[src][channel_id] = current; // changed by Bo
  }
  current->mote = dest;
  current->gain = gain;
  current->channel = channel_id; // added by Bo
  dbg("Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

double sim_gain_value(int src, int dest, int channel_id) __attribute__ ((C, spontaneous))  {// just in the input list, nothing new in the body, Bo
  gain_entry_t* current;
  int temp = sim_node();
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != NULL) {
    if (current->mote == dest) {// we will have to add channel condition here, ???
      sim_set_node(temp);
      dbg("Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
      //printf("From: %u, To:%u, with Gain:%f at Channel: %u\n", src, dest, current->gain, channel_id)
      return current->gain;
    }
    current = current->next;
  }
  sim_set_node(temp);
  dbg("Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

bool sim_gain_connected(int src, int dest, int channel_id) __attribute__ ((C, spontaneous)) {
  gain_entry_t* current;
  int temp = sim_node();
  sim_set_node(src);
  current = sim_gain_first(src, channel_id);
  while (current != NULL) {
    if (current->mote == dest) {// we will have to add channel condition here, ???
      sim_set_node(temp);
      return TRUE;
    }
    current = current->next;
  }
  sim_set_node(temp);
  return FALSE;
}
  
void sim_gain_remove(int src, int dest, int channel_id) __attribute__ ((C, spontaneous))  {// tricky, if it is just removing a link, fine, if a node, careful
  gain_entry_t* current;
  gain_entry_t* prevLink;
  
  int temp = sim_node();
  if (src > TOSSIM_MAX_NODES) {
    src = TOSSIM_MAX_NODES;
  }
  sim_set_node(src);
  current = sim_gain_first(src, channel_id); //added by Bo
  prevLink = NULL;
      
  while (current != NULL) {//this is to go through the link list and remove one of the link
    gain_entry_t* tmp;
    if (current->mote == dest) {
      if (prevLink == NULL) { //To change this is pretty tricky, we need to be careful
		connectivity[src][channel_id] = current->next;
      }
      else {
		prevLink->next = current->next;
      }
      tmp = current->next;
      sim_gain_deallocate_link(current); //this is the key, as it deallocates one link
      printf("From sim_gain.c, we have just deallocate the link for Sensor:%u on Channel: %u\n", TOS_NODE_ID, channel_id);
      current = tmp;
    }
    else {
      prevLink = current;
      current = current->next;
    }
  }
  sim_set_node(temp);
}

void sim_gain_set_noise_floor(int node, double mean, double range, int channel_id) __attribute__ ((C, spontaneous))  {//channel_id added by Bo
  if (node > TOSSIM_MAX_NODES) {
    node = TOSSIM_MAX_NODES;
  }
  localNoise[node][channel_id].mean = mean; //[channel_id] added by Bo
  localNoise[node][channel_id].range = range;//[channel_id] added by Bo
}

double sim_gain_noise_mean(int node, int channel_id) {//channel_id added by Bo
  if (node > TOSSIM_MAX_NODES) {
    node = TOSSIM_MAX_NODES;
  }
  return localNoise[node][channel_id].mean;
}

double sim_gain_noise_range(int node, int channel_id) {//channel_id added by Bo
  if (node > TOSSIM_MAX_NODES) {
    node = TOSSIM_MAX_NODES;
  }
  return localNoise[node][channel_id].range;
}

// Pick a number from the uniform distribution of
// [mean-range, mean+range].
double sim_gain_sample_noise(int node, int channel_id)  __attribute__ ((C, spontaneous)) {
  double val, adjust;
  if (node > TOSSIM_MAX_NODES) {
    node = TOSSIM_MAX_NODES;
  } 
  val = localNoise[node][channel_id].mean;
  adjust = (sim_random() % 2000000);
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node][channel_id].range;
  return val + adjust;
}

gain_entry_t* sim_gain_allocate_link(int mote, int channel_id) {//channel_id added by Bo
  gain_entry_t* newLink = (gain_entry_t*)malloc(sizeof(gain_entry_t));
  newLink->next = NULL;
  newLink->mote = mote;
  newLink->channel=channel_id;
  newLink->gain = -10000000.0; //channel_id added by Bo
  return newLink;
}

void sim_gain_deallocate_link(gain_entry_t* linkToDelete) __attribute__ ((C, spontaneous)) {
  free(linkToDelete);
}

void sim_gain_set_sensitivity(double s) __attribute__ ((C, spontaneous)) {
  sensitivity = s;
}

double sim_gain_sensitivity() __attribute__ ((C, spontaneous)) {
  return sensitivity;
}
/**
 * This file contains various common bits of JavaScript and utility functions.
 * 
 * @author mbooth
 */

/**
 * Utilities to make sure all clip board widgets get repositioned when the browser
 * window changes shape.
 */
jQuery(window).resize(function() {
  repositionClipboardObject();
});
jQuery(document).ready(function() {
  setTimeout("repositionClipboardObject()", 1000);
});

/**
 * Utility to reposition the specified clip board widget.
 * 
 * @param clip
 *          a ZeroClipboard.Client instance, if null is passed then all
 *          instances on the page are repositioned.
 */
function repositionClipboardObject(clip) {
  if (clip) {
    clip.reposition();
    var movie = jQuery("#"+ clip.movieId);
    // For some reason the positioning is off on non-IE browsers
    if (getInternetExplorerVersion() < 0) {
      movie.parent().css("top", parseInt(movie.parent().css("top").replace("px", ""))-parseInt(movie.attr("offsetTop")));
    }
  } else {
    for (var i in ZeroClipboard.clients) {
      repositionClipboardObject(ZeroClipboard.clients[i]);
    }
  }
}

/**
 * Utility to creates a clip board widget.
 * 
 * @param buttenId
 *            id of the element that will be covered by the clip board widget
 * @param clipboardText
 *            the text that will be copied to the clip board when the widget is
 *            clicked
 * @param titleText
 *            the title text of the widget that will be shown in a tooltip
 * @returns {ZeroClipboard.Client} the clip board object
 */
function createClipboardObject(buttenId, clipboardText, titleText) {
  ZeroClipboard.setMoviePath('/ubersvn/javax.faces.resource/ZeroClipboard.swf.jsf?ln=flash');
  var clip = new ZeroClipboard.Client();
  clip.setText(clipboardText);
  clip.setCSSEffects(true);
  clip.glue(buttenId);
  repositionClipboardObject(clip);
  var movie = jQuery("#"+ clip.movieId);
  movie.attr("title", titleText);
  return clip;
}

/**
 * Utility that tries to detect whether the Flash 9 plug-in is available in
 * browser.
 * 
 * @returns {Boolean} true if the plug-in was detected, false otherwise
 */
function gotFlash() {
  var hasFlash = false;
  try {
    // Detection in IE
    var o = new ActiveXObject("ShockwaveFlash.ShockwaveFlash.9");
    if (o) {
      hasFlash = true;
    }
  } catch(e) {}
  try {
    // Detection in most everything else
    if (navigator.plugins != null && navigator.plugins.length > 0) {
      if (navigator.plugins["Shockwave Flash"]) {
        var flashDescription = navigator.plugins["Shockwave Flash"].description;
        var versionArray = flashDescription.split(" ")[2].split(".");
        if (parseInt(versionArray[0]) >= 9) {
          hasFlash = true;
        }
      }
    }
  } catch(e) {}
  return hasFlash;
}


/**
 * Utility for autocomplete repository dav locations 
 * 
 * replaces multiple forward slashes with '/'
 * if it starts with a / replaces it with ''
 * replaces spaces with '-', 
 * doesn't allow invalid char, replaces them with ''
 * 
 * Shortens the text for the repoUrl if its more than 40 chars
 * 
 * @param inputText
 * 	The input field in question
 * 
 * @param davLocationUrlId
 * 	The id of the dav location field
 *
 * @param repoUrlLabelId
 * The id of the repo url label to be updated
 *
 * @param baseUrl
 * The base url the dav location is appended to eg http://localhost:80/
 * 
 * @param maxLength
 * maximum length of URL to display, URLs longer than this will be truncated
 */

function updateRepositoryLocation(inputText, davLocationUrlId, repoUrlLabelId, baseUrl, maxLength) {
	//get the elements to update
	var davLocationEl = jQuery('#' + davLocationUrlId);
	var repoEl = jQuery('#' + repoUrlLabelId);
	
	var v = inputText.value.replace(/\/{2,}/g,'/').replace(/^\//g, '').replace(/[\s]/g, '-').replace(':','').replace('"','').replace('<','').replace('>','').replace('|','');

	var proposedString = baseUrl+v;
	var lengthOfString = proposedString.length;
	var length = 40;
	if (maxLength != undefined)
	  length = maxLength;
	
	//set the text on the dav field
	davLocationEl.attr('value', v);
	//on the repo el set the title
	repoEl.attr('title', proposedString);
	if (lengthOfString > length){
		//shorten the text
		var truncatedString = baseUrl;
		var numberOfCharactersRemaining=length-baseUrl.length;
		truncatedString = truncatedString+"..."+proposedString.substring(lengthOfString-numberOfCharactersRemaining,lengthOfString);
		repoEl.html(truncatedString);
	}else{
		repoEl.html(proposedString);
	}
}


/**
 * Utility for autocomplete usernames based on real names 
 * 
 * Apache allows any character except : so we now just 
 * replace that character with ''
 * 
 * @param inputText
 * 	The input field in question
 * 
 * @param addUserUsernameId
 * 	The id of the name field
 *
 */
function updateUserName(inputText, addUserUsernameId) {
	//get the elements to update
	var nameLocationEl = jQuery('#' + addUserUsernameId);
	
	var v = inputText.value.replace(':', '');

	//set the text on the dav field
	nameLocationEl.attr('value', v);
}

/**
 * Utility for finding the version of IE, if it's being used.
 * 
 * @returns {Number} the version number of IE or -1 if any other browser is
 *          detected
 */
function getInternetExplorerVersion() {
  var rv = -1;
  if (navigator.appName == 'Microsoft Internet Explorer') {
    var ua = navigator.userAgent;
    var re  = new RegExp("MSIE ([0-9]{1,}[\.0-9]{0,})");
    if (re.exec(ua) != null) {
      rv = parseFloat(RegExp.$1);
    }
  }
  return rv;
}

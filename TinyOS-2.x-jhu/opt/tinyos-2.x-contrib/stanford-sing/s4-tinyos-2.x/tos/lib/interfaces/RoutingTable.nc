// ex: set tabstop=4 shiftwidth=4 expandtab syn=c:
// $Id: RoutingTable.nc,v 1.1 2008/10/23 22:22:40 genie1 Exp $

// Authors: Yun Mao maoy@cis.upenn.edu $Date: 2008/10/23 22:22:40 $

#include "S4.h"

interface RoutingTable {
    command uint16_t get_routing_table_size();
    command ClusterMember* get_routing_table();
}

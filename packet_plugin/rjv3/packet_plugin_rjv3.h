#ifndef _MINIEAP_PACKET_PLUGIN_RJV3_H
#define _MINIEAP_PACKET_PLUGIN_RJV3_H

#include "packet_plugin.h"

#define PACKET_PLUGIN_RJV3_VER_STR  "0.90"

#define DEFAULT_HEARTBEAT_INTERVAL  20
#define DEFAULT_MAX_DHCP_COUNT      3
const char DEFAULT_SERVICE_NAME[] = {0xd3, 0xd0, 0xcf, 0xdf, 0x31, 0x78, 0xc9, 0xcf, 0xcd, 0xf8}; // SCAU specific
#define DEFAULT_VER_STR             "RG-SU For Linux V1.30" // SCAU specific
#define DEFAULT_DHCP_SCRIPT         ""
#define DEFAULT_EAP_BCAST_ADDR      BROADCAST_RJ
#define DEFAULT_DHCP_TYPE           DHCP_AFTER_AUTH

PACKET_PLUGIN* packet_plugin_rjv3_new();
#endif

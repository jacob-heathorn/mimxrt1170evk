/*
 * Copyright 2020,2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * NOTE that if there is any change in this file, please make sure
 * rebuild the corresponding library and use the new library to
 * replace the one in your project.
 */

#ifndef NX_USER_H
#define NX_USER_H

/* Refer to nx_user_sample.h for more information. */

#define NX_PACKET_ALIGNMENT 32

#define NX_DISABLE_ERROR_CHECKING
#define NX_TCP_ACK_EVERY_N_PACKETS 2
#define NX_DISABLE_RX_SIZE_CHECKING
#define NX_DISABLE_ARP_INFO
#define NX_DISABLE_IP_INFO
//#define NX_DISABLE_ICMP_INFO
#define NX_DISABLE_IGMPV2
#define NX_DISABLE_IGMP_INFO
#define NX_DISABLE_PACKET_INFO
#define NX_DISABLE_RARP_INFO
#define NX_DISABLE_TCP_INFO
#define NX_DISABLE_UDP_INFO
#define NX_DISABLE_EXTENDED_NOTIFY_SUPPORT
#define NX_DISABLE_INCLUDE_SOURCE_CODE

/* config for DNS */

/* config for MQTT */

/* NXD for MQTT non-blocking.  */
#define NX_ENABLE_EXTENDED_NOTIFY_SUPPORT

/* MQTT */

/* Secure */
#define NX_ENABLE_IP_PACKET_FILTER

/* This option enables deferred driver packet handling. This allows the driver to place a raw
   packet on the IP instance and have the driver's real processing routine called from the NetX internal
   IP helper thread.  */
#define NX_DRIVER_DEFERRED_PROCESSING

/* The link driver is able to specify extra capability, such as checksum offloading features. */
#define NX_ENABLE_INTERFACE_CAPABILITY


#endif /* NX_USER_H */

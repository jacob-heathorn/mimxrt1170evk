#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// ENET_QOS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nENET_QOS {


// MAC Configuration Register
//
union MAC_CONFIGURATION {
  
  enum class eRE : uint32_t {
    eDISABLE = 0, // Receiver is disabled
    eENABLE = 1, // Receiver is enabled
  };
  
  enum class eTE : uint32_t {
    eDISABLE = 0, // Transmitter is disabled
    eENABLE = 1, // Transmitter is enabled
  };
  
  enum class ePRELEN : uint32_t {
    eBYTES_7 = 0, // 7 bytes of preamble
    eBYTES_5 = 1, // 5 bytes of preamble
    eBYTES_3 = 2, // 3 bytes of preamble
  };
  
  enum class eDC : uint32_t {
    eDISABLE = 0, // Deferral check function is disabled
    eENABLE = 1, // Deferral check function is enabled
  };
  
  enum class eBL : uint32_t {
    eMIN_N_10 = 0, // k = min(n,10)
    eMIN_N_8 = 1, // k = min(n,8)
    eMIN_N_4 = 2, // k = min(n,4)
    eMIN_N_1 = 3, // k = min(n,1)
  };
  
  enum class eDR : uint32_t {
    eENABLE = 0, // Enable Retry
    eDISABLE = 1, // Disable Retry
  };
  
  enum class eDCRS : uint32_t {
    eENABLE = 0, // Enable Carrier Sense During Transmission
    eDISABLE = 1, // Disable Carrier Sense During Transmission
  };
  
  enum class eDO : uint32_t {
    eENABLE = 0, // Enable Receive Own
    eDISABLE = 1, // Disable Receive Own
  };
  
  enum class eECRSFD : uint32_t {
    eDISABLE = 0, // ECRSFD is disabled
    eENABLE = 1, // ECRSFD is enabled
  };
  
  enum class eLM : uint32_t {
    eDISABLE = 0, // Loopback is disabled
    eENABLE = 1, // Loopback is enabled
  };
  
  enum class eDM : uint32_t {
    eHDUPLX = 0, // Half-duplex mode
    eFDUPLX = 1, // Full-duplex mode
  };
  
  enum class eFES : uint32_t {
    eMbps_10_1000M = 0, // 10 Mbps when PS bit is 1 and 1 Gbps when PS bit is 0
    eMbps_100_2500M = 1, // 100 Mbps when PS bit is 1 and 2.5 Gbps when PS bit is 0
  };
  
  enum class ePS : uint32_t {
    ebf_1000_2500M = 0, // For 1000 or 2500 Mbps operations
    ebf_10_100M = 1, // For 10 or 100 Mbps operations
  };
  
  enum class eJE : uint32_t {
    eDISABLE = 0, // Jumbo packet is disabled
    eENABLE = 1, // Jumbo packet is enabled
  };
  
  enum class eJD : uint32_t {
    eENABLE = 0, // Jabber is enabled
    eDISABLE = 1, // Jabber is disabled
  };
  
  enum class eBE : uint32_t {
    eDISABLE = 0, // Packet Burst is disabled
    eENABLE = 1, // Packet Burst is enabled
  };
  
  enum class eWD : uint32_t {
    eENABLE = 0, // Watchdog is enabled
    eDISABLE = 1, // Watchdog is disabled
  };
  
  enum class eACS : uint32_t {
    eDISABLE = 0, // Automatic Pad or CRC Stripping is disabled
    eENABLE = 1, // Automatic Pad or CRC Stripping is enabled
  };
  
  enum class eCST : uint32_t {
    eDISABLE = 0, // CRC stripping for Type packets is disabled
    eENABLE = 1, // CRC stripping for Type packets is enabled
  };
  
  enum class eS2KP : uint32_t {
    eDISABLE = 0, // Support upto 2K packet is disabled
    eENABLE = 1, // Support upto 2K packet is Enabled
  };
  
  enum class eGPSLCE : uint32_t {
    eDISABLE = 0, // Giant Packet Size Limit Control is disabled
    eENABLE = 1, // Giant Packet Size Limit Control is enabled
  };
  
  enum class eIPG : uint32_t {
    eIPG96 = 0, // 96 bit times IPG
    eIPG88 = 1, // 88 bit times IPG
    eIPG80 = 2, // 80 bit times IPG
    eIPG72 = 3, // 72 bit times IPG
    eIPG64 = 4, // 64 bit times IPG
    eIPG56 = 5, // 56 bit times IPG
    eIPG48 = 6, // 48 bit times IPG
    eIPG40 = 7, // 40 bit times IPG
  };
  
  enum class eIPC : uint32_t {
    eDISABLE = 0, // IP header/payload checksum checking is disabled
    eENABLE = 1, // IP header/payload checksum checking is enabled
  };
  
  enum class eSARC : uint32_t {
    eSA_CTRL_IN = 0, // mti_sa_ctrl_i and ati_sa_ctrl_i input signals control the SA field generation
    eMAC0_INS_SA = 2, // Contents of MAC Addr-0 inserted in SA field
    eMAC0_REP_SA = 3, // Contents of MAC Addr-0 replaces SA field
    eMAC1_INS_SA = 6, // Contents of MAC Addr-1 inserted in SA field
    eMAC1_REP_SA = 7, // Contents of MAC Addr-1 replaces SA field
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receiver Enable
    eRE RE : 1;
    /// read-write - Transmitter Enable
    eTE TE : 1;
    /// read-write - Preamble Length for Transmit packets
    ePRELEN PRELEN : 2;
    /// read-write - Deferral Check
    eDC DC : 1;
    /// read-write - Back-Off Limit
    eBL BL : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Disable Retry
    eDR DR : 1;
    /// read-write - Disable Carrier Sense During Transmission
    eDCRS DCRS : 1;
    /// read-write - Disable Receive Own
    eDO DO : 1;
    /// read-write - Enable Carrier Sense Before Transmission in Full-Duplex Mode
    eECRSFD ECRSFD : 1;
    /// read-write - Loopback Mode
    eLM LM : 1;
    /// read-write - Duplex Mode
    eDM DM : 1;
    /// read-write - Speed
    eFES FES : 1;
    /// read-write - Port Select
    ePS PS : 1;
    /// read-write - Jumbo Packet Enable When this bit is set, the MAC allows jumbo packets of 9,018 bytes (9,022 bytes for VLAN tagged packets) without reporting a giant packet error in the Rx packet status.
    eJE JE : 1;
    /// read-write - Jabber Disable
    eJD JD : 1;
    /// read-write - Packet Burst Enable When this bit is set, the MAC allows packet bursting during transmission in the GMII half-duplex mode.
    eBE BE : 1;
    /// read-write - Watchdog Disable
    eWD WD : 1;
    /// read-write - Automatic Pad or CRC Stripping When this bit is set, the MAC strips the Pad or FCS field on the incoming packets only if the value of the length field is less than 1,536 bytes.
    eACS ACS : 1;
    /// read-write - CRC stripping for Type packets When this bit is set, the last four bytes (FCS) of all packets of Ether type (type field greater than 1,536) are stripped and dropped before forwarding the packet to the application.
    eCST CST : 1;
    /// read-write - IEEE 802.
    eS2KP S2KP : 1;
    /// read-write - Giant Packet Size Limit Control Enable
    eGPSLCE GPSLCE : 1;
    /// read-write - Inter-Packet Gap These bits control the minimum IPG between packets during transmission.
    eIPG IPG : 3;
    /// read-write - Checksum Offload
    eIPC IPC : 1;
    /// read-write - Source Address Insertion or Replacement Control
    eSARC SARC : 3;
    uint32_t _reserved_1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_CONFIGURATION() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_CONFIGURATION &Instance() { return *reinterpret_cast<volatile MAC_CONFIGURATION*>(0x4043C000); }
};

// MAC Extended Configuration Register
//
union MAC_EXT_CONFIGURATION {
  
  enum class eDCRCC : uint32_t {
    eENABLE = 0, // CRC Checking is enabled
    eDISABLE = 1, // CRC Checking is disabled
  };
  
  enum class eSPEN : uint32_t {
    eDISABLE = 0, // Slow Protocol Detection is disabled
    eENABLE = 1, // Slow Protocol Detection is enabled
  };
  
  enum class eUSP : uint32_t {
    eDISABLE = 0, // Unicast Slow Protocol Packet Detection is disabled
    eENABLE = 1, // Unicast Slow Protocol Packet Detection is enabled
  };
  
  enum class ePDC : uint32_t {
    eDISABLE = 0, // Packet Duplication Control is disabled
    eENABLE = 1, // Packet Duplication Control is enabled
  };
  
  enum class eEIPGEN : uint32_t {
    eDISABLE = 0, // Extended Inter-Packet Gap is disabled
    eENABLE = 1, // Extended Inter-Packet Gap is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Giant Packet Size Limit
    uint32_t GPSL : 14;
    uint32_t _reserved_0 : 2;
    /// read-write - Disable CRC Checking for Received Packets
    eDCRCC DCRCC : 1;
    /// read-write - Slow Protocol Detection Enable
    eSPEN SPEN : 1;
    /// read-write - Unicast Slow Protocol Packet Detect
    eUSP USP : 1;
    /// read-write - Packet Duplication Control
    ePDC PDC : 1;
    uint32_t _reserved_1 : 4;
    /// read-write - Extended Inter-Packet Gap Enable
    eEIPGEN EIPGEN : 1;
    /// read-write - Extended Inter-Packet Gap
    uint32_t EIPG : 5;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_EXT_CONFIGURATION() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_EXT_CONFIGURATION &Instance() { return *reinterpret_cast<volatile MAC_EXT_CONFIGURATION*>(0x4043C004); }
};

// MAC Packet Filter
//
union MAC_PACKET_FILTER {
  
  enum class ePR : uint32_t {
    eDISABLE = 0, // Promiscuous Mode is disabled
    eENABLE = 1, // Promiscuous Mode is enabled
  };
  
  enum class eHUC : uint32_t {
    eDISABLE = 0, // Hash Unicast is disabled
    eENABLE = 1, // Hash Unicast is enabled
  };
  
  enum class eHMC : uint32_t {
    eDISABLE = 0, // Hash Multicast is disabled
    eENABLE = 1, // Hash Multicast is enabled
  };
  
  enum class eDAIF : uint32_t {
    eDISABLE = 0, // DA Inverse Filtering is disabled
    eENABLE = 1, // DA Inverse Filtering is enabled
  };
  
  enum class ePM : uint32_t {
    eDISABLE = 0, // Pass All Multicast is disabled
    eENABLE = 1, // Pass All Multicast is enabled
  };
  
  enum class eDBF : uint32_t {
    eENABLE = 0, // Enable Broadcast Packets
    eDISABLE = 1, // Disable Broadcast Packets
  };
  
  enum class ePCF : uint32_t {
    eFLTR_ALL = 0, // MAC filters all control packets from reaching the application
    eFW_XCPT_PAU = 1, // MAC forwards all control packets except Pause packets to the application even if they fail the Address filter
    eFW_ALL = 2, // MAC forwards all control packets to the application even if they fail the Address filter
    eFW_PASS = 3, // MAC forwards the control packets that pass the Address filter
  };
  
  enum class eSAIF : uint32_t {
    eDISABLE = 0, // SA Inverse Filtering is disabled
    eENABLE = 1, // SA Inverse Filtering is enabled
  };
  
  enum class eSAF : uint32_t {
    eDISABLE = 0, // SA Filtering is disabled
    eENABLE = 1, // SA Filtering is enabled
  };
  
  enum class eHPF : uint32_t {
    eDISABLE = 0, // Hash or Perfect Filter is disabled
    eENABLE = 1, // Hash or Perfect Filter is enabled
  };
  
  enum class eVTFE : uint32_t {
    eDISABLE = 0, // VLAN Tag Filter is disabled
    eENABLE = 1, // VLAN Tag Filter is enabled
  };
  
  enum class eIPFE : uint32_t {
    eDISABLE = 0, // Layer 3 and Layer 4 Filters are disabled
    eENABLE = 1, // Layer 3 and Layer 4 Filters are enabled
  };
  
  enum class eDNTU : uint32_t {
    eFWD = 0, // Forward Non-TCP/UDP over IP Packets
    eDROP = 1, // Drop Non-TCP/UDP over IP Packets
  };
  
  enum class eRA : uint32_t {
    eDISABLE = 0, // Receive All is disabled
    eENABLE = 1, // Receive All is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Promiscuous Mode
    ePR PR : 1;
    /// read-write - Hash Unicast
    eHUC HUC : 1;
    /// read-write - Hash Multicast
    eHMC HMC : 1;
    /// read-write - DA Inverse Filtering
    eDAIF DAIF : 1;
    /// read-write - Pass All Multicast
    ePM PM : 1;
    /// read-write - Disable Broadcast Packets
    eDBF DBF : 1;
    /// read-write - Pass Control Packets These bits control the forwarding of all control packets (including unicast and multicast Pause packets).
    ePCF PCF : 2;
    /// read-write - SA Inverse Filtering
    eSAIF SAIF : 1;
    /// read-write - Source Address Filter Enable
    eSAF SAF : 1;
    /// read-write - Hash or Perfect Filter
    eHPF HPF : 1;
    uint32_t _reserved_0 : 5;
    /// read-write - VLAN Tag Filter Enable
    eVTFE VTFE : 1;
    uint32_t _reserved_1 : 3;
    /// read-write - Layer 3 and Layer 4 Filter Enable
    eIPFE IPFE : 1;
    /// read-write - Drop Non-TCP/UDP over IP Packets
    eDNTU DNTU : 1;
    uint32_t _reserved_2 : 9;
    /// read-write - Receive All
    eRA RA : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PACKET_FILTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PACKET_FILTER &Instance() { return *reinterpret_cast<volatile MAC_PACKET_FILTER*>(0x4043C008); }
};

// Watchdog Timeout
//
union MAC_WATCHDOG_TIMEOUT {
  
  enum class eWTO : uint32_t {
    ebf_2KBYTES = 0, // 2 KB
    ebf_3KBYTES = 1, // 3 KB
    ebf_4KBYTES = 2, // 4 KB
    ebf_5KBYTES = 3, // 5 KB
    ebf_6KBYTES = 4, // 6 KB
    ebf_7KBYTES = 5, // 7 KB
    ebf_8KBYTES = 6, // 8 KB
    ebf_9KBYTES = 7, // 9 KB
    ebf_10KBYTES = 8, // 10 KB
    ebf_11KBYTES = 9, // 11 KB
    ebf_12KBYTES = 10, // 12 KB
    ebf_13KBYTES = 11, // 13 KB
    ebf_14KBYTES = 12, // 14 KB
    ebf_15KBYTES = 13, // 15 KB
    ebf_16383BYTES = 14, // 16383 Bytes
  };
  
  enum class ePWE : uint32_t {
    eDISABLE = 0, // Programmable Watchdog is disabled
    eENABLE = 1, // Programmable Watchdog is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Watchdog Timeout
    eWTO WTO : 4;
    uint32_t _reserved_0 : 4;
    /// read-write - Programmable Watchdog Enable
    ePWE PWE : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_WATCHDOG_TIMEOUT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_WATCHDOG_TIMEOUT &Instance() { return *reinterpret_cast<volatile MAC_WATCHDOG_TIMEOUT*>(0x4043C00C); }
};

// MAC Hash Table Register 0
//
union MAC_HASH_TABLE_REG0 {
  
  // Bit field definition.
  struct {
    /// read-write - MAC Hash Table First 32 Bits This field contains the first 32 Bits [31:0] of the Hash table.
    uint32_t HT31T0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HASH_TABLE_REG0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_HASH_TABLE_REG0 &Instance() { return *reinterpret_cast<volatile MAC_HASH_TABLE_REG0*>(0x4043C010); }
};

// MAC Hash Table Register 1
//
union MAC_HASH_TABLE_REG1 {
  
  // Bit field definition.
  struct {
    /// read-write - MAC Hash Table Second 32 Bits This field contains the second 32 Bits [63:32] of the Hash table.
    uint32_t HT63T32 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HASH_TABLE_REG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_HASH_TABLE_REG1 &Instance() { return *reinterpret_cast<volatile MAC_HASH_TABLE_REG1*>(0x4043C014); }
};

// MAC VLAN Tag Control
//
union MAC_VLAN_TAG_CTRL {
  
  enum class eOB : uint32_t {
    eDISABLE = 0, // Operation Busy is disabled
    eENABLE = 1, // Operation Busy is enabled
  };
  
  enum class eCT : uint32_t {
    eWRITE = 0, // Write operation
    eREAD = 1, // Read operation
  };
  
  enum class eVTIM : uint32_t {
    eDISABLE = 0, // VLAN Tag Inverse Match is disabled
    eENABLE = 1, // VLAN Tag Inverse Match is enabled
  };
  
  enum class eESVL : uint32_t {
    eDISABLE = 0, // S-VLAN is disabled
    eENABLE = 1, // S-VLAN is enabled
  };
  
  enum class eEVLS : uint32_t {
    eDONOT = 0, // Do not strip
    eIFPASS = 1, // Strip if VLAN filter passes
    eIFFAIL = 2, // Strip if VLAN filter fails
    eALWAYS = 3, // Always strip
  };
  
  enum class eEVLRXS : uint32_t {
    eDISABLE = 0, // VLAN Tag in Rx status is disabled
    eENABLE = 1, // VLAN Tag in Rx status is enabled
  };
  
  enum class eVTHM : uint32_t {
    eDISABLE = 0, // VLAN Tag Hash Table Match is disabled
    eENABLE = 1, // VLAN Tag Hash Table Match is enabled
  };
  
  enum class eEDVLP : uint32_t {
    eDISABLE = 0, // Double VLAN Processing is disabled
    eENABLE = 1, // Double VLAN Processing is enabled
  };
  
  enum class eERIVLT : uint32_t {
    eDISABLE = 0, // Inner VLAN tag is disabled
    eENABLE = 1, // Inner VLAN tag is enabled
  };
  
  enum class eEIVLS : uint32_t {
    eDONOT = 0, // Do not strip
    eIFPASS = 1, // Strip if VLAN filter passes
    eIFFAIL = 2, // Strip if VLAN filter fails
    eALWAYS = 3, // Always strip
  };
  
  enum class eEIVLRXS : uint32_t {
    eDISABLE = 0, // Inner VLAN Tag in Rx status is disabled
    eENABLE = 1, // Inner VLAN Tag in Rx status is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Operation Busy
    eOB OB : 1;
    /// read-write - Command Type
    eCT CT : 1;
    /// read-write - Offset
    uint32_t OFS : 5;
    uint32_t _reserved_0 : 10;
    /// read-write - VLAN Tag Inverse Match Enable
    eVTIM VTIM : 1;
    /// read-write - Enable S-VLAN When this bit is set, the MAC transmitter and receiver consider the S-VLAN packets (Type = 0x88A8) as valid VLAN tagged packets.
    eESVL ESVL : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Enable VLAN Tag Stripping on Receive This field indicates the stripping operation on the outer VLAN Tag in received packet.
    eEVLS EVLS : 2;
    uint32_t _reserved_2 : 1;
    /// read-write - Enable VLAN Tag in Rx status
    eEVLRXS EVLRXS : 1;
    /// read-write - VLAN Tag Hash Table Match Enable
    eVTHM VTHM : 1;
    /// read-write - Enable Double VLAN Processing
    eEDVLP EDVLP : 1;
    /// read-write - ERIVLT
    eERIVLT ERIVLT : 1;
    /// read-write - Enable Inner VLAN Tag Stripping on Receive This field indicates the stripping operation on inner VLAN Tag in received packet.
    eEIVLS EIVLS : 2;
    uint32_t _reserved_3 : 1;
    /// read-write - Enable Inner VLAN Tag in Rx Status
    eEIVLRXS EIVLRXS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_VLAN_TAG_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_VLAN_TAG_CTRL &Instance() { return *reinterpret_cast<volatile MAC_VLAN_TAG_CTRL*>(0x4043C050); }
};

// MAC VLAN Tag Data
//
union MAC_VLAN_TAG_DATA {
  
  enum class eVEN : uint32_t {
    eDISABLE = 0, // VLAN Tag is disabled
    eENABLE = 1, // VLAN Tag is enabled
  };
  
  enum class eETV : uint32_t {
    ebf_16BIT = 0, // 16 bit VLAN comparison
    ebf_12BIT = 1, // 12 bit VLAN comparison
  };
  
  enum class eDOVLTC : uint32_t {
    eENABLE = 0, // VLAN type comparison is enabled
    eDISABLE = 1, // VLAN type comparison is disabled
  };
  
  enum class eERSVLM : uint32_t {
    eDISABLE = 0, // Receive S-VLAN Match is disabled
    eENABLE = 1, // Receive S-VLAN Match is enabled
  };
  
  enum class eERIVLT : uint32_t {
    eDISABLE = 0, // Inner VLAN tag comparison is disabled
    eENABLE = 1, // Inner VLAN tag comparison is enabled
  };
  
  enum class eDMACHEN : uint32_t {
    eDISABLE = 0, // DMA Channel Number is disabled
    eENABLE = 1, // DMA Channel Number is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - VLAN Tag ID
    uint32_t VID : 16;
    /// read-write - VLAN Tag Enable
    eVEN VEN : 1;
    /// read-write - 12bits or 16bits VLAN comparison
    eETV ETV : 1;
    /// read-write - Disable VLAN Type Comparison
    eDOVLTC DOVLTC : 1;
    /// read-write - Enable S-VLAN Match for received Frames
    eERSVLM ERSVLM : 1;
    /// read-write - Enable Inner VLAN Tag Comparison
    eERIVLT ERIVLT : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - DMA Channel Number Enable
    eDMACHEN DMACHEN : 1;
    /// read-write - DMA Channel Number
    uint32_t DMACHN : 3;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_VLAN_TAG_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_VLAN_TAG_DATA &Instance() { return *reinterpret_cast<volatile MAC_VLAN_TAG_DATA*>(0x4043C054); }
};

// MAC VLAN Hash Table
//
union MAC_VLAN_HASH_TABLE {
  
  // Bit field definition.
  struct {
    /// read-write - VLAN Hash Table This field contains the 16-bit VLAN Hash Table.
    uint32_t VLHT : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_VLAN_HASH_TABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_VLAN_HASH_TABLE &Instance() { return *reinterpret_cast<volatile MAC_VLAN_HASH_TABLE*>(0x4043C058); }
};

// VLAN Tag Inclusion or Replacement
//
union MAC_VLAN_INCL {
  
  enum class eVLC : uint32_t {
    eNONE = 0, // No VLAN tag deletion, insertion, or replacement
    eDELETE = 1, // VLAN tag deletion
    eINSERT = 2, // VLAN tag insertion
    eREPLACE = 3, // VLAN tag replacement
  };
  
  enum class eVLP : uint32_t {
    eDISABLE = 0, // VLAN Priority Control is disabled
    eENABLE = 1, // VLAN Priority Control is enabled
  };
  
  enum class eCSVL : uint32_t {
    eC_VLAN = 0, // C-VLAN type (0x8100) is inserted or replaced
    eS_VLAN = 1, // S-VLAN type (0x88A8) is inserted or replaced
  };
  
  enum class eVLTI : uint32_t {
    eDISABLE = 0, // VLAN Tag Input is disabled
    eENABLE = 1, // VLAN Tag Input is enabled
  };
  
  enum class eCBTI : uint32_t {
    eDISABLE = 0, // Channel based tag insertion is disabled
    eENABLE = 1, // Channel based tag insertion is enabled
  };
  
  enum class eRDWR : uint32_t {
    eREAD = 0, // Read operation of indirect access
    eWRITE = 1, // Write operation of indirect access
  };
  
  enum class eBUSY : uint32_t {
    eINACTIVE = 0, // Busy status not detected
    eACTIVE = 1, // Busy status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - VLAN Tag for Transmit Packets
    uint32_t VLT : 16;
    /// read-write - VLAN Tag Control in Transmit Packets - 2'b00: No VLAN tag deletion, insertion, or replacement - 2'b01: VLAN tag deletion The MAC removes the VLAN type (bytes 13 and 14) and VLAN tag (bytes 15 and 16) of all transmitted packets with VLAN tags.
    eVLC VLC : 2;
    /// read-write - VLAN Priority Control
    eVLP VLP : 1;
    /// read-write - C-VLAN or S-VLAN
    eCSVL CSVL : 1;
    /// read-write - VLAN Tag Input When this bit is set, it indicates that the VLAN tag to be inserted or replaced in Tx packet should be taken from: - The Tx descriptor
    eVLTI VLTI : 1;
    /// read-write - Channel based tag insertion
    eCBTI CBTI : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Address
    uint32_t ADDR : 3;
    uint32_t _reserved_1 : 3;
    /// read-write - Read write control
    eRDWR RDWR : 1;
    /// read-only - Busy
    eBUSY BUSY : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_VLAN_INCL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_VLAN_INCL &Instance() { return *reinterpret_cast<volatile MAC_VLAN_INCL*>(0x4043C060); }
};

// MAC Inner VLAN Tag Inclusion or Replacement
//
union MAC_INNER_VLAN_INCL {
  
  enum class eVLC : uint32_t {
    eNONE = 0, // No VLAN tag deletion, insertion, or replacement
    eDELETE = 1, // VLAN tag deletion
    eINSERT = 2, // VLAN tag insertion
    eREPLACE = 3, // VLAN tag replacement
  };
  
  enum class eVLP : uint32_t {
    eDISABLE = 0, // VLAN Priority Control is disabled
    eENABLE = 1, // VLAN Priority Control is enabled
  };
  
  enum class eCSVL : uint32_t {
    eC_VLAN = 0, // C-VLAN type (0x8100) is inserted
    eS_VLAN = 1, // S-VLAN type (0x88A8) is inserted
  };
  
  enum class eVLTI : uint32_t {
    eDISABLE = 0, // VLAN Tag Input is disabled
    eENABLE = 1, // VLAN Tag Input is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - VLAN Tag for Transmit Packets
    uint32_t VLT : 16;
    /// read-write - VLAN Tag Control in Transmit Packets
    eVLC VLC : 2;
    /// read-write - VLAN Priority Control
    eVLP VLP : 1;
    /// read-write - C-VLAN or S-VLAN
    eCSVL CSVL : 1;
    /// read-write - VLAN Tag Input When this bit is set, it indicates that the VLAN tag to be inserted or replaced in Tx packet should be taken from: - The Tx descriptor
    eVLTI VLTI : 1;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_INNER_VLAN_INCL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_INNER_VLAN_INCL &Instance() { return *reinterpret_cast<volatile MAC_INNER_VLAN_INCL*>(0x4043C064); }
};

// MAC Q0 Tx Flow Control
//
union MAC_Q0_TX_FLOW_CTRL {
  
  enum class eFCB_BPA : uint32_t {
    eDISABLE = 0, // Flow Control Busy or Backpressure Activate is disabled
    eENABLE = 1, // Flow Control Busy or Backpressure Activate is enabled
  };
  
  enum class eTFE : uint32_t {
    eDISABLE = 0, // Transmit Flow Control is disabled
    eENABLE = 1, // Transmit Flow Control is enabled
  };
  
  enum class ePLT : uint32_t {
    ePT4 = 0, // Pause Time minus 4 Slot Times (PT -4 slot times)
    ePT28 = 1, // Pause Time minus 28 Slot Times (PT -28 slot times)
    ePT36 = 2, // Pause Time minus 36 Slot Times (PT -36 slot times)
    ePT144 = 3, // Pause Time minus 144 Slot Times (PT -144 slot times)
    ePT256 = 4, // Pause Time minus 256 Slot Times (PT -256 slot times)
    ePT512 = 5, // Pause Time minus 512 Slot Times (PT -512 slot times)
  };
  
  enum class eDZPQ : uint32_t {
    eENABLE = 0, // Zero-Quanta Pause packet generation is enabled
    eDISABLE = 1, // Zero-Quanta Pause packet generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flow Control Busy or Backpressure Activate
    eFCB_BPA FCB_BPA : 1;
    /// read-write - Transmit Flow Control Enable
    eTFE TFE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Pause Low Threshold
    ePLT PLT : 3;
    /// read-write - Disable Zero-Quanta Pause
    eDZPQ DZPQ : 1;
    uint32_t _reserved_1 : 8;
    /// read-write - Pause Time
    uint32_t PT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_Q0_TX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_Q0_TX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_Q0_TX_FLOW_CTRL*>(0x4043C070); }
};

// MAC Q1 Tx Flow Control
//
union MAC_Q1_TX_FLOW_CTRL {
  
  enum class eFCB_BPA : uint32_t {
    eDISABLE = 0, // Flow Control Busy or Backpressure Activate is disabled
    eENABLE = 1, // Flow Control Busy or Backpressure Activate is enabled
  };
  
  enum class eTFE : uint32_t {
    eDISABLE = 0, // Transmit Flow Control is disabled
    eENABLE = 1, // Transmit Flow Control is enabled
  };
  
  enum class ePLT : uint32_t {
    ePT4 = 0, // Pause Time minus 4 Slot Times (PT -4 slot times)
    ePT28 = 1, // Pause Time minus 28 Slot Times (PT -28 slot times)
    ePT36 = 2, // Pause Time minus 36 Slot Times (PT -36 slot times)
    ePT144 = 3, // Pause Time minus 144 Slot Times (PT -144 slot times)
    ePT256 = 4, // Pause Time minus 256 Slot Times (PT -256 slot times)
    ePT512 = 5, // Pause Time minus 512 Slot Times (PT -512 slot times)
  };
  
  enum class eDZPQ : uint32_t {
    eENABLE = 0, // Zero-Quanta Pause packet generation is enabled
    eDISABLE = 1, // Zero-Quanta Pause packet generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flow Control Busy
    eFCB_BPA FCB_BPA : 1;
    /// read-write - Transmit Flow Control Enable
    eTFE TFE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Pause Low Threshold
    ePLT PLT : 3;
    /// read-write - Disable Zero-Quanta Pause
    eDZPQ DZPQ : 1;
    uint32_t _reserved_1 : 8;
    /// read-write - Pause Time
    uint32_t PT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_Q1_TX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_Q1_TX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_Q1_TX_FLOW_CTRL*>(0x4043C074); }
};

// MAC Q2 Tx Flow Control
//
union MAC_Q2_TX_FLOW_CTRL {
  
  enum class eFCB_BPA : uint32_t {
    eDISABLE = 0, // Flow Control Busy or Backpressure Activate is disabled
    eENABLE = 1, // Flow Control Busy or Backpressure Activate is enabled
  };
  
  enum class eTFE : uint32_t {
    eDISABLE = 0, // Transmit Flow Control is disabled
    eENABLE = 1, // Transmit Flow Control is enabled
  };
  
  enum class ePLT : uint32_t {
    ePT4 = 0, // Pause Time minus 4 Slot Times (PT -4 slot times)
    ePT28 = 1, // Pause Time minus 28 Slot Times (PT -28 slot times)
    ePT36 = 2, // Pause Time minus 36 Slot Times (PT -36 slot times)
    ePT144 = 3, // Pause Time minus 144 Slot Times (PT -144 slot times)
    ePT256 = 4, // Pause Time minus 256 Slot Times (PT -256 slot times)
    ePT512 = 5, // Pause Time minus 512 Slot Times (PT -512 slot times)
  };
  
  enum class eDZPQ : uint32_t {
    eENABLE = 0, // Zero-Quanta Pause packet generation is enabled
    eDISABLE = 1, // Zero-Quanta Pause packet generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flow Control Busy
    eFCB_BPA FCB_BPA : 1;
    /// read-write - Transmit Flow Control Enable
    eTFE TFE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Pause Low Threshold
    ePLT PLT : 3;
    /// read-write - Disable Zero-Quanta Pause
    eDZPQ DZPQ : 1;
    uint32_t _reserved_1 : 8;
    /// read-write - Pause Time
    uint32_t PT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_Q2_TX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_Q2_TX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_Q2_TX_FLOW_CTRL*>(0x4043C078); }
};

// MAC Q3 Tx Flow Control
//
union MAC_Q3_TX_FLOW_CTRL {
  
  enum class eFCB_BPA : uint32_t {
    eDISABLE = 0, // Flow Control Busy or Backpressure Activate is disabled
    eENABLE = 1, // Flow Control Busy or Backpressure Activate is enabled
  };
  
  enum class eTFE : uint32_t {
    eDISABLE = 0, // Transmit Flow Control is disabled
    eENABLE = 1, // Transmit Flow Control is enabled
  };
  
  enum class ePLT : uint32_t {
    ePT4 = 0, // Pause Time minus 4 Slot Times (PT -4 slot times)
    ePT28 = 1, // Pause Time minus 28 Slot Times (PT -28 slot times)
    ePT36 = 2, // Pause Time minus 36 Slot Times (PT -36 slot times)
    ePT144 = 3, // Pause Time minus 144 Slot Times (PT -144 slot times)
    ePT256 = 4, // Pause Time minus 256 Slot Times (PT -256 slot times)
    ePT512 = 5, // Pause Time minus 512 Slot Times (PT -512 slot times)
  };
  
  enum class eDZPQ : uint32_t {
    eENABLE = 0, // Zero-Quanta Pause packet generation is enabled
    eDISABLE = 1, // Zero-Quanta Pause packet generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flow Control Busy
    eFCB_BPA FCB_BPA : 1;
    /// read-write - Transmit Flow Control Enable
    eTFE TFE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Pause Low Threshold
    ePLT PLT : 3;
    /// read-write - Disable Zero-Quanta Pause
    eDZPQ DZPQ : 1;
    uint32_t _reserved_1 : 8;
    /// read-write - Pause Time
    uint32_t PT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_Q3_TX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_Q3_TX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_Q3_TX_FLOW_CTRL*>(0x4043C07C); }
};

// MAC Q4 Tx Flow Control
//
union MAC_Q4_TX_FLOW_CTRL {
  
  enum class eFCB_BPA : uint32_t {
    eDISABLE = 0, // Flow Control Busy or Backpressure Activate is disabled
    eENABLE = 1, // Flow Control Busy or Backpressure Activate is enabled
  };
  
  enum class eTFE : uint32_t {
    eDISABLE = 0, // Transmit Flow Control is disabled
    eENABLE = 1, // Transmit Flow Control is enabled
  };
  
  enum class ePLT : uint32_t {
    ePT4 = 0, // Pause Time minus 4 Slot Times (PT -4 slot times)
    ePT28 = 1, // Pause Time minus 28 Slot Times (PT -28 slot times)
    ePT36 = 2, // Pause Time minus 36 Slot Times (PT -36 slot times)
    ePT144 = 3, // Pause Time minus 144 Slot Times (PT -144 slot times)
    ePT256 = 4, // Pause Time minus 256 Slot Times (PT -256 slot times)
    ePT512 = 5, // Pause Time minus 512 Slot Times (PT -512 slot times)
  };
  
  enum class eDZPQ : uint32_t {
    eENABLE = 0, // Zero-Quanta Pause packet generation is enabled
    eDISABLE = 1, // Zero-Quanta Pause packet generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flow Control Busy
    eFCB_BPA FCB_BPA : 1;
    /// read-write - Transmit Flow Control Enable
    eTFE TFE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Pause Low Threshold
    ePLT PLT : 3;
    /// read-write - Disable Zero-Quanta Pause
    eDZPQ DZPQ : 1;
    uint32_t _reserved_1 : 8;
    /// read-write - Pause Time
    uint32_t PT : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_Q4_TX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_Q4_TX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_Q4_TX_FLOW_CTRL*>(0x4043C080); }
};

// MAC Rx Flow Control
//
union MAC_RX_FLOW_CTRL {
  
  enum class eRFE : uint32_t {
    eDISABLE = 0, // Receive Flow Control is disabled
    eENABLE = 1, // Receive Flow Control is enabled
  };
  
  enum class eUP : uint32_t {
    eDISABLE = 0, // Unicast Pause Packet Detect disabled
    eENABLE = 1, // Unicast Pause Packet Detect enabled
  };
  
  enum class ePFCE : uint32_t {
    eDISABLE = 0, // Priority Based Flow Control is disabled
    eENABLE = 1, // Priority Based Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Flow Control Enable
    eRFE RFE : 1;
    /// read-write - Unicast Pause Packet Detect
    eUP UP : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Priority Based Flow Control Enable
    ePFCE PFCE : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_FLOW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_FLOW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_RX_FLOW_CTRL*>(0x4043C090); }
};

// Receive Queue Control 4
//
union MAC_RXQ_CTRL4 {
  
  enum class eUFFQE : uint32_t {
    eDISABLE = 0, // Unicast Address Filter Fail Packets Queuing is disabled
    eENABLE = 1, // Unicast Address Filter Fail Packets Queuing is enabled
  };
  
  enum class eMFFQE : uint32_t {
    eDISABLE = 0, // Multicast Address Filter Fail Packets Queuing is disabled
    eENABLE = 1, // Multicast Address Filter Fail Packets Queuing is enabled
  };
  
  enum class eVFFQE : uint32_t {
    eDISABLE = 0, // VLAN tag Filter Fail Packets Queuing is disabled
    eENABLE = 1, // VLAN tag Filter Fail Packets Queuing is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Unicast Address Filter Fail Packets Queuing Enable.
    eUFFQE UFFQE : 1;
    /// read-write - Unicast Address Filter Fail Packets Queue.
    uint32_t UFFQ : 3;
    uint32_t _reserved_0 : 4;
    /// read-write - Multicast Address Filter Fail Packets Queuing Enable.
    eMFFQE MFFQE : 1;
    /// read-write - Multicast Address Filter Fail Packets Queue.
    uint32_t MFFQ : 3;
    uint32_t _reserved_1 : 4;
    /// read-write - VLAN Tag Filter Fail Packets Queuing Enable
    eVFFQE VFFQE : 1;
    /// read-write - VLAN Tag Filter Fail Packets Queue
    uint32_t VFFQ : 3;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXQ_CTRL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXQ_CTRL4 &Instance() { return *reinterpret_cast<volatile MAC_RXQ_CTRL4*>(0x4043C094); }
};

// Transmit Queue Priority Mapping 0
//
union MAC_TXQ_PRTY_MAP0 {
  
  // Bit field definition.
  struct {
    /// read-write - Priorities Selected in Transmit Queue 0
    uint32_t PSTQ0 : 8;
    /// read-write - Priorities Selected in Transmit Queue 1 This bit is similar to the PSTQ0 bit.
    uint32_t PSTQ1 : 8;
    /// read-write - Priorities Selected in Transmit Queue 2 This bit is similar to the PSTQ0 bit.
    uint32_t PSTQ2 : 8;
    /// read-write - Priorities Selected in Transmit Queue 3 This bit is similar to the PSTQ0 bit.
    uint32_t PSTQ3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TXQ_PRTY_MAP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TXQ_PRTY_MAP0 &Instance() { return *reinterpret_cast<volatile MAC_TXQ_PRTY_MAP0*>(0x4043C098); }
};

// Transmit Queue Priority Mapping 1
//
union MAC_TXQ_PRTY_MAP1 {
  
  // Bit field definition.
  struct {
    /// read-write - Priorities Selected in Transmit Queue 4
    uint32_t PSTQ4 : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TXQ_PRTY_MAP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TXQ_PRTY_MAP1 &Instance() { return *reinterpret_cast<volatile MAC_TXQ_PRTY_MAP1*>(0x4043C09C); }
};

// Receive Queue Control 0
//
union MAC_RXQ_CTRL0 {
  
  enum class eRXQ0EN : uint32_t {
    eDISABLE = 0, // Queue not enabled
    eEN_AV = 1, // Queue enabled for AV
    eEN_DCB_GEN = 2, // Queue enabled for DCB/Generic
  };
  
  enum class eRXQ1EN : uint32_t {
    eDISABLE = 0, // Queue not enabled
    eEN_AV = 1, // Queue enabled for AV
    eEN_DCB_GEN = 2, // Queue enabled for DCB/Generic
  };
  
  enum class eRXQ2EN : uint32_t {
    eDISABLE = 0, // Queue not enabled
    eEN_AV = 1, // Queue enabled for AV
    eEN_DCB_GEN = 2, // Queue enabled for DCB/Generic
  };
  
  enum class eRXQ3EN : uint32_t {
    eDISABLE = 0, // Queue not enabled
    eEN_AV = 1, // Queue enabled for AV
    eEN_DCB_GEN = 2, // Queue enabled for DCB/Generic
  };
  
  enum class eRXQ4EN : uint32_t {
    eDISABLE = 0, // Queue not enabled
    eEN_AV = 1, // Queue enabled for AV
    eEN_DCB_GEN = 2, // Queue enabled for DCB/Generic
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue 0 Enable This field indicates whether Rx Queue 0 is enabled for AV or DCB.
    eRXQ0EN RXQ0EN : 2;
    /// read-write - Receive Queue 1 Enable This field is similar to the RXQ0EN field.
    eRXQ1EN RXQ1EN : 2;
    /// read-write - Receive Queue 2 Enable This field is similar to the RXQ0EN field.
    eRXQ2EN RXQ2EN : 2;
    /// read-write - Receive Queue 3 Enable This field is similar to the RXQ0EN field.
    eRXQ3EN RXQ3EN : 2;
    /// read-write - Receive Queue 4 Enable This field is similar to the RXQ0EN field.
    eRXQ4EN RXQ4EN : 2;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXQ_CTRL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXQ_CTRL0 &Instance() { return *reinterpret_cast<volatile MAC_RXQ_CTRL0*>(0x4043C0A0); }
};

// Receive Queue Control 1
//
union MAC_RXQ_CTRL1 {
  
  enum class eAVCPQ : uint32_t {
    eQUEUE0 = 0, // Receive Queue 0
    eQUEUE1 = 1, // Receive Queue 1
    eQUEUE2 = 2, // Receive Queue 2
    eQUEUE3 = 3, // Receive Queue 3
    eQUEUE4 = 4, // Receive Queue 4
  };
  
  enum class ePTPQ : uint32_t {
    eQUEUE0 = 0, // Receive Queue 0
    eQUEUE1 = 1, // Receive Queue 1
    eQUEUE2 = 2, // Receive Queue 2
    eQUEUE3 = 3, // Receive Queue 3
    eQUEUE4 = 4, // Receive Queue 4
  };
  
  enum class eDCBCPQ : uint32_t {
    eQUEUE0 = 0, // Receive Queue 0
    eQUEUE1 = 1, // Receive Queue 1
    eQUEUE2 = 2, // Receive Queue 2
    eQUEUE3 = 3, // Receive Queue 3
    eQUEUE4 = 4, // Receive Queue 4
  };
  
  enum class eUPQ : uint32_t {
    eQUEUE0 = 0, // Receive Queue 0
    eQUEUE1 = 1, // Receive Queue 1
    eQUEUE2 = 2, // Receive Queue 2
    eQUEUE3 = 3, // Receive Queue 3
    eQUEUE4 = 4, // Receive Queue 4
  };
  
  enum class eMCBCQ : uint32_t {
    eQUEUE0 = 0, // Receive Queue 0
    eQUEUE1 = 1, // Receive Queue 1
    eQUEUE2 = 2, // Receive Queue 2
    eQUEUE3 = 3, // Receive Queue 3
    eQUEUE4 = 4, // Receive Queue 4
  };
  
  enum class eMCBCQEN : uint32_t {
    eDISABLE = 0, // Multicast and Broadcast Queue is disabled
    eENABLE = 1, // Multicast and Broadcast Queue is enabled
  };
  
  enum class eTACPQE : uint32_t {
    eDISABLE = 0, // Tagged AV Control Packets Queuing is disabled
    eENABLE = 1, // Tagged AV Control Packets Queuing is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - AV Untagged Control Packets Queue
    eAVCPQ AVCPQ : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - PTP Packets Queue
    ePTPQ PTPQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - DCB Control Packets Queue
    eDCBCPQ DCBCPQ : 3;
    uint32_t _reserved_2 : 1;
    /// read-write - Untagged Packet Queue
    eUPQ UPQ : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - Multicast and Broadcast Queue
    eMCBCQ MCBCQ : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Multicast and Broadcast Queue Enable This bit specifies that Multicast or Broadcast packets routing to the Rx Queue is enabled and the Multicast or Broadcast packets must be routed to Rx Queue specified in MCBCQ field.
    eMCBCQEN MCBCQEN : 1;
    /// read-write - Tagged AV Control Packets Queuing Enable.
    eTACPQE TACPQE : 1;
    /// read-write - Tagged PTP over Ethernet Packets Queuing Control.
    uint32_t TPQC : 2;
    /// read-write - Frame Preemption Residue Queue
    uint32_t FPRQ : 3;
    uint32_t _reserved_5 : 5;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXQ_CTRL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXQ_CTRL1 &Instance() { return *reinterpret_cast<volatile MAC_RXQ_CTRL1*>(0x4043C0A4); }
};

// Receive Queue Control 2
//
union MAC_RXQ_CTRL2 {
  
  // Bit field definition.
  struct {
    /// read-write - Priorities Selected in the Receive Queue 0
    uint32_t PSRQ0 : 8;
    /// read-write - Priorities Selected in the Receive Queue 1
    uint32_t PSRQ1 : 8;
    /// read-write - Priorities Selected in the Receive Queue 2
    uint32_t PSRQ2 : 8;
    /// read-write - Priorities Selected in the Receive Queue 3
    uint32_t PSRQ3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXQ_CTRL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXQ_CTRL2 &Instance() { return *reinterpret_cast<volatile MAC_RXQ_CTRL2*>(0x4043C0A8); }
};

// Receive Queue Control 3
//
union MAC_RXQ_CTRL3 {
  
  // Bit field definition.
  struct {
    /// read-write - Priorities Selected in the Receive Queue 4
    uint32_t PSRQ4 : 8;
    uint32_t _reserved_0 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXQ_CTRL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXQ_CTRL3 &Instance() { return *reinterpret_cast<volatile MAC_RXQ_CTRL3*>(0x4043C0AC); }
};

// Interrupt Status
//
union MAC_INTERRUPT_STATUS {
  
  enum class eRGSMIIIS : uint32_t {
    eINACTIVE = 0, // RGMII or SMII Interrupt Status is not active
    eACTIVE = 1, // RGMII or SMII Interrupt Status is active
  };
  
  enum class ePHYIS : uint32_t {
    eINACTIVE = 0, // PHY Interrupt not detected
    eACTIVE = 1, // PHY Interrupt detected
  };
  
  enum class ePMTIS : uint32_t {
    eINACTIVE = 0, // PMT Interrupt status not active
    eACTIVE = 1, // PMT Interrupt status active
  };
  
  enum class eLPIIS : uint32_t {
    eINACTIVE = 0, // LPI Interrupt status not active
    eACTIVE = 1, // LPI Interrupt status active
  };
  
  enum class eMMCIS : uint32_t {
    eINACTIVE = 0, // MMC Interrupt status not active
    eACTIVE = 1, // MMC Interrupt status active
  };
  
  enum class eMMCRXIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Interrupt status not active
    eACTIVE = 1, // MMC Receive Interrupt status active
  };
  
  enum class eMMCTXIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Interrupt status not active
    eACTIVE = 1, // MMC Transmit Interrupt status active
  };
  
  enum class eMMCRXIPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Checksum Offload Interrupt status not active
    eACTIVE = 1, // MMC Receive Checksum Offload Interrupt status active
  };
  
  enum class eTSIS : uint32_t {
    eINACTIVE = 0, // Timestamp Interrupt status not active
    eACTIVE = 1, // Timestamp Interrupt status active
  };
  
  enum class eTXSTSIS : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not active
    eACTIVE = 1, // Transmit Interrupt status active
  };
  
  enum class eRXSTSIS : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not active
    eACTIVE = 1, // Receive Interrupt status active
  };
  
  enum class eFPEIS : uint32_t {
    eINACTIVE = 0, // Frame Preemption Interrupt status not active
    eACTIVE = 1, // Frame Preemption Interrupt status active
  };
  
  enum class eMDIOIS : uint32_t {
    eINACTIVE = 0, // MDIO Interrupt status not active
    eACTIVE = 1, // MDIO Interrupt status active
  };
  
  enum class eMFTIS : uint32_t {
    eINACTIVE = 0, // MMC FPE Transmit Interrupt status not active
    eACTIVE = 1, // MMC FPE Transmit Interrupt status active
  };
  
  enum class eMFRIS : uint32_t {
    eINACTIVE = 0, // MMC FPE Receive Interrupt status not active
    eACTIVE = 1, // MMC FPE Receive Interrupt status active
  };
  
  // Bit field definition.
  struct {
    /// read-only - RGMII or SMII Interrupt Status
    eRGSMIIIS RGSMIIIS : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - PHY Interrupt
    ePHYIS PHYIS : 1;
    /// read-only - PMT Interrupt Status
    ePMTIS PMTIS : 1;
    /// read-only - LPI Interrupt Status
    eLPIIS LPIIS : 1;
    uint32_t _reserved_1 : 2;
    /// read-only - MMC Interrupt Status
    eMMCIS MMCIS : 1;
    /// read-only - MMC Receive Interrupt Status
    eMMCRXIS MMCRXIS : 1;
    /// read-only - MMC Transmit Interrupt Status
    eMMCTXIS MMCTXIS : 1;
    /// read-only - MMC Receive Checksum Offload Interrupt Status
    eMMCRXIPIS MMCRXIPIS : 1;
    /// read-only - Timestamp Interrupt Status
    eTSIS TSIS : 1;
    /// read-only - Transmit Status Interrupt
    eTXSTSIS TXSTSIS : 1;
    /// read-only - Receive Status Interrupt
    eRXSTSIS RXSTSIS : 1;
    uint32_t _reserved_2 : 2;
    /// read-only - Frame Preemption Interrupt Status
    eFPEIS FPEIS : 1;
    /// read-only - MDIO Interrupt Status
    eMDIOIS MDIOIS : 1;
    /// read-only - MMC FPE Transmit Interrupt Status
    eMFTIS MFTIS : 1;
    /// read-only - MMC FPE Receive Interrupt Status
    eMFRIS MFRIS : 1;
    uint32_t _reserved_3 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_INTERRUPT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_INTERRUPT_STATUS &Instance() { return *reinterpret_cast<volatile MAC_INTERRUPT_STATUS*>(0x4043C0B0); }
};

// Interrupt Enable
//
union MAC_INTERRUPT_ENABLE {
  
  enum class eRGSMIIIE : uint32_t {
    eDISABLE = 0, // RGMII or SMII Interrupt is disabled
    eENABLE = 1, // RGMII or SMII Interrupt is enabled
  };
  
  enum class ePHYIE : uint32_t {
    eDISABLE = 0, // PHY Interrupt is disabled
    eENABLE = 1, // PHY Interrupt is enabled
  };
  
  enum class ePMTIE : uint32_t {
    eDISABLE = 0, // PMT Interrupt is disabled
    eENABLE = 1, // PMT Interrupt is enabled
  };
  
  enum class eLPIIE : uint32_t {
    eDISABLE = 0, // LPI Interrupt is disabled
    eENABLE = 1, // LPI Interrupt is enabled
  };
  
  enum class eTSIE : uint32_t {
    eDISABLE = 0, // Timestamp Interrupt is disabled
    eENABLE = 1, // Timestamp Interrupt is enabled
  };
  
  enum class eTXSTSIE : uint32_t {
    eDISABLE = 0, // Timestamp Status Interrupt is disabled
    eENABLE = 1, // Timestamp Status Interrupt is enabled
  };
  
  enum class eRXSTSIE : uint32_t {
    eDISABLE = 0, // Receive Status Interrupt is disabled
    eENABLE = 1, // Receive Status Interrupt is enabled
  };
  
  enum class eFPEIE : uint32_t {
    eDISABLE = 0, // Frame Preemption Interrupt is disabled
    eENABLE = 1, // Frame Preemption Interrupt is enabled
  };
  
  enum class eMDIOIE : uint32_t {
    eDISABLE = 0, // MDIO Interrupt is disabled
    eENABLE = 1, // MDIO Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - RGMII or SMII Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of RGSMIIIS bit in MAC_INTERRUPT_STATUS register.
    eRGSMIIIE RGSMIIIE : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - PHY Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[PHYIS].
    ePHYIE PHYIE : 1;
    /// read-write - PMT Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[PMTIS].
    ePMTIE PMTIE : 1;
    /// read-write - LPI Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[LPIIS].
    eLPIIE LPIIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Timestamp Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[TSIS].
    eTSIE TSIE : 1;
    /// read-write - Transmit Status Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[TXSTSIS].
    eTXSTSIE TXSTSIE : 1;
    /// read-write - Receive Status Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of MAC_INTERRUPT_STATUS[RXSTSIS].
    eRXSTSIE RXSTSIE : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - Frame Preemption Interrupt Enable When this bit is set, it enables the assertion of the interrupt when FPEIS field is set in the MAC_INTERRUPT_STATUS.
    eFPEIE FPEIE : 1;
    /// read-write - MDIO Interrupt Enable When this bit is set, it enables the assertion of the interrupt when MDIOIS field is set in the MAC_INTERRUPT_STATUS register.
    eMDIOIE MDIOIE : 1;
    uint32_t _reserved_3 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile MAC_INTERRUPT_ENABLE*>(0x4043C0B4); }
};

// Receive Transmit Status
//
union MAC_RX_TX_STATUS {
  
  enum class eTJT : uint32_t {
    eINACTIVE = 0, // No Transmit Jabber Timeout
    eACTIVE = 1, // Transmit Jabber Timeout occurred
  };
  
  enum class eNCARR : uint32_t {
    eINACTIVE = 0, // Carrier is present
    eACTIVE = 1, // No carrier
  };
  
  enum class eLCARR : uint32_t {
    eINACTIVE = 0, // Carrier is present
    eACTIVE = 1, // Loss of carrier
  };
  
  enum class eEXDEF : uint32_t {
    eINACTIVE = 0, // No Excessive deferral
    eACTIVE = 1, // Excessive deferral
  };
  
  enum class eLCOL : uint32_t {
    eINACTIVE = 0, // No collision
    eACTIVE = 1, // Late collision is sensed
  };
  
  enum class eEXCOL : uint32_t {
    eINACTIVE = 0, // No collision
    eACTIVE = 1, // Excessive collision is sensed
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // No receive watchdog timeout
    eACTIVE = 1, // Receive watchdog timed out
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Jabber Timeout This bit indicates that the Transmit Jabber Timer expired which happens when the packet size exceeds 2,048 bytes (10,240 bytes when the Jumbo packet is enabled) and JD bit is reset in the MAC_CONFIGURATION register.
    eTJT TJT : 1;
    /// read-only - No Carrier When the DTXSTS bit is set in the MAC_OPERATION_MODE register, this bit indicates that the carrier signal from the PHY is not present at the end of preamble transmission.
    eNCARR NCARR : 1;
    /// read-only - Loss of Carrier When the DTXSTS bit is set in the MAC_OPERATION_MODE register, this bit indicates that the loss of carrier occurred during packet transmission, that is, the phy_crs_i signal was inactive for one or more transmission clock periods during packet transmission.
    eLCARR LCARR : 1;
    /// read-only - Excessive Deferral When the DTXSTS bit is set in the MAC_OPERATION_MODE register and the DC bit is set in the MAC_CONFIGURATION register, this bit indicates that the transmission ended because of excessive deferral of over 24,288 bit times (155,680 in 1000/2500 Mbps mode or when Jumbo packet is enabled).
    eEXDEF EXDEF : 1;
    /// read-only - Late Collision When the DTXSTS bit is set in the MAC_OPERATION_MODE register, this bit indicates that the packet transmission aborted because a collision occurred after the collision window (64 bytes including Preamble in MII mode; 512 bytes including Preamble and Carrier Extension in GMII mode).
    eLCOL LCOL : 1;
    /// read-only - Excessive Collisions When the DTXSTS bit is set in the MAC_OPERATION_MODE register, this bit indicates that the transmission aborted after 16 successive collisions while attempting to transmit the current packet.
    eEXCOL EXCOL : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - Receive Watchdog Timeout This bit is set when a packet with length greater than 2,048 bytes is received (10, 240 bytes when Jumbo Packet mode is enabled) and the WD bit is reset in the MAC_CONFIGURATION register.
    eRWT RWT : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_TX_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_TX_STATUS &Instance() { return *reinterpret_cast<volatile MAC_RX_TX_STATUS*>(0x4043C0B8); }
};

// PMT Control and Status
//
union MAC_PMT_CONTROL_STATUS {
  
  enum class ePWRDWN : uint32_t {
    eDISABLE = 0, // Power down is disabled
    eENABLE = 1, // Power down is enabled
  };
  
  enum class eMGKPKTEN : uint32_t {
    eDISABLE = 0, // Magic Packet is disabled
    eENABLE = 1, // Magic Packet is enabled
  };
  
  enum class eRWKPKTEN : uint32_t {
    eDISABLE = 0, // Remote wake-up packet is disabled
    eENABLE = 1, // Remote wake-up packet is enabled
  };
  
  enum class eMGKPRCVD : uint32_t {
    eINACTIVE = 0, // No Magic packet is received
    eACTIVE = 1, // Magic packet is received
  };
  
  enum class eRWKPRCVD : uint32_t {
    eINACTIVE = 0, // Remote wake-up packet is received
    eACTIVE = 1, // Remote wake-up packet is received
  };
  
  enum class eGLBLUCAST : uint32_t {
    eDISABLE = 0, // Global unicast is disabled
    eENABLE = 1, // Global unicast is enabled
  };
  
  enum class eRWKPFE : uint32_t {
    eDISABLE = 0, // Remote Wake-up Packet Forwarding is disabled
    eENABLE = 1, // Remote Wake-up Packet Forwarding is enabled
  };
  
  enum class eRWKFILTRST : uint32_t {
    eDISABLE = 0, // Remote Wake-Up Packet Filter Register Pointer is not Reset
    eENABLE = 1, // Remote Wake-Up Packet Filter Register Pointer is Reset
  };
  
  // Bit field definition.
  struct {
    /// read-write - Power Down When this bit is set, the MAC receiver drops all received packets until it receives the expected magic packet or remote wake-up packet.
    ePWRDWN PWRDWN : 1;
    /// read-write - Magic Packet Enable When this bit is set, a power management event is generated when the MAC receives a magic packet.
    eMGKPKTEN MGKPKTEN : 1;
    /// read-write - Remote Wake-Up Packet Enable When this bit is set, a power management event is generated when the MAC receives a remote wake-up packet.
    eRWKPKTEN RWKPKTEN : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - Magic Packet Received When this bit is set, it indicates that the power management event is generated because of the reception of a magic packet.
    eMGKPRCVD MGKPRCVD : 1;
    /// read-only - Remote Wake-Up Packet Received When this bit is set, it indicates that the power management event is generated because of the reception of a remote wake-up packet.
    eRWKPRCVD RWKPRCVD : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Global Unicast When this bit set, any unicast packet filtered by the MAC (DAF) address recognition is detected as a remote wake-up packet.
    eGLBLUCAST GLBLUCAST : 1;
    /// read-write - Remote Wake-up Packet Forwarding Enable When this bit is set along with RWKPKTEN, the MAC receiver drops all received frames until it receives the expected Wake-up frame.
    eRWKPFE RWKPFE : 1;
    uint32_t _reserved_2 : 13;
    /// read-only - Remote Wake-up FIFO Pointer This field gives the current value (0 to 7, 15, or 31 when 4, 8, or 16 Remote Wake-up Packet Filters are selected) of the Remote Wake-up Packet Filter register pointer.
    uint32_t RWKPTR : 5;
    uint32_t _reserved_3 : 2;
    /// read-write - Remote Wake-Up Packet Filter Register Pointer Reset When this bit is set, the remote wake-up packet filter register pointer is reset to 3'b000.
    eRWKFILTRST RWKFILTRST : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PMT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PMT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MAC_PMT_CONTROL_STATUS*>(0x4043C0C0); }
};

// Remote Wakeup Filter
//
union MAC_RWK_PACKET_FILTER {
  
  // Bit field definition.
  struct {
    /// read-write - RWK Packet Filter This field contains the various controls of RWK Packet filter.
    uint32_t WKUPFRMFTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RWK_PACKET_FILTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RWK_PACKET_FILTER &Instance() { return *reinterpret_cast<volatile MAC_RWK_PACKET_FILTER*>(0x4043C0C4); }
};

// LPI Control and Status
//
union MAC_LPI_CONTROL_STATUS {
  
  enum class eTLPIEN : uint32_t {
    eINACTIVE = 0, // Transmit LPI entry not detected
    eACTIVE = 1, // Transmit LPI entry detected
  };
  
  enum class eTLPIEX : uint32_t {
    eINACTIVE = 0, // Transmit LPI exit not detected
    eACTIVE = 1, // Transmit LPI exit detected
  };
  
  enum class eRLPIEN : uint32_t {
    eINACTIVE = 0, // Receive LPI entry not detected
    eACTIVE = 1, // Receive LPI entry detected
  };
  
  enum class eRLPIEX : uint32_t {
    eINACTIVE = 0, // Receive LPI exit not detected
    eACTIVE = 1, // Receive LPI exit detected
  };
  
  enum class eTLPIST : uint32_t {
    eINACTIVE = 0, // Transmit LPI state not detected
    eACTIVE = 1, // Transmit LPI state detected
  };
  
  enum class eRLPIST : uint32_t {
    eINACTIVE = 0, // Receive LPI state not detected
    eACTIVE = 1, // Receive LPI state detected
  };
  
  enum class eLPIEN : uint32_t {
    eDISABLE = 0, // LPI state is disabled
    eENABLE = 1, // LPI state is enabled
  };
  
  enum class ePLS : uint32_t {
    eDISABLE = 0, // link is down
    eENABLE = 1, // link is okay (UP)
  };
  
  enum class ePLSEN : uint32_t {
    eDISABLE = 0, // PHY Link Status is disabled
    eENABLE = 1, // PHY Link Status is enabled
  };
  
  enum class eLPITXA : uint32_t {
    eDISABLE = 0, // LPI Tx Automate is disabled
    eENABLE = 1, // LPI Tx Automate is enabled
  };
  
  enum class eLPIATE : uint32_t {
    eDISABLE = 0, // LPI Timer is disabled
    eENABLE = 1, // LPI Timer is enabled
  };
  
  enum class eLPITCSE : uint32_t {
    eDISABLE = 0, // LPI Tx Clock Stop is disabled
    eENABLE = 1, // LPI Tx Clock Stop is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit LPI Entry When this bit is set, it indicates that the MAC Transmitter has entered the LPI state because of the setting of the LPIEN bit.
    eTLPIEN TLPIEN : 1;
    /// read-only - Transmit LPI Exit When this bit is set, it indicates that the MAC transmitter exited the LPI state after the application cleared the LPIEN bit and the LPI TW Timer has expired.
    eTLPIEX TLPIEX : 1;
    /// read-only - Receive LPI Entry When this bit is set, it indicates that the MAC Receiver has received an LPI pattern and entered the LPI state.
    eRLPIEN RLPIEN : 1;
    /// read-only - Receive LPI Exit When this bit is set, it indicates that the MAC Receiver has stopped receiving the LPI pattern on the GMII or MII interface, exited the LPI state, and resumed the normal reception.
    eRLPIEX RLPIEX : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Transmit LPI State When this bit is set, it indicates that the MAC is transmitting the LPI pattern on the GMII or MII interface.
    eTLPIST TLPIST : 1;
    /// read-only - Receive LPI State When this bit is set, it indicates that the MAC is receiving the LPI pattern on the GMII or MII interface.
    eRLPIST RLPIST : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - LPI Enable When this bit is set, it instructs the MAC Transmitter to enter the LPI state.
    eLPIEN LPIEN : 1;
    /// read-write - PHY Link Status This bit indicates the link status of the PHY.
    ePLS PLS : 1;
    /// read-write - PHY Link Status Enable This bit enables the link status received on the RGMII, SGMII, or SMII Receive paths to be used for activating the LPI LS TIMER.
    ePLSEN PLSEN : 1;
    /// read-write - LPI Tx Automate This bit controls the behavior of the MAC when it is entering or coming out of the LPI mode on the Transmit side.
    eLPITXA LPITXA : 1;
    /// read-write - LPI Timer Enable This bit controls the automatic entry of the MAC Transmitter into and exit out of the LPI state.
    eLPIATE LPIATE : 1;
    /// read-write - LPI Tx Clock Stop Enable When this bit is set, the MAC asserts sbd_tx_clk_gating_ctrl_o signal high after it enters Tx LPI mode to indicate that the Tx clock to MAC can be stopped.
    eLPITCSE LPITCSE : 1;
    uint32_t _reserved_2 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LPI_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LPI_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MAC_LPI_CONTROL_STATUS*>(0x4043C0D0); }
};

// LPI Timers Control
//
union MAC_LPI_TIMERS_CONTROL {
  
  // Bit field definition.
  struct {
    /// read-write - LPI TW Timer This field specifies the minimum time (in microseconds) for which the MAC waits after it stops transmitting the LPI pattern to the PHY and before it resumes the normal transmission.
    uint32_t TWT : 16;
    /// read-write - LPI LS Timer This field specifies the minimum time (in milliseconds) for which the link status from the PHY should be up (OKAY) before the LPI pattern can be transmitted to the PHY.
    uint32_t LST : 10;
    uint32_t _reserved_0 : 6;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LPI_TIMERS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x03E80000; }
  static inline volatile MAC_LPI_TIMERS_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_LPI_TIMERS_CONTROL*>(0x4043C0D4); }
};

// Tx LPI Entry Timer Control
//
union MAC_LPI_ENTRY_TIMER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - LPI Entry Timer This field specifies the time in microseconds the MAC waits to enter LPI mode, after it has transmitted all the frames.
    uint32_t LPIET : 17;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LPI_ENTRY_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LPI_ENTRY_TIMER &Instance() { return *reinterpret_cast<volatile MAC_LPI_ENTRY_TIMER*>(0x4043C0D8); }
};

// One-microsecond Reference Timer
//
union MAC_ONEUS_TIC_COUNTER {
  
  // Bit field definition.
  struct {
    /// read-write - 1US TIC Counter The application must program this counter so that the number of clock cycles of CSR clock is 1us.
    uint32_t TIC_1US_CNTR : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ONEUS_TIC_COUNTER() = delete;
  inline void Reset() volatile { this->value = 0x00000063; }
  static inline volatile MAC_ONEUS_TIC_COUNTER &Instance() { return *reinterpret_cast<volatile MAC_ONEUS_TIC_COUNTER*>(0x4043C0DC); }
};

// PHY Interface Control and Status
//
union MAC_PHYIF_CONTROL_STATUS {
  
  enum class eTC : uint32_t {
    eDISABLE = 0, // Disable Transmit Configuration in RGMII, SGMII, or SMII
    eENABLE = 1, // Enable Transmit Configuration in RGMII, SGMII, or SMII
  };
  
  enum class eLUD : uint32_t {
    eLINKDOWN = 0, // Link down
    eLINKUP = 1, // Link up
  };
  
  enum class eLNKMOD : uint32_t {
    eHDUPLX = 0, // Half-duplex mode
    eFDUPLX = 1, // Full-duplex mode
  };
  
  enum class eLNKSPEED : uint32_t {
    ebf_2500K = 0, // 2.5 MHz
    ebf_25M = 1, // 25 MHz
    ebf_125M = 2, // 125 MHz
  };
  
  enum class eLNKSTS : uint32_t {
    eINACTIVE = 0, // Link down
    eACTIVE = 1, // Link up
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Configuration in RGMII, SGMII, or SMII When set, this bit enables the transmission of duplex mode, link speed, and link up or down information to the PHY in the RGMII, SMII, or SGMII port.
    eTC TC : 1;
    /// read-write - Link Up or Down This bit indicates whether the link is up or down during transmission of configuration in the RGMII, SGMII, or SMII interface.
    eLUD LUD : 1;
    uint32_t _reserved_0 : 14;
    /// read-only - Link Mode This bit indicates the current mode of operation of the link.
    eLNKMOD LNKMOD : 1;
    /// read-only - Link Speed This bit indicates the current speed of the link.
    eLNKSPEED LNKSPEED : 2;
    /// read-only - Link Status This bit indicates whether the link is up (1'b1) or down (1'b0).
    eLNKSTS LNKSTS : 1;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PHYIF_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PHYIF_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MAC_PHYIF_CONTROL_STATUS*>(0x4043C0F8); }
};

// MAC Version
//
union MAC_VERSION {
  
  // Bit field definition.
  struct {
    /// read-only - Synopsys-defined Version
    uint32_t SNPSVER : 8;
    /// read-only - User-defined Version (8'h10)
    uint32_t USERVER : 8;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_VERSION() = delete;
  inline void Reset() volatile { this->value = 0x00001051; }
  static inline volatile MAC_VERSION &Instance() { return *reinterpret_cast<volatile MAC_VERSION*>(0x4043C110); }
};

// MAC Debug
//
union MAC_DEBUG {
  
  enum class eRPESTS : uint32_t {
    eINACTIVE = 0, // MAC GMII or MII Receive Protocol Engine Status not detected
    eACTIVE = 1, // MAC GMII or MII Receive Protocol Engine Status detected
  };
  
  enum class eTPESTS : uint32_t {
    eINACTIVE = 0, // MAC GMII or MII Transmit Protocol Engine Status not detected
    eACTIVE = 1, // MAC GMII or MII Transmit Protocol Engine Status detected
  };
  
  enum class eTFCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eWAITING = 1, // Waiting for one of the following: Status of the previous packet OR IPG or back off period to be over
    eGEN_TX_PAU = 2, // Generating and transmitting a Pause control packet (in full-duplex mode)
    eTRNSFR = 3, // Transferring input packet for transmission
  };
  
  // Bit field definition.
  struct {
    /// read-only - MAC GMII or MII Receive Protocol Engine Status When this bit is set, it indicates that the MAC GMII or MII receive protocol engine is actively receiving data, and it is not in the Idle state.
    eRPESTS RPESTS : 1;
    /// read-only - MAC Receive Packet Controller FIFO Status When this bit is set, this field indicates the active state of the small FIFO Read and Write controllers of the MAC Receive Packet Controller module.
    uint32_t RFCFCSTS : 2;
    uint32_t _reserved_0 : 13;
    /// read-only - MAC GMII or MII Transmit Protocol Engine Status When this bit is set, it indicates that the MAC GMII or MII transmit protocol engine is actively transmitting data, and it is not in the Idle state.
    eTPESTS TPESTS : 1;
    /// read-only - MAC Transmit Packet Controller Status This field indicates the state of the MAC Transmit Packet Controller module.
    eTFCSTS TFCSTS : 2;
    uint32_t _reserved_1 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_DEBUG &Instance() { return *reinterpret_cast<volatile MAC_DEBUG*>(0x4043C114); }
};

// Optional Features or Functions 0
//
union MAC_HW_FEATURE0 {
  
  enum class eMIISEL : uint32_t {
    eINACTIVE = 0, // No 10 or 100 Mbps support
    eACTIVE = 1, // 10 or 100 Mbps support
  };
  
  enum class eGMIISEL : uint32_t {
    eINACTIVE = 0, // No 1000 Mbps support
    eACTIVE = 1, // 1000 Mbps support
  };
  
  enum class eHDSEL : uint32_t {
    eINACTIVE = 0, // No Half-duplex support
    eACTIVE = 1, // Half-duplex support
  };
  
  enum class ePCSSEL : uint32_t {
    eINACTIVE = 0, // No PCS Registers (TBI, SGMII, or RTBI PHY interface)
    eACTIVE = 1, // PCS Registers (TBI, SGMII, or RTBI PHY interface)
  };
  
  enum class eVLHASH : uint32_t {
    eINACTIVE = 0, // VLAN Hash Filter not selected
    eACTIVE = 1, // VLAN Hash Filter selected
  };
  
  enum class eSMASEL : uint32_t {
    eINACTIVE = 0, // SMA (MDIO) Interface not selected
    eACTIVE = 1, // SMA (MDIO) Interface selected
  };
  
  enum class eRWKSEL : uint32_t {
    eINACTIVE = 0, // PMT Remote Wake-up Packet Enable option is not selected
    eACTIVE = 1, // PMT Remote Wake-up Packet Enable option is selected
  };
  
  enum class eMGKSEL : uint32_t {
    eINACTIVE = 0, // PMT Magic Packet Enable option is not selected
    eACTIVE = 1, // PMT Magic Packet Enable option is selected
  };
  
  enum class eMMCSEL : uint32_t {
    eINACTIVE = 0, // RMON Module Enable option is not selected
    eACTIVE = 1, // RMON Module Enable option is selected
  };
  
  enum class eARPOFFSEL : uint32_t {
    eINACTIVE = 0, // ARP Offload Enable option is not selected
    eACTIVE = 1, // ARP Offload Enable option is selected
  };
  
  enum class eTSSEL : uint32_t {
    eINACTIVE = 0, // IEEE 1588-2008 Timestamp Enable option is not selected
    eACTIVE = 1, // IEEE 1588-2008 Timestamp Enable option is selected
  };
  
  enum class eEEESEL : uint32_t {
    eINACTIVE = 0, // Energy Efficient Ethernet Enable option is not selected
    eACTIVE = 1, // Energy Efficient Ethernet Enable option is selected
  };
  
  enum class eTXCOESEL : uint32_t {
    eINACTIVE = 0, // Transmit Checksum Offload Enable option is not selected
    eACTIVE = 1, // Transmit Checksum Offload Enable option is selected
  };
  
  enum class eRXCOESEL : uint32_t {
    eINACTIVE = 0, // Receive Checksum Offload Enable option is not selected
    eACTIVE = 1, // Receive Checksum Offload Enable option is selected
  };
  
  enum class eMACADR32SEL : uint32_t {
    eINACTIVE = 0, // MAC Addresses 32-63 Select option is not selected
    eACTIVE = 1, // MAC Addresses 32-63 Select option is selected
  };
  
  enum class eMACADR64SEL : uint32_t {
    eINACTIVE = 0, // MAC Addresses 64-127 Select option is not selected
    eACTIVE = 1, // MAC Addresses 64-127 Select option is selected
  };
  
  enum class eTSSTSSEL : uint32_t {
    eINTRNL = 0, // Internal
    eEXTRNL = 1, // External
    eBOTH = 2, // Both
  };
  
  enum class eSAVLANINS : uint32_t {
    eINACTIVE = 0, // Source Address or VLAN Insertion Enable option is not selected
    eACTIVE = 1, // Source Address or VLAN Insertion Enable option is selected
  };
  
  enum class eACTPHYSEL : uint32_t {
    eGMII_MII = 0, // GMII or MII
    eRGMII = 1, // RGMII
    eSGMII = 2, // SGMII
    eTBI = 3, // TBI
    eRMII = 4, // RMII
    eRTBI = 5, // RTBI
    eSMII = 6, // SMII
    eREVMIII = 7, // RevMII
  };
  
  // Bit field definition.
  struct {
    /// read-only - 10 or 100 Mbps Support This bit is set to 1 when 10/100 Mbps is selected as the Mode of Operation
    eMIISEL MIISEL : 1;
    /// read-only - 1000 Mbps Support This bit is set to 1 when 1000 Mbps is selected as the Mode of Operation
    eGMIISEL GMIISEL : 1;
    /// read-only - Half-duplex Support This bit is set to 1 when the half-duplex mode is selected
    eHDSEL HDSEL : 1;
    /// read-only - PCS Registers (TBI, SGMII, or RTBI PHY interface) This bit is set to 1 when the TBI, SGMII, or RTBI PHY interface option is selected
    ePCSSEL PCSSEL : 1;
    /// read-only - VLAN Hash Filter Selected This bit is set to 1 when the Enable VLAN Hash Table Based Filtering option is selected
    eVLHASH VLHASH : 1;
    /// read-only - SMA (MDIO) Interface This bit is set to 1 when the Enable Station Management (MDIO Interface) option is selected
    eSMASEL SMASEL : 1;
    /// read-only - PMT Remote Wake-up Packet Enable This bit is set to 1 when the Enable Remote Wake-Up Packet Detection option is selected
    eRWKSEL RWKSEL : 1;
    /// read-only - PMT Magic Packet Enable This bit is set to 1 when the Enable Magic Packet Detection option is selected
    eMGKSEL MGKSEL : 1;
    /// read-only - RMON Module Enable This bit is set to 1 when the Enable MAC Management Counters (MMC) option is selected
    eMMCSEL MMCSEL : 1;
    /// read-only - ARP Offload Enabled This bit is set to 1 when the Enable IPv4 ARP Offload option is selected
    eARPOFFSEL ARPOFFSEL : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - IEEE 1588-2008 Timestamp Enabled This bit is set to 1 when the Enable IEEE 1588 Timestamp Support option is selected
    eTSSEL TSSEL : 1;
    /// read-only - Energy Efficient Ethernet Enabled This bit is set to 1 when the Enable Energy Efficient Ethernet (EEE) option is selected
    eEEESEL EEESEL : 1;
    /// read-only - Transmit Checksum Offload Enabled This bit is set to 1 when the Enable Transmit TCP/IP Checksum Insertion option is selected
    eTXCOESEL TXCOESEL : 1;
    uint32_t _reserved_1 : 1;
    /// read-only - Receive Checksum Offload Enabled This bit is set to 1 when the Enable Receive TCP/IP Checksum Check option is selected
    eRXCOESEL RXCOESEL : 1;
    uint32_t _reserved_2 : 1;
    /// read-only - MAC Addresses 1-31 Selected This bit is set to 1 when the non-zero value is selected for Enable Additional 1-31 MAC Address Registers option
    uint32_t ADDMACADRSEL : 5;
    /// read-only - MAC Addresses 32-63 Selected This bit is set to 1 when the Enable Additional 32 MAC Address Registers (32-63) option is selected
    eMACADR32SEL MACADR32SEL : 1;
    /// read-only - MAC Addresses 64-127 Selected This bit is set to 1 when the Enable Additional 64 MAC Address Registers (64-127) option is selected
    eMACADR64SEL MACADR64SEL : 1;
    /// read-only - Timestamp System Time Source This bit indicates the source of the Timestamp system time: This bit is set to 1 when the Enable IEEE 1588 Timestamp Support option is selected
    eTSSTSSEL TSSTSSEL : 2;
    /// read-only - Source Address or VLAN Insertion Enable This bit is set to 1 when the Enable SA and VLAN Insertion on Tx option is selected
    eSAVLANINS SAVLANINS : 1;
    /// read-only - Active PHY Selected When you have multiple PHY interfaces in your configuration, this field indicates the sampled value of phy_intf_sel_i during reset de-assertion.
    eACTPHYSEL ACTPHYSEL : 3;
    uint32_t _reserved_3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HW_FEATURE0() = delete;
  inline void Reset() volatile { this->value = 0x0EFD71F7; }
  static inline volatile MAC_HW_FEATURE0 &Instance() { return *reinterpret_cast<volatile MAC_HW_FEATURE0*>(0x4043C11C); }
};

// Optional Features or Functions 1
//
union MAC_HW_FEATURE1 {
  
  enum class eRXFIFOSIZE : uint32_t {
    ebf_128B = 0, // 128 bytes
    ebf_256B = 1, // 256 bytes
    ebf_512B = 2, // 512 bytes
    ebf_1024B = 3, // 1024 bytes
    ebf_2048B = 4, // 2048 bytes
    ebf_4096B = 5, // 4096 bytes
    ebf_8192B = 6, // 8192 bytes
    ebf_16384B = 7, // 16384 bytes
    ebf_32KB = 8, // 32 KB
    ebf_64KB = 9, // 64 KB
    ebf_128KB = 10, // 128 KB
    ebf_256KB = 11, // 256 KB
  };
  
  enum class eSPRAM : uint32_t {
    eINACTIVE = 0, // Single Port RAM feature is not selected
    eACTIVE = 1, // Single Port RAM feature is selected
  };
  
  enum class eTXFIFOSIZE : uint32_t {
    ebf_128B = 0, // 128 bytes
    ebf_256B = 1, // 256 bytes
    ebf_512B = 2, // 512 bytes
    ebf_1024B = 3, // 1024 bytes
    ebf_2048B = 4, // 2048 bytes
    ebf_4096B = 5, // 4096 bytes
    ebf_8192B = 6, // 8192 bytes
    ebf_16384B = 7, // 16384 bytes
    ebf_32KB = 8, // 32 KB
    ebf_64KB = 9, // 64 KB
    ebf_128KB = 10, // 128 KB
  };
  
  enum class eOSTEN : uint32_t {
    eINACTIVE = 0, // One-Step Timestamping feature is not selected
    eACTIVE = 1, // One-Step Timestamping feature is selected
  };
  
  enum class ePTOEN : uint32_t {
    eINACTIVE = 0, // PTP Offload feature is not selected
    eACTIVE = 1, // PTP Offload feature is selected
  };
  
  enum class eADVTHWORD : uint32_t {
    eINACTIVE = 0, // IEEE 1588 High Word Register option is not selected
    eACTIVE = 1, // IEEE 1588 High Word Register option is selected
  };
  
  enum class eADDR64 : uint32_t {
    ebf_32 = 0, // 32
    ebf_40 = 1, // 40
    ebf_48 = 2, // 48
  };
  
  enum class eDCBEN : uint32_t {
    eINACTIVE = 0, // DCB Feature is not selected
    eACTIVE = 1, // DCB Feature is selected
  };
  
  enum class eSPHEN : uint32_t {
    eINACTIVE = 0, // Split Header Feature is not selected
    eACTIVE = 1, // Split Header Feature is selected
  };
  
  enum class eTSOEN : uint32_t {
    eINACTIVE = 0, // TCP Segmentation Offload Feature is not selected
    eACTIVE = 1, // TCP Segmentation Offload Feature is selected
  };
  
  enum class eDBGMEMA : uint32_t {
    eINACTIVE = 0, // DMA Debug Registers option is not selected
    eACTIVE = 1, // DMA Debug Registers option is selected
  };
  
  enum class eAVSEL : uint32_t {
    eINACTIVE = 0, // AV Feature is not selected
    eACTIVE = 1, // AV Feature is selected
  };
  
  enum class eRAVSEL : uint32_t {
    eINACTIVE = 0, // Rx Side Only AV Feature is not selected
    eACTIVE = 1, // Rx Side Only AV Feature is selected
  };
  
  enum class ePOUOST : uint32_t {
    eINACTIVE = 0, // One Step for PTP over UDP/IP Feature is not selected
    eACTIVE = 1, // One Step for PTP over UDP/IP Feature is selected
  };
  
  enum class eHASHTBLSZ : uint32_t {
    eNO_HT = 0, // No hash table
    ebf_64 = 1, // 64
    ebf_128 = 2, // 128
    ebf_256 = 3, // 256
  };
  
  enum class eL3L4FNUM : uint32_t {
    eNOFILT = 0, // No L3 or L4 Filter
    ebf_1FILT = 1, // 1 L3 or L4 Filter
    ebf_2FILT = 2, // 2 L3 or L4 Filters
    ebf_3FILT = 3, // 3 L3 or L4 Filters
    ebf_4FILT = 4, // 4 L3 or L4 Filters
    ebf_5FILT = 5, // 5 L3 or L4 Filters
    ebf_6FILT = 6, // 6 L3 or L4 Filters
    ebf_7FILT = 7, // 7 L3 or L4 Filters
    ebf_8FILT = 8, // 8 L3 or L4 Filters
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Receive FIFO Size This field contains the configured value of MTL Rx FIFO in bytes expressed as Log to base 2 minus 7, that is, Log2(RXFIFO_SIZE) -7:
    eRXFIFOSIZE RXFIFOSIZE : 5;
    /// read-only - Single Port RAM Enable This bit is set to 1 when the Use single port RAM Feature is selected.
    eSPRAM SPRAM : 1;
    /// read-only - MTL Transmit FIFO Size This field contains the configured value of MTL Tx FIFO in bytes expressed as Log to base 2 minus 7, that is, Log2(TXFIFO_SIZE) -7:
    eTXFIFOSIZE TXFIFOSIZE : 5;
    /// read-only - One-Step Timestamping Enable This bit is set to 1 when the Enable One-Step Timestamp Feature is selected.
    eOSTEN OSTEN : 1;
    /// read-only - PTP Offload Enable This bit is set to 1 when the Enable PTP Timestamp Offload Feature is selected.
    ePTOEN PTOEN : 1;
    /// read-only - IEEE 1588 High Word Register Enable This bit is set to 1 when the Add IEEE 1588 Higher Word Register option is selected
    eADVTHWORD ADVTHWORD : 1;
    /// read-only - Address Width.
    eADDR64 ADDR64 : 2;
    /// read-only - DCB Feature Enable This bit is set to 1 when the Enable Data Center Bridging option is selected
    eDCBEN DCBEN : 1;
    /// read-only - Split Header Feature Enable This bit is set to 1 when the Enable Split Header Structure option is selected
    eSPHEN SPHEN : 1;
    /// read-only - TCP Segmentation Offload Enable This bit is set to 1 when the Enable TCP Segmentation Offloading for TCP/IP Packets option is selected
    eTSOEN TSOEN : 1;
    /// read-only - DMA Debug Registers Enable This bit is set to 1 when the Debug Mode Enable option is selected
    eDBGMEMA DBGMEMA : 1;
    /// read-only - AV Feature Enable This bit is set to 1 when the Enable Audio Video Bridging option is selected.
    eAVSEL AVSEL : 1;
    /// read-only - Rx Side Only AV Feature Enable This bit is set to 1 when the Enable Audio Video Bridging option on Rx Side Only is selected.
    eRAVSEL RAVSEL : 1;
    uint32_t _reserved_0 : 1;
    /// read-only - One Step for PTP over UDP/IP Feature Enable This bit is set to 1 when the Enable One step timestamp for PTP over UDP/IP feature is selected.
    ePOUOST POUOST : 1;
    /// read-only - Hash Table Size This field indicates the size of the hash table:
    eHASHTBLSZ HASHTBLSZ : 2;
    uint32_t _reserved_1 : 1;
    /// read-only - Total number of L3 or L4 Filters This field indicates the total number of L3 or L4 filters:
    eL3L4FNUM L3L4FNUM : 4;
    uint32_t _reserved_2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HW_FEATURE1() = delete;
  inline void Reset() volatile { this->value = 0x419939A6; }
  static inline volatile MAC_HW_FEATURE1 &Instance() { return *reinterpret_cast<volatile MAC_HW_FEATURE1*>(0x4043C120); }
};

// Optional Features or Functions 2
//
union MAC_HW_FEATURE2 {
  
  enum class eRXQCNT : uint32_t {
    ebf_1RXQ = 0, // 1 MTL Rx Queue
    ebf_2RXQ = 1, // 2 MTL Rx Queues
    ebf_3RXQ = 2, // 3 MTL Rx Queues
    ebf_4RXQ = 3, // 4 MTL Rx Queues
    ebf_5RXQ = 4, // 5 MTL Rx Queues
  };
  
  enum class eTXQCNT : uint32_t {
    ebf_1TXQ = 0, // 1 MTL Tx Queue
    ebf_2TXQ = 1, // 2 MTL Tx Queues
    ebf_3TXQ = 2, // 3 MTL Tx Queues
    ebf_4TXQ = 3, // 4 MTL Tx Queues
    ebf_5TXQ = 4, // 5 MTL Tx Queues
  };
  
  enum class eRXCHCNT : uint32_t {
    ebf_1RXCH = 0, // 1 MTL Rx Channel
    ebf_2RXCH = 1, // 2 MTL Rx Channels
    ebf_3RXCH = 2, // 3 MTL Rx Channels
    ebf_4RXCH = 3, // 4 MTL Rx Channels
    ebf_5RXCH = 4, // 5 MTL Rx Channels
  };
  
  enum class eTXCHCNT : uint32_t {
    ebf_1TXCH = 0, // 1 MTL Tx Channel
    ebf_2TXCH = 1, // 2 MTL Tx Channels
    ebf_3TXCH = 2, // 3 MTL Tx Channels
    ebf_4TXCH = 3, // 4 MTL Tx Channels
    ebf_5TXCH = 4, // 5 MTL Tx Channels
  };
  
  enum class ePPSOUTNUM : uint32_t {
    eNO_PPSO = 0, // No PPS output
    ebf_1_PPSO = 1, // 1 PPS output
    ebf_2_PPSO = 2, // 2 PPS output
    ebf_3_PPSO = 3, // 3 PPS output
    ebf_4_PPSO = 4, // 4 PPS output
  };
  
  enum class eAUXSNAPNUM : uint32_t {
    eNO_AUXI = 0, // No auxiliary input
    ebf_1_AUXI = 1, // 1 auxiliary input
    ebf_2_AUXI = 2, // 2 auxiliary input
    ebf_3_AUXI = 3, // 3 auxiliary input
    ebf_4_AUXI = 4, // 4 auxiliary input
  };
  
  // Bit field definition.
  struct {
    /// read-only - Number of MTL Receive Queues This field indicates the number of MTL Receive queues:
    eRXQCNT RXQCNT : 4;
    uint32_t _reserved_0 : 2;
    /// read-only - Number of MTL Transmit Queues This field indicates the number of MTL Transmit queues:
    eTXQCNT TXQCNT : 4;
    uint32_t _reserved_1 : 2;
    /// read-only - Number of DMA Receive Channels This field indicates the number of DMA Receive channels:
    eRXCHCNT RXCHCNT : 4;
    uint32_t _reserved_2 : 2;
    /// read-only - Number of DMA Transmit Channels This field indicates the number of DMA Transmit channels:
    eTXCHCNT TXCHCNT : 4;
    uint32_t _reserved_3 : 2;
    /// read-only - Number of PPS Outputs This field indicates the number of PPS outputs:
    ePPSOUTNUM PPSOUTNUM : 3;
    uint32_t _reserved_4 : 1;
    /// read-only - Number of Auxiliary Snapshot Inputs This field indicates the number of auxiliary snapshot inputs:
    eAUXSNAPNUM AUXSNAPNUM : 3;
    uint32_t _reserved_5 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HW_FEATURE2() = delete;
  inline void Reset() volatile { this->value = 0x44104104; }
  static inline volatile MAC_HW_FEATURE2 &Instance() { return *reinterpret_cast<volatile MAC_HW_FEATURE2*>(0x4043C124); }
};

// Optional Features or Functions 3
//
union MAC_HW_FEATURE3 {
  
  enum class eNRVF : uint32_t {
    eNO_ERVLAN = 0, // No Extended Rx VLAN Filters
    ebf_4_ERVLAN = 1, // 4 Extended Rx VLAN Filters
    ebf_8_ERVLAN = 2, // 8 Extended Rx VLAN Filters
    ebf_16_ERVLAN = 3, // 16 Extended Rx VLAN Filters
    ebf_24_ERVLAN = 4, // 24 Extended Rx VLAN Filters
    ebf_32_ERVLAN = 5, // 32 Extended Rx VLAN Filters
  };
  
  enum class eCBTISEL : uint32_t {
    eINACTIVE = 0, // Enable Queue/Channel based VLAN tag insertion on Tx feature is not selected
    eACTIVE = 1, // Enable Queue/Channel based VLAN tag insertion on Tx feature is selected
  };
  
  enum class eDVLAN : uint32_t {
    eINACTIVE = 0, // Double VLAN option is not selected
    eACTIVE = 1, // Double VLAN option is selected
  };
  
  enum class ePDUPSEL : uint32_t {
    eINACTIVE = 0, // Broadcast/Multicast Packet Duplication feature is not selected
    eACTIVE = 1, // Broadcast/Multicast Packet Duplication feature is selected
  };
  
  enum class eFRPSEL : uint32_t {
    eINACTIVE = 0, // Flexible Receive Parser feature is not selected
    eACTIVE = 1, // Flexible Receive Parser feature is selected
  };
  
  enum class eFRPBS : uint32_t {
    ebf_64BYTES = 0, // 64 Bytes
    ebf_128BYTES = 1, // 128 Bytes
    ebf_256BYTES = 2, // 256 Bytes
  };
  
  enum class eFRPES : uint32_t {
    ebf_64ENTR = 0, // 64 Entries
    ebf_128ENTR = 1, // 128 Entries
    ebf_256ENTR = 2, // 256 Entries
  };
  
  enum class eESTSEL : uint32_t {
    eINACTIVE = 0, // Enable Enhancements to Scheduling Traffic feature is not selected
    eACTIVE = 1, // Enable Enhancements to Scheduling Traffic feature is selected
  };
  
  enum class eESTDEP : uint32_t {
    eNODEPTH = 0, // No Depth configured
    eDEPTH64 = 1, // 64
    eDEPTH128 = 2, // 128
    eDEPTH256 = 3, // 256
    eDEPTH512 = 4, // 512
    eDEPTH1024 = 5, // 1024
  };
  
  enum class eESTWID : uint32_t {
    eNOWIDTH = 0, // Width not configured
    eWIDTH16 = 1, // 16
    eWIDTH20 = 2, // 20
    eWIDTH24 = 3, // 24
  };
  
  enum class eFPESEL : uint32_t {
    eINACTIVE = 0, // Frame Preemption Enable feature is not selected
    eACTIVE = 1, // Frame Preemption Enable feature is selected
  };
  
  enum class eTBSSEL : uint32_t {
    eINACTIVE = 0, // Time Based Scheduling Enable feature is not selected
    eACTIVE = 1, // Time Based Scheduling Enable feature is selected
  };
  
  enum class eASP : uint32_t {
    eNONE = 0, // No Safety features selected
    eECC_ONLY = 1, // Only "ECC protection for external memory" feature is selected
    eAS_NPPE = 2, // All the Automotive Safety features are selected without the "Parity Port Enable for external interface" feature
    eAS_PPE = 3, // All the Automotive Safety features are selected with the "Parity Port Enable for external interface" feature
  };
  
  // Bit field definition.
  struct {
    /// read-only - Number of Extended VLAN Tag Filters Enabled This field indicates the Number of Extended VLAN Tag Filters selected:
    eNRVF NRVF : 3;
    uint32_t _reserved_0 : 1;
    /// read-only - Queue/Channel based VLAN tag insertion on Tx Enable This bit is set to 1 when the Enable Queue/Channel based VLAN tag insertion on Tx Feature is selected.
    eCBTISEL CBTISEL : 1;
    /// read-only - Double VLAN Tag Processing Selected This bit is set to 1 when the Enable Double VLAN Processing Feature is selected.
    eDVLAN DVLAN : 1;
    uint32_t _reserved_1 : 3;
    /// read-only - Broadcast/Multicast Packet Duplication This bit is set to 1 when the Broadcast/Multicast Packet Duplication feature is selected.
    ePDUPSEL PDUPSEL : 1;
    /// read-only - Flexible Receive Parser Selected This bit is set to 1 when the Enable Flexible Programmable Receive Parser option is selected.
    eFRPSEL FRPSEL : 1;
    /// read-only - Flexible Receive Parser Buffer size This field indicates the supported Max Number of bytes of the packet data to be Parsed by Flexible Receive Parser.
    eFRPBS FRPBS : 2;
    /// read-only - Flexible Receive Parser Table Entries size This field indicates the Max Number of Parser Entries supported by Flexible Receive Parser.
    eFRPES FRPES : 2;
    uint32_t _reserved_2 : 1;
    /// read-only - Enhancements to Scheduling Traffic Enable This bit is set to 1 when the Enable Enhancements to Scheduling Traffic feature is selected.
    eESTSEL ESTSEL : 1;
    /// read-only - Depth of the Gate Control List This field indicates the depth of Gate Control list expressed as Log2(DWC_EQOS_EST_DEP)-5
    eESTDEP ESTDEP : 3;
    /// read-only - Width of the Time Interval field in the Gate Control List This field indicates the width of the Configured Time Interval Field
    eESTWID ESTWID : 2;
    uint32_t _reserved_3 : 4;
    /// read-only - Frame Preemption Enable This bit is set to 1 when the Enable Frame preemption feature is selected.
    eFPESEL FPESEL : 1;
    /// read-only - Time Based Scheduling Enable This bit is set to 1 when the Time Based Scheduling feature is selected.
    eTBSSEL TBSSEL : 1;
    /// read-only - Automotive Safety Package Following are the encoding for the different Safety features
    eASP ASP : 2;
    uint32_t _reserved_4 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_HW_FEATURE3() = delete;
  inline void Reset() volatile { this->value = 0x0C395632; }
  static inline volatile MAC_HW_FEATURE3 &Instance() { return *reinterpret_cast<volatile MAC_HW_FEATURE3*>(0x4043C128); }
};

// MDIO Address
//
union MAC_MDIO_ADDRESS {
  
  enum class eGB : uint32_t {
    eDISABLE = 0, // GMII Busy is disabled
    eENABLE = 1, // GMII Busy is enabled
  };
  
  enum class eC45E : uint32_t {
    eDISABLE = 0, // Clause 45 PHY is disabled
    eENABLE = 1, // Clause 45 PHY is enabled
  };
  
  enum class eGOC_0 : uint32_t {
    eDISABLE = 0, // GMII Operation Command 0 is disabled
    eENABLE = 1, // GMII Operation Command 0 is enabled
  };
  
  enum class eGOC_1 : uint32_t {
    eDISABLE = 0, // GMII Operation Command 1 is disabled
    eENABLE = 1, // GMII Operation Command 1 is enabled
  };
  
  enum class eSKAP : uint32_t {
    eDISABLE = 0, // Skip Address Packet is disabled
    eENABLE = 1, // Skip Address Packet is enabled
  };
  
  enum class eBTB : uint32_t {
    eDISABLE = 0, // Back to Back transactions disabled
    eENABLE = 1, // Back to Back transactions enabled
  };
  
  enum class ePSE : uint32_t {
    eDISABLE = 0, // Preamble Suppression disabled
    eENABLE = 1, // Preamble Suppression enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - GMII Busy The application sets this bit to instruct the SMA to initiate a Read or Write access to the MDIO slave.
    eGB GB : 1;
    /// read-write - Clause 45 PHY Enable When this bit is set, Clause 45 capable PHY is connected to MDIO.
    eC45E C45E : 1;
    /// read-write - GMII Operation Command 0 This is the lower bit of the operation command to the PHY or RevMII.
    eGOC_0 GOC_0 : 1;
    /// read-write - GMII Operation Command 1 This bit is higher bit of the operation command to the PHY or RevMII, GOC_1 and GOC_O is encoded as follows: - 00: Reserved - 01: Write - 10: Post Read Increment Address for Clause 45 PHY - 11: Read When Clause 22 PHY or RevMII is enabled, only Write and Read commands are valid.
    eGOC_1 GOC_1 : 1;
    /// read-write - Skip Address Packet When this bit is set, the SMA does not send the address packets before read, write, or post-read increment address packets.
    eSKAP SKAP : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - CSR Clock Range The CSR Clock Range selection determines the frequency of the MDC clock according to the CSR clock frequency used in your design: - 0000: CSR clock = 60-100 MHz; MDC clock = CSR clock/42 - 0001: CSR clock = 100-150 MHz; MDC clock = CSR clock/62 - 0010: CSR clock = 20-35 MHz; MDC clock = CSR clock/16 - 0011: CSR clock = 35-60 MHz; MDC clock = CSR clock/26 - 0100: CSR clock = 150-250 MHz; MDC clock = CSR clock/102 - 0101: CSR clock = 250-300 MHz; MDC clock = CSR clock/124 - 0110: CSR clock = 300-500 MHz; MDC clock = CSR clock/204 - 0111: CSR clock = 500-800 MHz; MDC clock = CSR clock/324 The suggested range of CSR clock frequency applicable for each value (when Bit 11 = 0) ensures that the MDC clock is approximately between 1.
    uint32_t CR : 4;
    /// read-write - Number of Trailing Clocks This field controls the number of trailing clock cycles generated on gmii_mdc_o (MDC) after the end of transmission of MDIO frame.
    uint32_t NTC : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Register/Device Address These bits select the PHY register in selected Clause 22 PHY device.
    uint32_t RDA : 5;
    /// read-write - Physical Layer Address This field indicates which Clause 22 PHY devices (out of 32 devices) the MAC is accessing.
    uint32_t PA : 5;
    /// read-write - Back to Back transactions When this bit is set and the NTC has value greater than 0, then the MAC informs the completion of a read or write command at the end of frame transfer (before the trailing clocks are transmitted).
    eBTB BTB : 1;
    /// read-write - Preamble Suppression Enable When this bit is set, the SMA suppresses the 32-bit preamble and transmits MDIO frames with only 1 preamble bit.
    ePSE PSE : 1;
    uint32_t _reserved_2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MDIO_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MDIO_ADDRESS &Instance() { return *reinterpret_cast<volatile MAC_MDIO_ADDRESS*>(0x4043C200); }
};

// MAC MDIO Data
//
union MAC_MDIO_DATA {
  
  // Bit field definition.
  struct {
    /// read-write - GMII Data This field contains the 16-bit data value read from the PHY or RevMII after a Management Read operation or the 16-bit data value to be written to the PHY or RevMII before a Management Write operation.
    uint32_t GD : 16;
    /// read-write - Register Address This field is valid only when C45E is set.
    uint32_t RA : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MDIO_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MDIO_DATA &Instance() { return *reinterpret_cast<volatile MAC_MDIO_DATA*>(0x4043C204); }
};

// CSR Software Control
//
union MAC_CSR_SW_CTRL {
  
  enum class eRCWE : uint32_t {
    eDISABLE = 0, // Register Clear on Write 1 is disabled
    eENABLE = 1, // Register Clear on Write 1 is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Register Clear on Write 1 Enable When this bit is set, the access mode of some register fields changes to Clear on Write 1, the application needs to set that respective bit to 1 to clear it.
    eRCWE RCWE : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_CSR_SW_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_CSR_SW_CTRL &Instance() { return *reinterpret_cast<volatile MAC_CSR_SW_CTRL*>(0x4043C230); }
};

// Frame Preemption Control
//
union MAC_FPE_CTRL_STS {
  
  enum class eEFPE : uint32_t {
    eDISABLE = 0, // Tx Frame Preemption is disabled
    eENABLE = 1, // Tx Frame Preemption is enabled
  };
  
  enum class eSVER : uint32_t {
    eDISABLE = 0, // Send Verify mPacket is disabled
    eENABLE = 1, // Send Verify mPacket is enabled
  };
  
  enum class eSRSP : uint32_t {
    eDISABLE = 0, // Send Respond mPacket is disabled
    eENABLE = 1, // Send Respond mPacket is enabled
  };
  
  enum class eRVER : uint32_t {
    eINACTIVE = 0, // Not received Verify Frame
    eACTIVE = 1, // Received Verify Frame
  };
  
  enum class eRRSP : uint32_t {
    eINACTIVE = 0, // Not received Respond Frame
    eACTIVE = 1, // Received Respond Frame
  };
  
  enum class eTVER : uint32_t {
    eINACTIVE = 0, // Not transmitted Verify Frame
    eACTIVE = 1, // transmitted Verify Frame
  };
  
  enum class eTRSP : uint32_t {
    eINACTIVE = 0, // Not transmitted Respond Frame
    eACTIVE = 1, // transmitted Respond Frame
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Tx Frame Preemption When set Frame Preemption Tx functionality is enabled.
    eEFPE EFPE : 1;
    /// read-write - Send Verify mPacket When set indicates hardware to send a verify mPacket.
    eSVER SVER : 1;
    /// read-write - Send Respond mPacket When set indicates hardware to send a Respond mPacket.
    eSRSP SRSP : 1;
    /// read-write - Synopsys Reserved, Must be set to "0".
    uint32_t S1_SET_0 : 1;
    uint32_t _reserved_0 : 12;
    /// read-write - Received Verify Frame Set when a Verify mPacket is received.
    eRVER RVER : 1;
    /// read-write - Received Respond Frame Set when a Respond mPacket is received.
    eRRSP RRSP : 1;
    /// read-write - Transmitted Verify Frame Set when a Verify mPacket is transmitted (triggered by setting SVER field).
    eTVER TVER : 1;
    /// read-write - Transmitted Respond Frame Set when a Respond mPacket is transmitted (triggered by setting SRSP field).
    eTRSP TRSP : 1;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_FPE_CTRL_STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_FPE_CTRL_STS &Instance() { return *reinterpret_cast<volatile MAC_FPE_CTRL_STS*>(0x4043C234); }
};

// 32-bit Binary Rollover Equivalent Time
//
union MAC_PRESN_TIME_NS {
  
  // Bit field definition.
  struct {
    /// read-only - MAC 1722 Presentation Time in ns These bits indicate the value of the 32-bit binary rollover equivalent time of the PTP System Time in ns
    uint32_t MPTN : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PRESN_TIME_NS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PRESN_TIME_NS &Instance() { return *reinterpret_cast<volatile MAC_PRESN_TIME_NS*>(0x4043C240); }
};

// MAC 1722 Presentation Time
//
union MAC_PRESN_TIME_UPDT {
  
  // Bit field definition.
  struct {
    /// read-write - MAC 1722 Presentation Time Update This field holds the init value or the update value for the presentation time.
    uint32_t MPTU : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PRESN_TIME_UPDT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PRESN_TIME_UPDT &Instance() { return *reinterpret_cast<volatile MAC_PRESN_TIME_UPDT*>(0x4043C244); }
};

// MAC Address0 High
//
union MAC_ADDRESS0_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // INVALID : This bit must be always set to 1
    eENABLE = 1, // This bit is always set to 1
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC Address0[47:32] This field contains the upper 16 bits [47:32] of the first 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address0 content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 10;
    /// read-only - Address Enable This bit is always set to 1.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS0_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x8000FFFF; }
  static inline volatile MAC_ADDRESS0_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS0_HIGH*>(0x4043C300); }
};

// MAC Address0 Low
//
union MAC_ADDRESS0_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC Address0[31:0] This field contains the lower 32 bits of the first 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS0_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS0_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS0_LOW*>(0x4043C304); }
};

// MAC Address1 High
//
union MAC_ADDRESS1_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS1_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS1_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS1_HIGH*>(0x4043C308); }
};

// MAC Address1 Low
//
union MAC_ADDRESS1_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS1_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS1_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS1_LOW*>(0x4043C30C); }
};

// MAC Address2 High
//
union MAC_ADDRESS2_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS2_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS2_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS2_HIGH*>(0x4043C310); }
};

// MAC Address2 Low
//
union MAC_ADDRESS2_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS2_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS2_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS2_LOW*>(0x4043C314); }
};

// MAC Address3 High
//
union MAC_ADDRESS3_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS3_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS3_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS3_HIGH*>(0x4043C318); }
};

// MAC Address3 Low
//
union MAC_ADDRESS3_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS3_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS3_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS3_LOW*>(0x4043C31C); }
};

// MAC Address4 High
//
union MAC_ADDRESS4_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS4_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS4_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS4_HIGH*>(0x4043C320); }
};

// MAC Address4 Low
//
union MAC_ADDRESS4_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS4_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS4_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS4_LOW*>(0x4043C324); }
};

// MAC Address5 High
//
union MAC_ADDRESS5_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS5_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS5_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS5_HIGH*>(0x4043C328); }
};

// MAC Address5 Low
//
union MAC_ADDRESS5_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS5_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS5_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS5_LOW*>(0x4043C32C); }
};

// MAC Address6 High
//
union MAC_ADDRESS6_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS6_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS6_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS6_HIGH*>(0x4043C330); }
};

// MAC Address6 Low
//
union MAC_ADDRESS6_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS6_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS6_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS6_LOW*>(0x4043C334); }
};

// MAC Address7 High
//
union MAC_ADDRESS7_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS7_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS7_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS7_HIGH*>(0x4043C338); }
};

// MAC Address7 Low
//
union MAC_ADDRESS7_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS7_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS7_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS7_LOW*>(0x4043C33C); }
};

// MAC Address8 High
//
union MAC_ADDRESS8_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS8_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS8_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS8_HIGH*>(0x4043C340); }
};

// MAC Address8 Low
//
union MAC_ADDRESS8_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS8_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS8_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS8_LOW*>(0x4043C344); }
};

// MAC Address9 High
//
union MAC_ADDRESS9_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS9_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS9_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS9_HIGH*>(0x4043C348); }
};

// MAC Address9 Low
//
union MAC_ADDRESS9_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS9_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS9_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS9_LOW*>(0x4043C34C); }
};

// MAC Address10 High
//
union MAC_ADDRESS10_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS10_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS10_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS10_HIGH*>(0x4043C350); }
};

// MAC Address10 Low
//
union MAC_ADDRESS10_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS10_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS10_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS10_LOW*>(0x4043C354); }
};

// MAC Address11 High
//
union MAC_ADDRESS11_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS11_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS11_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS11_HIGH*>(0x4043C358); }
};

// MAC Address11 Low
//
union MAC_ADDRESS11_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS11_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS11_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS11_LOW*>(0x4043C35C); }
};

// MAC Address12 High
//
union MAC_ADDRESS12_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS12_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS12_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS12_HIGH*>(0x4043C360); }
};

// MAC Address12 Low
//
union MAC_ADDRESS12_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS12_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS12_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS12_LOW*>(0x4043C364); }
};

// MAC Address13 High
//
union MAC_ADDRESS13_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS13_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS13_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS13_HIGH*>(0x4043C368); }
};

// MAC Address13 Low
//
union MAC_ADDRESS13_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS13_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS13_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS13_LOW*>(0x4043C36C); }
};

// MAC Address14 High
//
union MAC_ADDRESS14_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS14_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS14_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS14_HIGH*>(0x4043C370); }
};

// MAC Address14 Low
//
union MAC_ADDRESS14_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS14_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS14_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS14_LOW*>(0x4043C374); }
};

// MAC Address15 High
//
union MAC_ADDRESS15_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS15_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS15_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS15_HIGH*>(0x4043C378); }
};

// MAC Address15 Low
//
union MAC_ADDRESS15_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS15_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS15_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS15_LOW*>(0x4043C37C); }
};

// MAC Address16 High
//
union MAC_ADDRESS16_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS16_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS16_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS16_HIGH*>(0x4043C380); }
};

// MAC Address16 Low
//
union MAC_ADDRESS16_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS16_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS16_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS16_LOW*>(0x4043C384); }
};

// MAC Address17 High
//
union MAC_ADDRESS17_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS17_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS17_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS17_HIGH*>(0x4043C388); }
};

// MAC Address17 Low
//
union MAC_ADDRESS17_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS17_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS17_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS17_LOW*>(0x4043C38C); }
};

// MAC Address18 High
//
union MAC_ADDRESS18_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS18_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS18_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS18_HIGH*>(0x4043C390); }
};

// MAC Address18 Low
//
union MAC_ADDRESS18_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS18_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS18_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS18_LOW*>(0x4043C394); }
};

// MAC Address19 High
//
union MAC_ADDRESS19_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS19_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS19_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS19_HIGH*>(0x4043C398); }
};

// MAC Address19 Low
//
union MAC_ADDRESS19_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS19_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS19_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS19_LOW*>(0x4043C39C); }
};

// MAC Address20 High
//
union MAC_ADDRESS20_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS20_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS20_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS20_HIGH*>(0x4043C3A0); }
};

// MAC Address20 Low
//
union MAC_ADDRESS20_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS20_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS20_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS20_LOW*>(0x4043C3A4); }
};

// MAC Address21 High
//
union MAC_ADDRESS21_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS21_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS21_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS21_HIGH*>(0x4043C3A8); }
};

// MAC Address21 Low
//
union MAC_ADDRESS21_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS21_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS21_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS21_LOW*>(0x4043C3AC); }
};

// MAC Address22 High
//
union MAC_ADDRESS22_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS22_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS22_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS22_HIGH*>(0x4043C3B0); }
};

// MAC Address22 Low
//
union MAC_ADDRESS22_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS22_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS22_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS22_LOW*>(0x4043C3B4); }
};

// MAC Address23 High
//
union MAC_ADDRESS23_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS23_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS23_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS23_HIGH*>(0x4043C3B8); }
};

// MAC Address23 Low
//
union MAC_ADDRESS23_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS23_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS23_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS23_LOW*>(0x4043C3BC); }
};

// MAC Address24 High
//
union MAC_ADDRESS24_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS24_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS24_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS24_HIGH*>(0x4043C3C0); }
};

// MAC Address24 Low
//
union MAC_ADDRESS24_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS24_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS24_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS24_LOW*>(0x4043C3C4); }
};

// MAC Address25 High
//
union MAC_ADDRESS25_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS25_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS25_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS25_HIGH*>(0x4043C3C8); }
};

// MAC Address25 Low
//
union MAC_ADDRESS25_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS25_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS25_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS25_LOW*>(0x4043C3CC); }
};

// MAC Address26 High
//
union MAC_ADDRESS26_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS26_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS26_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS26_HIGH*>(0x4043C3D0); }
};

// MAC Address26 Low
//
union MAC_ADDRESS26_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS26_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS26_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS26_LOW*>(0x4043C3D4); }
};

// MAC Address27 High
//
union MAC_ADDRESS27_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS27_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS27_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS27_HIGH*>(0x4043C3D8); }
};

// MAC Address27 Low
//
union MAC_ADDRESS27_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS27_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS27_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS27_LOW*>(0x4043C3DC); }
};

// MAC Address28 High
//
union MAC_ADDRESS28_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS28_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS28_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS28_HIGH*>(0x4043C3E0); }
};

// MAC Address28 Low
//
union MAC_ADDRESS28_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS28_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS28_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS28_LOW*>(0x4043C3E4); }
};

// MAC Address29 High
//
union MAC_ADDRESS29_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS29_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS29_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS29_HIGH*>(0x4043C3E8); }
};

// MAC Address29 Low
//
union MAC_ADDRESS29_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS29_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS29_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS29_LOW*>(0x4043C3EC); }
};

// MAC Address30 High
//
union MAC_ADDRESS30_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS30_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS30_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS30_HIGH*>(0x4043C3F0); }
};

// MAC Address30 Low
//
union MAC_ADDRESS30_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS30_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS30_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS30_LOW*>(0x4043C3F4); }
};

// MAC Address31 High
//
union MAC_ADDRESS31_HIGH {
  
  enum class eSA : uint32_t {
    eDA = 0, // Compare with Destination Address
    eSA = 1, // Compare with Source Address
  };
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select If the PDC bit of MAC_EXT_CONFIGURATION register is not set: This field contains the binary representation of the DMA Channel number to which an Rx packet whose DA matches the MAC Address(#i) content is routed.
    uint32_t DCS : 5;
    uint32_t _reserved_0 : 3;
    /// read-write - Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes.
    uint32_t MBC : 6;
    /// read-write - Source Address When this bit is set, the MAC ADDRESS1[47:0] is used to compare with the SA fields of the received packet.
    eSA SA : 1;
    /// read-write - Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS31_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS31_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS31_HIGH*>(0x4043C3F8); }
};

// MAC Address31 Low
//
union MAC_ADDRESS31_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS1 [31:0] This field contains the lower 32 bits of second 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS31_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS31_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS31_LOW*>(0x4043C3FC); }
};

// MAC Address32 High
//
union MAC_ADDRESS32_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS32_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS32_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS32_HIGH*>(0x4043C400); }
};

// MAC Address32 Low
//
union MAC_ADDRESS32_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS32_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS32_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS32_LOW*>(0x4043C404); }
};

// MAC Address33 High
//
union MAC_ADDRESS33_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS33_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS33_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS33_HIGH*>(0x4043C408); }
};

// MAC Address33 Low
//
union MAC_ADDRESS33_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS33_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS33_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS33_LOW*>(0x4043C40C); }
};

// MAC Address34 High
//
union MAC_ADDRESS34_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS34_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS34_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS34_HIGH*>(0x4043C410); }
};

// MAC Address34 Low
//
union MAC_ADDRESS34_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS34_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS34_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS34_LOW*>(0x4043C414); }
};

// MAC Address35 High
//
union MAC_ADDRESS35_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS35_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS35_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS35_HIGH*>(0x4043C418); }
};

// MAC Address35 Low
//
union MAC_ADDRESS35_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS35_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS35_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS35_LOW*>(0x4043C41C); }
};

// MAC Address36 High
//
union MAC_ADDRESS36_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS36_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS36_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS36_HIGH*>(0x4043C420); }
};

// MAC Address36 Low
//
union MAC_ADDRESS36_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS36_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS36_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS36_LOW*>(0x4043C424); }
};

// MAC Address37 High
//
union MAC_ADDRESS37_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS37_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS37_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS37_HIGH*>(0x4043C428); }
};

// MAC Address37 Low
//
union MAC_ADDRESS37_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS37_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS37_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS37_LOW*>(0x4043C42C); }
};

// MAC Address38 High
//
union MAC_ADDRESS38_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS38_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS38_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS38_HIGH*>(0x4043C430); }
};

// MAC Address38 Low
//
union MAC_ADDRESS38_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS38_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS38_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS38_LOW*>(0x4043C434); }
};

// MAC Address39 High
//
union MAC_ADDRESS39_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS39_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS39_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS39_HIGH*>(0x4043C438); }
};

// MAC Address39 Low
//
union MAC_ADDRESS39_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS39_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS39_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS39_LOW*>(0x4043C43C); }
};

// MAC Address40 High
//
union MAC_ADDRESS40_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS40_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS40_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS40_HIGH*>(0x4043C440); }
};

// MAC Address40 Low
//
union MAC_ADDRESS40_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS40_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS40_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS40_LOW*>(0x4043C444); }
};

// MAC Address41 High
//
union MAC_ADDRESS41_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS41_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS41_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS41_HIGH*>(0x4043C448); }
};

// MAC Address41 Low
//
union MAC_ADDRESS41_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS41_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS41_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS41_LOW*>(0x4043C44C); }
};

// MAC Address42 High
//
union MAC_ADDRESS42_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS42_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS42_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS42_HIGH*>(0x4043C450); }
};

// MAC Address42 Low
//
union MAC_ADDRESS42_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS42_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS42_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS42_LOW*>(0x4043C454); }
};

// MAC Address43 High
//
union MAC_ADDRESS43_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS43_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS43_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS43_HIGH*>(0x4043C458); }
};

// MAC Address43 Low
//
union MAC_ADDRESS43_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS43_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS43_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS43_LOW*>(0x4043C45C); }
};

// MAC Address44 High
//
union MAC_ADDRESS44_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS44_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS44_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS44_HIGH*>(0x4043C460); }
};

// MAC Address44 Low
//
union MAC_ADDRESS44_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS44_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS44_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS44_LOW*>(0x4043C464); }
};

// MAC Address45 High
//
union MAC_ADDRESS45_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS45_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS45_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS45_HIGH*>(0x4043C468); }
};

// MAC Address45 Low
//
union MAC_ADDRESS45_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS45_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS45_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS45_LOW*>(0x4043C46C); }
};

// MAC Address46 High
//
union MAC_ADDRESS46_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS46_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS46_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS46_HIGH*>(0x4043C470); }
};

// MAC Address46 Low
//
union MAC_ADDRESS46_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS46_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS46_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS46_LOW*>(0x4043C474); }
};

// MAC Address47 High
//
union MAC_ADDRESS47_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS47_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS47_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS47_HIGH*>(0x4043C478); }
};

// MAC Address47 Low
//
union MAC_ADDRESS47_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS47_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS47_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS47_LOW*>(0x4043C47C); }
};

// MAC Address48 High
//
union MAC_ADDRESS48_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS48_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS48_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS48_HIGH*>(0x4043C480); }
};

// MAC Address48 Low
//
union MAC_ADDRESS48_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS48_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS48_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS48_LOW*>(0x4043C484); }
};

// MAC Address49 High
//
union MAC_ADDRESS49_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS49_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS49_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS49_HIGH*>(0x4043C488); }
};

// MAC Address49 Low
//
union MAC_ADDRESS49_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS49_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS49_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS49_LOW*>(0x4043C48C); }
};

// MAC Address50 High
//
union MAC_ADDRESS50_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS50_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS50_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS50_HIGH*>(0x4043C490); }
};

// MAC Address50 Low
//
union MAC_ADDRESS50_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS50_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS50_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS50_LOW*>(0x4043C494); }
};

// MAC Address51 High
//
union MAC_ADDRESS51_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS51_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS51_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS51_HIGH*>(0x4043C498); }
};

// MAC Address51 Low
//
union MAC_ADDRESS51_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS51_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS51_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS51_LOW*>(0x4043C49C); }
};

// MAC Address52 High
//
union MAC_ADDRESS52_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS52_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS52_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS52_HIGH*>(0x4043C4A0); }
};

// MAC Address52 Low
//
union MAC_ADDRESS52_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS52_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS52_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS52_LOW*>(0x4043C4A4); }
};

// MAC Address53 High
//
union MAC_ADDRESS53_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS53_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS53_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS53_HIGH*>(0x4043C4A8); }
};

// MAC Address53 Low
//
union MAC_ADDRESS53_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS53_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS53_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS53_LOW*>(0x4043C4AC); }
};

// MAC Address54 High
//
union MAC_ADDRESS54_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS54_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS54_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS54_HIGH*>(0x4043C4B0); }
};

// MAC Address54 Low
//
union MAC_ADDRESS54_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS54_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS54_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS54_LOW*>(0x4043C4B4); }
};

// MAC Address55 High
//
union MAC_ADDRESS55_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS55_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS55_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS55_HIGH*>(0x4043C4B8); }
};

// MAC Address55 Low
//
union MAC_ADDRESS55_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS55_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS55_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS55_LOW*>(0x4043C4BC); }
};

// MAC Address56 High
//
union MAC_ADDRESS56_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS56_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS56_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS56_HIGH*>(0x4043C4C0); }
};

// MAC Address56 Low
//
union MAC_ADDRESS56_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS56_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS56_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS56_LOW*>(0x4043C4C4); }
};

// MAC Address57 High
//
union MAC_ADDRESS57_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS57_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS57_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS57_HIGH*>(0x4043C4C8); }
};

// MAC Address57 Low
//
union MAC_ADDRESS57_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS57_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS57_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS57_LOW*>(0x4043C4CC); }
};

// MAC Address58 High
//
union MAC_ADDRESS58_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS58_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS58_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS58_HIGH*>(0x4043C4D0); }
};

// MAC Address58 Low
//
union MAC_ADDRESS58_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS58_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS58_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS58_LOW*>(0x4043C4D4); }
};

// MAC Address59 High
//
union MAC_ADDRESS59_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS59_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS59_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS59_HIGH*>(0x4043C4D8); }
};

// MAC Address59 Low
//
union MAC_ADDRESS59_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS59_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS59_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS59_LOW*>(0x4043C4DC); }
};

// MAC Address60 High
//
union MAC_ADDRESS60_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS60_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS60_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS60_HIGH*>(0x4043C4E0); }
};

// MAC Address60 Low
//
union MAC_ADDRESS60_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS60_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS60_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS60_LOW*>(0x4043C4E4); }
};

// MAC Address61 High
//
union MAC_ADDRESS61_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS61_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS61_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS61_HIGH*>(0x4043C4E8); }
};

// MAC Address61 Low
//
union MAC_ADDRESS61_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS61_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS61_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS61_LOW*>(0x4043C4EC); }
};

// MAC Address62 High
//
union MAC_ADDRESS62_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS62_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS62_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS62_HIGH*>(0x4043C4F0); }
};

// MAC Address62 Low
//
union MAC_ADDRESS62_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS62_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS62_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS62_LOW*>(0x4043C4F4); }
};

// MAC Address63 High
//
union MAC_ADDRESS63_HIGH {
  
  enum class eAE : uint32_t {
    eDISABLE = 0, // Address is ignored
    eENABLE = 1, // Address is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [47:32] This field contains the upper 16 bits (47:32) of the 33rd 6-byte MAC address.
    uint32_t ADDRHI : 16;
    /// read-write - DMA Channel Select This field contains the DMA Channel number to which an Rx packet whose DA matches the MAC ADDRESS32 content is routed.
    uint32_t DCS : 3;
    uint32_t _reserved_0 : 12;
    /// read-write - Address Enable When this bit is set, the Address filter module uses the 33rd MAC address for perfect filtering.
    eAE AE : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS63_HIGH() = delete;
  inline void Reset() volatile { this->value = 0x0000FFFF; }
  static inline volatile MAC_ADDRESS63_HIGH &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS63_HIGH*>(0x4043C4F8); }
};

// MAC Address63 Low
//
union MAC_ADDRESS63_LOW {
  
  // Bit field definition.
  struct {
    /// read-write - MAC ADDRESS32 [31:0] This field contains the lower 32 bits of the 33rd 6-byte MAC address.
    uint32_t ADDRLO : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_ADDRESS63_LOW() = delete;
  inline void Reset() volatile { this->value = 0xFFFFFFFF; }
  static inline volatile MAC_ADDRESS63_LOW &Instance() { return *reinterpret_cast<volatile MAC_ADDRESS63_LOW*>(0x4043C4FC); }
};

// MMC Control
//
union MAC_MMC_CONTROL {
  
  enum class eCNTRST : uint32_t {
    eDISABLE = 0, // Counters are not reset
    eENABLE = 1, // All counters are reset
  };
  
  enum class eCNTSTOPRO : uint32_t {
    eDISABLE = 0, // Counter Stop Rollover is disabled
    eENABLE = 1, // Counter Stop Rollover is enabled
  };
  
  enum class eRSTONRD : uint32_t {
    eDISABLE = 0, // Reset on Read is disabled
    eENABLE = 1, // Reset on Read is enabled
  };
  
  enum class eCNTFREEZ : uint32_t {
    eDISABLE = 0, // MMC Counter Freeze is disabled
    eENABLE = 1, // MMC Counter Freeze is enabled
  };
  
  enum class eCNTPRST : uint32_t {
    eDISABLE = 0, // Counters Preset is disabled
    eENABLE = 1, // Counters Preset is enabled
  };
  
  enum class eCNTPRSTLVL : uint32_t {
    eDISABLE = 0, // Full-Half Preset is disabled
    eENABLE = 1, // Full-Half Preset is enabled
  };
  
  enum class eUCDBC : uint32_t {
    eDISABLE = 0, // Update MMC Counters for Dropped Broadcast Packets is disabled
    eENABLE = 1, // Update MMC Counters for Dropped Broadcast Packets is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Counters Reset When this bit is set, all counters are reset.
    eCNTRST CNTRST : 1;
    /// read-write - Counter Stop Rollover When this bit is set, the counter does not roll over to zero after reaching the maximum value.
    eCNTSTOPRO CNTSTOPRO : 1;
    /// read-write - Reset on Read When this bit is set, the MMC counters are reset to zero after Read (self-clearing after reset).
    eRSTONRD RSTONRD : 1;
    /// read-write - MMC Counter Freeze When this bit is set, it freezes all MMC counters to their current value.
    eCNTFREEZ CNTFREEZ : 1;
    /// read-write - Counters Preset When this bit is set, all counters are initialized or preset to almost full or almost half according to the CNTPRSTLVL bit.
    eCNTPRST CNTPRST : 1;
    /// read-write - Full-Half Preset When this bit is low and the CNTPRST bit is set, all MMC counters get preset to almost-half value.
    eCNTPRSTLVL CNTPRSTLVL : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Update MMC Counters for Dropped Broadcast Packets Note: The CNTRST bit has a higher priority than the CNTPRST bit.
    eUCDBC UCDBC : 1;
    uint32_t _reserved_1 : 23;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_MMC_CONTROL*>(0x4043C700); }
};

// MMC Rx Interrupt
//
union MAC_MMC_RX_INTERRUPT {
  
  enum class eRXGBPKTIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRXGBOCTIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Good Bad Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Good Bad Octet Counter Interrupt Status detected
  };
  
  enum class eRXGOCTIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXBCGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Broadcast Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Broadcast Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXMCGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Multicast Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Multicast Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXCRCERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive CRC Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive CRC Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXALGNERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Alignment Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Alignment Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXRUNTPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Runt Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Runt Packet Counter Interrupt Status detected
  };
  
  enum class eRXJABERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Jabber Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Jabber Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXUSIZEGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Undersize Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Undersize Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXOSIZEGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Oversize Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Oversize Good Packet Counter Interrupt Status detected
  };
  
  enum class eRX64OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 64 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 64 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRX65T127OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRX128T255OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRX256T511OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRX512T1023OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRX1024TMAXOCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRXUCGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Unicast Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Unicast Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXLENERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Length Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Length Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXORANGEPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Out Of Range Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Out Of Range Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXPAUSPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Pause Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Pause Packet Counter Interrupt Status detected
  };
  
  enum class eRXFOVPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive FIFO Overflow Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive FIFO Overflow Packet Counter Interrupt Status detected
  };
  
  enum class eRXVLANGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive VLAN Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive VLAN Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eRXWDOGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Watchdog Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Watchdog Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXRCVERRPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXCTRLPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive Control Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive Control Packet Counter Interrupt Status detected
  };
  
  enum class eRXLPIUSCIS : uint32_t {
    eINACTIVE = 0, // MMC Receive LPI microsecond Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive LPI microsecond Counter Interrupt Status detected
  };
  
  enum class eRXLPITRCIS : uint32_t {
    eINACTIVE = 0, // MMC Receive LPI transition Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive LPI transition Counter Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - MMC Receive Good Bad Packet Counter Interrupt Status This bit is set when the rxpacketcount_gb counter reaches half of the maximum value or the maximum value.
    eRXGBPKTIS RXGBPKTIS : 1;
    /// read-only - MMC Receive Good Bad Octet Counter Interrupt Status This bit is set when the rxoctetcount_gb counter reaches half of the maximum value or the maximum value.
    eRXGBOCTIS RXGBOCTIS : 1;
    /// read-only - MMC Receive Good Octet Counter Interrupt Status This bit is set when the rxoctetcount_g counter reaches half of the maximum value or the maximum value.
    eRXGOCTIS RXGOCTIS : 1;
    /// read-only - MMC Receive Broadcast Good Packet Counter Interrupt Status This bit is set when the rxbroadcastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXBCGPIS RXBCGPIS : 1;
    /// read-only - MMC Receive Multicast Good Packet Counter Interrupt Status This bit is set when the rxmulticastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXMCGPIS RXMCGPIS : 1;
    /// read-only - MMC Receive CRC Error Packet Counter Interrupt Status This bit is set when the rxcrcerror counter reaches half of the maximum value or the maximum value.
    eRXCRCERPIS RXCRCERPIS : 1;
    /// read-only - MMC Receive Alignment Error Packet Counter Interrupt Status This bit is set when the rxalignmenterror counter reaches half of the maximum value or the maximum value.
    eRXALGNERPIS RXALGNERPIS : 1;
    /// read-only - MMC Receive Runt Packet Counter Interrupt Status This bit is set when the rxrunterror counter reaches half of the maximum value or the maximum value.
    eRXRUNTPIS RXRUNTPIS : 1;
    /// read-only - MMC Receive Jabber Error Packet Counter Interrupt Status This bit is set when the rxjabbererror counter reaches half of the maximum value or the maximum value.
    eRXJABERPIS RXJABERPIS : 1;
    /// read-only - MMC Receive Undersize Good Packet Counter Interrupt Status This bit is set when the rxundersize_g counter reaches half of the maximum value or the maximum value.
    eRXUSIZEGPIS RXUSIZEGPIS : 1;
    /// read-only - MMC Receive Oversize Good Packet Counter Interrupt Status This bit is set when the rxoversize_g counter reaches half of the maximum value or the maximum value.
    eRXOSIZEGPIS RXOSIZEGPIS : 1;
    /// read-only - MMC Receive 64 Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx64octets_gb counter reaches half of the maximum value or the maximum value.
    eRX64OCTGBPIS RX64OCTGBPIS : 1;
    /// read-only - MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx65to127octets_gb counter reaches half of the maximum value or the maximum value.
    eRX65T127OCTGBPIS RX65T127OCTGBPIS : 1;
    /// read-only - MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx128to255octets_gb counter reaches half of the maximum value or the maximum value.
    eRX128T255OCTGBPIS RX128T255OCTGBPIS : 1;
    /// read-only - MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx256to511octets_gb counter reaches half of the maximum value or the maximum value.
    eRX256T511OCTGBPIS RX256T511OCTGBPIS : 1;
    /// read-only - MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx512to1023octets_gb counter reaches half of the maximum value or the maximum value.
    eRX512T1023OCTGBPIS RX512T1023OCTGBPIS : 1;
    /// read-only - MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status This bit is set when the rx1024tomaxoctets_gb counter reaches half of the maximum value or the maximum value.
    eRX1024TMAXOCTGBPIS RX1024TMAXOCTGBPIS : 1;
    /// read-only - MMC Receive Unicast Good Packet Counter Interrupt Status This bit is set when the rxunicastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXUCGPIS RXUCGPIS : 1;
    /// read-only - MMC Receive Length Error Packet Counter Interrupt Status This bit is set when the rxlengtherror counter reaches half of the maximum value or the maximum value.
    eRXLENERPIS RXLENERPIS : 1;
    /// read-only - MMC Receive Out Of Range Error Packet Counter Interrupt Status.
    eRXORANGEPIS RXORANGEPIS : 1;
    /// read-only - MMC Receive Pause Packet Counter Interrupt Status This bit is set when the rxpausepackets counter reaches half of the maximum value or the maximum value.
    eRXPAUSPIS RXPAUSPIS : 1;
    /// read-only - MMC Receive FIFO Overflow Packet Counter Interrupt Status This bit is set when the rxfifooverflow counter reaches half of the maximum value or the maximum value.
    eRXFOVPIS RXFOVPIS : 1;
    /// read-only - MMC Receive VLAN Good Bad Packet Counter Interrupt Status This bit is set when the rxvlanpackets_gb counter reaches half of the maximum value or the maximum value.
    eRXVLANGBPIS RXVLANGBPIS : 1;
    /// read-only - MMC Receive Watchdog Error Packet Counter Interrupt Status This bit is set when the rxwatchdog error counter reaches half of the maximum value or the maximum value.
    eRXWDOGPIS RXWDOGPIS : 1;
    /// read-only - MMC Receive Error Packet Counter Interrupt Status This bit is set when the rxrcverror counter reaches half of the maximum value or the maximum value.
    eRXRCVERRPIS RXRCVERRPIS : 1;
    /// read-only - MMC Receive Control Packet Counter Interrupt Status This bit is set when the rxctrlpackets_g counter reaches half of the maximum value or the maximum value.
    eRXCTRLPIS RXCTRLPIS : 1;
    /// read-only - MMC Receive LPI microsecond counter interrupt status This bit is set when the Rx_LPI_USEC_Cntr counter reaches half of the maximum value or the maximum value.
    eRXLPIUSCIS RXLPIUSCIS : 1;
    /// read-only - MMC Receive LPI transition counter interrupt status This bit is set when the Rx_LPI_Tran_Cntr counter reaches half of the maximum value or the maximum value.
    eRXLPITRCIS RXLPITRCIS : 1;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_INTERRUPT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_INTERRUPT &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_INTERRUPT*>(0x4043C704); }
};

// MMC Tx Interrupt
//
union MAC_MMC_TX_INTERRUPT {
  
  enum class eTXGBOCTIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Good Bad Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Good Bad Octet Counter Interrupt Status detected
  };
  
  enum class eTXGBPKTIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTXBCGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Broadcast Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Broadcast Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXMCGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Multicast Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Multicast Good Packet Counter Interrupt Status detected
  };
  
  enum class eTX64OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTX65T127OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTX128T255OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTX256T511OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTX512T1023OCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTX1024TMAXOCTGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTXUCGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Unicast Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Unicast Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTXMCGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Multicast Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Multicast Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTXBCGBPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Broadcast Good Bad Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Broadcast Good Bad Packet Counter Interrupt Status detected
  };
  
  enum class eTXUFLOWERPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Underflow Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Underflow Error Packet Counter Interrupt Status detected
  };
  
  enum class eTXSCOLGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Single Collision Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Single Collision Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXMCOLGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Multiple Collision Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Multiple Collision Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXDEFPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Deferred Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Deferred Packet Counter Interrupt Status detected
  };
  
  enum class eTXLATCOLPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Late Collision Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Late Collision Packet Counter Interrupt Status detected
  };
  
  enum class eTXEXCOLPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Excessive Collision Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Excessive Collision Packet Counter Interrupt Status detected
  };
  
  enum class eTXCARERPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Carrier Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Carrier Error Packet Counter Interrupt Status detected
  };
  
  enum class eTXGOCTIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Good Octet Counter Interrupt Status detected
  };
  
  enum class eTXGPKTIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXEXDEFPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Excessive Deferral Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Excessive Deferral Packet Counter Interrupt Status detected
  };
  
  enum class eTXPAUSPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Pause Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Pause Packet Counter Interrupt Status detected
  };
  
  enum class eTXVLANGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit VLAN Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit VLAN Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXOSIZEGPIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit Oversize Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit Oversize Good Packet Counter Interrupt Status detected
  };
  
  enum class eTXLPIUSCIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit LPI microsecond Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit LPI microsecond Counter Interrupt Status detected
  };
  
  enum class eTXLPITRCIS : uint32_t {
    eINACTIVE = 0, // MMC Transmit LPI transition Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Transmit LPI transition Counter Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - MMC Transmit Good Bad Octet Counter Interrupt Status This bit is set when the txoctetcount_gb counter reaches half of the maximum value or the maximum value.
    eTXGBOCTIS TXGBOCTIS : 1;
    /// read-only - MMC Transmit Good Bad Packet Counter Interrupt Status This bit is set when the txpacketcount_gb counter reaches half of the maximum value or the maximum value.
    eTXGBPKTIS TXGBPKTIS : 1;
    /// read-only - MMC Transmit Broadcast Good Packet Counter Interrupt Status This bit is set when the txbroadcastpackets_g counter reaches half of the maximum value or the maximum value.
    eTXBCGPIS TXBCGPIS : 1;
    /// read-only - MMC Transmit Multicast Good Packet Counter Interrupt Status This bit is set when the txmulticastpackets_g counter reaches half of the maximum value or the maximum value.
    eTXMCGPIS TXMCGPIS : 1;
    /// read-only - MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx64octets_gb counter reaches half of the maximum value or the maximum value.
    eTX64OCTGBPIS TX64OCTGBPIS : 1;
    /// read-only - MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx65to127octets_gb counter reaches half the maximum value, and also when it reaches the maximum value.
    eTX65T127OCTGBPIS TX65T127OCTGBPIS : 1;
    /// read-only - MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx128to255octets_gb counter reaches half of the maximum value or the maximum value.
    eTX128T255OCTGBPIS TX128T255OCTGBPIS : 1;
    /// read-only - MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx256to511octets_gb counter reaches half of the maximum value or the maximum value.
    eTX256T511OCTGBPIS TX256T511OCTGBPIS : 1;
    /// read-only - MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx512to1023octets_gb counter reaches half of the maximum value or the maximum value.
    eTX512T1023OCTGBPIS TX512T1023OCTGBPIS : 1;
    /// read-only - MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Status This bit is set when the tx1024tomaxoctets_gb counter reaches half of the maximum value or the maximum value.
    eTX1024TMAXOCTGBPIS TX1024TMAXOCTGBPIS : 1;
    /// read-only - MMC Transmit Unicast Good Bad Packet Counter Interrupt Status This bit is set when the txunicastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXUCGBPIS TXUCGBPIS : 1;
    /// read-only - MMC Transmit Multicast Good Bad Packet Counter Interrupt Status The bit is set when the txmulticastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXMCGBPIS TXMCGBPIS : 1;
    /// read-only - MMC Transmit Broadcast Good Bad Packet Counter Interrupt Status This bit is set when the txbroadcastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXBCGBPIS TXBCGBPIS : 1;
    /// read-only - MMC Transmit Underflow Error Packet Counter Interrupt Status This bit is set when the txunderflowerror counter reaches half of the maximum value or the maximum value.
    eTXUFLOWERPIS TXUFLOWERPIS : 1;
    /// read-only - MMC Transmit Single Collision Good Packet Counter Interrupt Status This bit is set when the txsinglecol_g counter reaches half of the maximum value or the maximum value.
    eTXSCOLGPIS TXSCOLGPIS : 1;
    /// read-only - MMC Transmit Multiple Collision Good Packet Counter Interrupt Status This bit is set when the txmulticol_g counter reaches half of the maximum value or the maximum value.
    eTXMCOLGPIS TXMCOLGPIS : 1;
    /// read-only - MMC Transmit Deferred Packet Counter Interrupt Status This bit is set when the txdeferred counter reaches half of the maximum value or the maximum value.
    eTXDEFPIS TXDEFPIS : 1;
    /// read-only - MMC Transmit Late Collision Packet Counter Interrupt Status This bit is set when the txlatecol counter reaches half of the maximum value or the maximum value.
    eTXLATCOLPIS TXLATCOLPIS : 1;
    /// read-only - MMC Transmit Excessive Collision Packet Counter Interrupt Status This bit is set when the txexesscol counter reaches half of the maximum value or the maximum value.
    eTXEXCOLPIS TXEXCOLPIS : 1;
    /// read-only - MMC Transmit Carrier Error Packet Counter Interrupt Status This bit is set when the txcarriererror counter reaches half of the maximum value or the maximum value.
    eTXCARERPIS TXCARERPIS : 1;
    /// read-only - MMC Transmit Good Octet Counter Interrupt Status This bit is set when the txoctetcount_g counter reaches half of the maximum value or the maximum value.
    eTXGOCTIS TXGOCTIS : 1;
    /// read-only - MMC Transmit Good Packet Counter Interrupt Status This bit is set when the txpacketcount_g counter reaches half of the maximum value or the maximum value.
    eTXGPKTIS TXGPKTIS : 1;
    /// read-only - MMC Transmit Excessive Deferral Packet Counter Interrupt Status This bit is set when the txexcessdef counter reaches half of the maximum value or the maximum value.
    eTXEXDEFPIS TXEXDEFPIS : 1;
    /// read-only - MMC Transmit Pause Packet Counter Interrupt Status This bit is set when the txpausepacketserror counter reaches half of the maximum value or the maximum value.
    eTXPAUSPIS TXPAUSPIS : 1;
    /// read-only - MMC Transmit VLAN Good Packet Counter Interrupt Status This bit is set when the txvlanpackets_g counter reaches half of the maximum value or the maximum value.
    eTXVLANGPIS TXVLANGPIS : 1;
    /// read-only - MMC Transmit Oversize Good Packet Counter Interrupt Status This bit is set when the txoversize_g counter reaches half of the maximum value or the maximum value.
    eTXOSIZEGPIS TXOSIZEGPIS : 1;
    /// read-only - MMC Transmit LPI microsecond counter interrupt status This bit is set when the Tx_LPI_USEC_Cntr counter reaches half of the maximum value or the maximum value.
    eTXLPIUSCIS TXLPIUSCIS : 1;
    /// read-only - MMC Transmit LPI transition counter interrupt status This bit is set when the Tx_LPI_Tran_Cntr counter reaches half of the maximum value or the maximum value.
    eTXLPITRCIS TXLPITRCIS : 1;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_TX_INTERRUPT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_TX_INTERRUPT &Instance() { return *reinterpret_cast<volatile MAC_MMC_TX_INTERRUPT*>(0x4043C708); }
};

// MMC Rx Interrupt Mask
//
union MAC_MMC_RX_INTERRUPT_MASK {
  
  enum class eRXGBPKTIM : uint32_t {
    eDISABLE = 0, // MMC Receive Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXGBOCTIM : uint32_t {
    eDISABLE = 0, // MMC Receive Good Bad Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Good Bad Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXGOCTIM : uint32_t {
    eDISABLE = 0, // MMC Receive Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXBCGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Broadcast Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Broadcast Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXMCGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Multicast Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Multicast Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXCRCERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive CRC Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive CRC Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXALGNERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Alignment Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Alignment Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXRUNTPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Runt Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Runt Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXJABERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Jabber Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Jabber Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUSIZEGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Undersize Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Undersize Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXOSIZEGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Oversize Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Oversize Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX64OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 64 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 64 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX65T127OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX128T255OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX256T511OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX512T1023OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRX1024TMAXOCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUCGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Unicast Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Unicast Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXLENERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Length Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Length Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXORANGEPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Out Of Range Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Out Of Range Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXPAUSPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Pause Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Pause Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXFOVPIM : uint32_t {
    eDISABLE = 0, // MMC Receive FIFO Overflow Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive FIFO Overflow Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXVLANGBPIM : uint32_t {
    eDISABLE = 0, // MMC Receive VLAN Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive VLAN Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXWDOGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Watchdog Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Watchdog Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXRCVERRPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXCTRLPIM : uint32_t {
    eDISABLE = 0, // MMC Receive Control Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive Control Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXLPIUSCIM : uint32_t {
    eDISABLE = 0, // MMC Receive LPI microsecond counter interrupt Mask is disabled
    eENABLE = 1, // MMC Receive LPI microsecond counter interrupt Mask is enabled
  };
  
  enum class eRXLPITRCIM : uint32_t {
    eDISABLE = 0, // MMC Receive LPI transition counter interrupt Mask is disabled
    eENABLE = 1, // MMC Receive LPI transition counter interrupt Mask is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MMC Receive Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxpacketcount_gb counter reaches half of the maximum value or the maximum value.
    eRXGBPKTIM RXGBPKTIM : 1;
    /// read-write - MMC Receive Good Bad Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxoctetcount_gb counter reaches half of the maximum value or the maximum value.
    eRXGBOCTIM RXGBOCTIM : 1;
    /// read-write - MMC Receive Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxoctetcount_g counter reaches half of the maximum value or the maximum value.
    eRXGOCTIM RXGOCTIM : 1;
    /// read-write - MMC Receive Broadcast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxbroadcastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXBCGPIM RXBCGPIM : 1;
    /// read-write - MMC Receive Multicast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxmulticastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXMCGPIM RXMCGPIM : 1;
    /// read-write - MMC Receive CRC Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxcrcerror counter reaches half of the maximum value or the maximum value.
    eRXCRCERPIM RXCRCERPIM : 1;
    /// read-write - MMC Receive Alignment Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxalignmenterror counter reaches half of the maximum value or the maximum value.
    eRXALGNERPIM RXALGNERPIM : 1;
    /// read-write - MMC Receive Runt Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxrunterror counter reaches half of the maximum value or the maximum value.
    eRXRUNTPIM RXRUNTPIM : 1;
    /// read-write - MMC Receive Jabber Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxjabbererror counter reaches half of the maximum value or the maximum value.
    eRXJABERPIM RXJABERPIM : 1;
    /// read-write - MMC Receive Undersize Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxundersize_g counter reaches half of the maximum value or the maximum value.
    eRXUSIZEGPIM RXUSIZEGPIM : 1;
    /// read-write - MMC Receive Oversize Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxoversize_g counter reaches half of the maximum value or the maximum value.
    eRXOSIZEGPIM RXOSIZEGPIM : 1;
    /// read-write - MMC Receive 64 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rx64octets_gb counter reaches half of the maximum value or the maximum value.
    eRX64OCTGBPIM RX64OCTGBPIM : 1;
    /// read-write - MMC Receive 65 to 127 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rx65to127octets_gb counter reaches half of the maximum value or the maximum value.
    eRX65T127OCTGBPIM RX65T127OCTGBPIM : 1;
    /// read-write - MMC Receive 128 to 255 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rx128to255octets_gb counter reaches half of the maximum value or the maximum value.
    eRX128T255OCTGBPIM RX128T255OCTGBPIM : 1;
    /// read-write - MMC Receive 256 to 511 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rx256to511octets_gb counter reaches half of the maximum value or the maximum value.
    eRX256T511OCTGBPIM RX256T511OCTGBPIM : 1;
    /// read-write - MMC Receive 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rx512to1023octets_gb counter reaches half of the maximum value or the maximum value.
    eRX512T1023OCTGBPIM RX512T1023OCTGBPIM : 1;
    /// read-write - MMC Receive 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask.
    eRX1024TMAXOCTGBPIM RX1024TMAXOCTGBPIM : 1;
    /// read-write - MMC Receive Unicast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxunicastpackets_g counter reaches half of the maximum value or the maximum value.
    eRXUCGPIM RXUCGPIM : 1;
    /// read-write - MMC Receive Length Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxlengtherror counter reaches half of the maximum value or the maximum value.
    eRXLENERPIM RXLENERPIM : 1;
    /// read-write - MMC Receive Out Of Range Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxoutofrangetype counter reaches half of the maximum value or the maximum value.
    eRXORANGEPIM RXORANGEPIM : 1;
    /// read-write - MMC Receive Pause Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxpausepackets counter reaches half of the maximum value or the maximum value.
    eRXPAUSPIM RXPAUSPIM : 1;
    /// read-write - MMC Receive FIFO Overflow Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxfifooverflow counter reaches half of the maximum value or the maximum value.
    eRXFOVPIM RXFOVPIM : 1;
    /// read-write - MMC Receive VLAN Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxvlanpackets_gb counter reaches half of the maximum value or the maximum value.
    eRXVLANGBPIM RXVLANGBPIM : 1;
    /// read-write - MMC Receive Watchdog Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxwatchdog counter reaches half of the maximum value or the maximum value.
    eRXWDOGPIM RXWDOGPIM : 1;
    /// read-write - MMC Receive Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxrcverror counter reaches half of the maximum value or the maximum value.
    eRXRCVERRPIM RXRCVERRPIM : 1;
    /// read-write - MMC Receive Control Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxctrlpackets_g counter reaches half of the maximum value or the maximum value.
    eRXCTRLPIM RXCTRLPIM : 1;
    /// read-write - MMC Receive LPI microsecond counter interrupt Mask Setting this bit masks the interrupt when the Rx_LPI_USEC_Cntr counter reaches half of the maximum value or the maximum value.
    eRXLPIUSCIM RXLPIUSCIM : 1;
    /// read-write - MMC Receive LPI transition counter interrupt Mask Setting this bit masks the interrupt when the Rx_LPI_Tran_Cntr counter reaches half of the maximum value or the maximum value.
    eRXLPITRCIM RXLPITRCIM : 1;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_INTERRUPT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_INTERRUPT_MASK &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_INTERRUPT_MASK*>(0x4043C70C); }
};

// MMC Tx Interrupt Mask
//
union MAC_MMC_TX_INTERRUPT_MASK {
  
  enum class eTXGBOCTIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Good Bad Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Good Bad Octet Counter Interrupt Mask is enabled
  };
  
  enum class eTXGBPKTIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXBCGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Broadcast Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Broadcast Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXMCGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Multicast Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Multicast Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX64OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX65T127OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX128T255OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX256T511OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX512T1023OCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTX1024TMAXOCTGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXUCGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Unicast Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Unicast Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXMCGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Multicast Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Multicast Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXBCGBPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Broadcast Good Bad Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Broadcast Good Bad Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXUFLOWERPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Underflow Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Underflow Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXSCOLGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Single Collision Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Single Collision Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXMCOLGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXDEFPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Deferred Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Deferred Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXLATCOLPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Late Collision Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Late Collision Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXEXCOLPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Excessive Collision Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Excessive Collision Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXCARERPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Carrier Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Carrier Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXGOCTIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eTXGPKTIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXEXDEFPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Excessive Deferral Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Excessive Deferral Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXPAUSPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Pause Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Pause Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXVLANGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit VLAN Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit VLAN Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXOSIZEGPIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Oversize Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Oversize Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eTXLPIUSCIM : uint32_t {
    eDISABLE = 0, // MMC Transmit LPI microsecond counter interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit LPI microsecond counter interrupt Mask is enabled
  };
  
  enum class eTXLPITRCIM : uint32_t {
    eDISABLE = 0, // MMC Transmit LPI transition counter interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit LPI transition counter interrupt Mask is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MMC Transmit Good Bad Octet Counter Interrupt Mask Setting this bit masks the interrupt when the txoctetcount_gb counter reaches half of the maximum value or the maximum value.
    eTXGBOCTIM TXGBOCTIM : 1;
    /// read-write - MMC Transmit Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txpacketcount_gb counter reaches half of the maximum value or the maximum value.
    eTXGBPKTIM TXGBPKTIM : 1;
    /// read-write - MMC Transmit Broadcast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txbroadcastpackets_g counter reaches half of the maximum value or the maximum value.
    eTXBCGPIM TXBCGPIM : 1;
    /// read-write - MMC Transmit Multicast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txmulticastpackets_g counter reaches half of the maximum value or the maximum value.
    eTXMCGPIM TXMCGPIM : 1;
    /// read-write - MMC Transmit 64 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx64octets_gb counter reaches half of the maximum value or the maximum value.
    eTX64OCTGBPIM TX64OCTGBPIM : 1;
    /// read-write - MMC Transmit 65 to 127 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx65to127octets_gb counter reaches half of the maximum value or the maximum value.
    eTX65T127OCTGBPIM TX65T127OCTGBPIM : 1;
    /// read-write - MMC Transmit 128 to 255 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx128to255octets_gb counter reaches half of the maximum value or the maximum value.
    eTX128T255OCTGBPIM TX128T255OCTGBPIM : 1;
    /// read-write - MMC Transmit 256 to 511 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx256to511octets_gb counter reaches half of the maximum value or the maximum value.
    eTX256T511OCTGBPIM TX256T511OCTGBPIM : 1;
    /// read-write - MMC Transmit 512 to 1023 Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx512to1023octets_gb counter reaches half of the maximum value or the maximum value.
    eTX512T1023OCTGBPIM TX512T1023OCTGBPIM : 1;
    /// read-write - MMC Transmit 1024 to Maximum Octet Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the tx1024tomaxoctets_gb counter reaches half of the maximum value or the maximum value.
    eTX1024TMAXOCTGBPIM TX1024TMAXOCTGBPIM : 1;
    /// read-write - MMC Transmit Unicast Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txunicastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXUCGBPIM TXUCGBPIM : 1;
    /// read-write - MMC Transmit Multicast Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txmulticastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXMCGBPIM TXMCGBPIM : 1;
    /// read-write - MMC Transmit Broadcast Good Bad Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txbroadcastpackets_gb counter reaches half of the maximum value or the maximum value.
    eTXBCGBPIM TXBCGBPIM : 1;
    /// read-write - MMC Transmit Underflow Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txunderflowerror counter reaches half of the maximum value or the maximum value.
    eTXUFLOWERPIM TXUFLOWERPIM : 1;
    /// read-write - MMC Transmit Single Collision Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txsinglecol_g counter reaches half of the maximum value or the maximum value.
    eTXSCOLGPIM TXSCOLGPIM : 1;
    /// read-write - MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txmulticol_g counter reaches half of the maximum value or the maximum value.
    eTXMCOLGPIM TXMCOLGPIM : 1;
    /// read-write - MMC Transmit Deferred Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txdeferred counter reaches half of the maximum value or the maximum value.
    eTXDEFPIM TXDEFPIM : 1;
    /// read-write - MMC Transmit Late Collision Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txlatecol counter reaches half of the maximum value or the maximum value.
    eTXLATCOLPIM TXLATCOLPIM : 1;
    /// read-write - MMC Transmit Excessive Collision Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txexcesscol counter reaches half of the maximum value or the maximum value.
    eTXEXCOLPIM TXEXCOLPIM : 1;
    /// read-write - MMC Transmit Carrier Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txcarriererror counter reaches half of the maximum value or the maximum value.
    eTXCARERPIM TXCARERPIM : 1;
    /// read-write - MMC Transmit Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the txoctetcount_g counter reaches half of the maximum value or the maximum value.
    eTXGOCTIM TXGOCTIM : 1;
    /// read-write - MMC Transmit Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txpacketcount_g counter reaches half of the maximum value or the maximum value.
    eTXGPKTIM TXGPKTIM : 1;
    /// read-write - MMC Transmit Excessive Deferral Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txexcessdef counter reaches half of the maximum value or the maximum value.
    eTXEXDEFPIM TXEXDEFPIM : 1;
    /// read-write - MMC Transmit Pause Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txpausepackets counter reaches half of the maximum value or the maximum value.
    eTXPAUSPIM TXPAUSPIM : 1;
    /// read-write - MMC Transmit VLAN Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txvlanpackets_g counter reaches half of the maximum value or the maximum value.
    eTXVLANGPIM TXVLANGPIM : 1;
    /// read-write - MMC Transmit Oversize Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the txoversize_g counter reaches half of the maximum value or the maximum value.
    eTXOSIZEGPIM TXOSIZEGPIM : 1;
    /// read-write - MMC Transmit LPI microsecond counter interrupt Mask Setting this bit masks the interrupt when the Tx_LPI_USEC_Cntr counter reaches half of the maximum value or the maximum value.
    eTXLPIUSCIM TXLPIUSCIM : 1;
    /// read-write - MMC Transmit LPI transition counter interrupt Mask Setting this bit masks the interrupt when the Tx_LPI_Tran_Cntr counter reaches half of the maximum value or the maximum value.
    eTXLPITRCIM TXLPITRCIM : 1;
    uint32_t _reserved_0 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_TX_INTERRUPT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_TX_INTERRUPT_MASK &Instance() { return *reinterpret_cast<volatile MAC_MMC_TX_INTERRUPT_MASK*>(0x4043C710); }
};

// Tx Octet Count Good and Bad
//
union MAC_TX_OCTET_COUNT_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Octet Count Good Bad This field indicates the number of bytes transmitted, exclusive of preamble and retried bytes, in good and bad packets.
    uint32_t TXOCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_OCTET_COUNT_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_OCTET_COUNT_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_OCTET_COUNT_GOOD_BAD*>(0x4043C714); }
};

// Tx Packet Count Good and Bad
//
union MAC_TX_PACKET_COUNT_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Packet Count Good Bad This field indicates the number of good and bad packets transmitted, exclusive of retried packets.
    uint32_t TXPKTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_PACKET_COUNT_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_PACKET_COUNT_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_PACKET_COUNT_GOOD_BAD*>(0x4043C718); }
};

// Tx Broadcast Packets Good
//
union MAC_TX_BROADCAST_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Broadcast Packets Good This field indicates the number of good broadcast packets transmitted.
    uint32_t TXBCASTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_BROADCAST_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_BROADCAST_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_BROADCAST_PACKETS_GOOD*>(0x4043C71C); }
};

// Tx Multicast Packets Good
//
union MAC_TX_MULTICAST_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Multicast Packets Good This field indicates the number of good multicast packets transmitted.
    uint32_t TXMCASTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_MULTICAST_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_MULTICAST_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_MULTICAST_PACKETS_GOOD*>(0x4043C720); }
};

// Tx Good and Bad 64-Byte Packets
//
union MAC_TX_64OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 64Octets Packets Good_Bad This field indicates the number of good and bad packets transmitted with length 64 bytes, exclusive of preamble and retried packets.
    uint32_t TX64OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_64OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_64OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_64OCTETS_PACKETS_GOOD_BAD*>(0x4043C724); }
};

// Tx Good and Bad 65 to 127-Byte Packets
//
union MAC_TX_65TO127OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 65To127Octets Packets Good Bad This field indicates the number of good and bad packets transmitted with length between 65 and 127 (inclusive) bytes, exclusive of preamble and retried packets.
    uint32_t TX65_127OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_65TO127OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_65TO127OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_65TO127OCTETS_PACKETS_GOOD_BAD*>(0x4043C728); }
};

// Tx Good and Bad 128 to 255-Byte Packets
//
union MAC_TX_128TO255OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 128To255Octets Packets Good Bad This field indicates the number of good and bad packets transmitted with length between 128 and 255 (inclusive) bytes, exclusive of preamble and retried packets.
    uint32_t TX128_255OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_128TO255OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_128TO255OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_128TO255OCTETS_PACKETS_GOOD_BAD*>(0x4043C72C); }
};

// Tx Good and Bad 256 to 511-Byte Packets
//
union MAC_TX_256TO511OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 256To511Octets Packets Good Bad This field indicates the number of good and bad packets transmitted with length between 256 and 511 (inclusive) bytes, exclusive of preamble and retried packets.
    uint32_t TX256_511OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_256TO511OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_256TO511OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_256TO511OCTETS_PACKETS_GOOD_BAD*>(0x4043C730); }
};

// Tx Good and Bad 512 to 1023-Byte Packets
//
union MAC_TX_512TO1023OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 512To1023Octets Packets Good Bad This field indicates the number of good and bad packets transmitted with length between 512 and 1023 (inclusive) bytes, exclusive of preamble and retried packets.
    uint32_t TX512_1023OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_512TO1023OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_512TO1023OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_512TO1023OCTETS_PACKETS_GOOD_BAD*>(0x4043C734); }
};

// Tx Good and Bad 1024 to Max-Byte Packets
//
union MAC_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx 1024ToMaxOctets Packets Good Bad This field indicates the number of good and bad packets transmitted with length between 1024 and maxsize (inclusive) bytes, exclusive of preamble and retried packets.
    uint32_t TX1024_MAXOCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_1024TOMAXOCTETS_PACKETS_GOOD_BAD*>(0x4043C738); }
};

// Good and Bad Unicast Packets Transmitted
//
union MAC_TX_UNICAST_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Unicast Packets Good Bad This field indicates the number of good and bad unicast packets transmitted.
    uint32_t TXUCASTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_UNICAST_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_UNICAST_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_UNICAST_PACKETS_GOOD_BAD*>(0x4043C73C); }
};

// Good and Bad Multicast Packets Transmitted
//
union MAC_TX_MULTICAST_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Multicast Packets Good Bad This field indicates the number of good and bad multicast packets transmitted.
    uint32_t TXMCASTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_MULTICAST_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_MULTICAST_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_MULTICAST_PACKETS_GOOD_BAD*>(0x4043C740); }
};

// Good and Bad Broadcast Packets Transmitted
//
union MAC_TX_BROADCAST_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Broadcast Packets Good Bad This field indicates the number of good and bad broadcast packets transmitted.
    uint32_t TXBCASTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_BROADCAST_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_BROADCAST_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_TX_BROADCAST_PACKETS_GOOD_BAD*>(0x4043C744); }
};

// Tx Packets Aborted By Underflow Error
//
union MAC_TX_UNDERFLOW_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Underflow Error Packets This field indicates the number of packets aborted because of packets underflow error.
    uint32_t TXUNDRFLW : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_UNDERFLOW_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_UNDERFLOW_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_UNDERFLOW_ERROR_PACKETS*>(0x4043C748); }
};

// Single Collision Good Packets Transmitted
//
union MAC_TX_SINGLE_COLLISION_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Single Collision Good Packets This field indicates the number of successfully transmitted packets after a single collision in the half-duplex mode.
    uint32_t TXSNGLCOLG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_SINGLE_COLLISION_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_SINGLE_COLLISION_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_SINGLE_COLLISION_GOOD_PACKETS*>(0x4043C74C); }
};

// Multiple Collision Good Packets Transmitted
//
union MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Multiple Collision Good Packets This field indicates the number of successfully transmitted packets after multiple collisions in the half-duplex mode.
    uint32_t TXMULTCOLG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS*>(0x4043C750); }
};

// Deferred Packets Transmitted
//
union MAC_TX_DEFERRED_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Deferred Packets This field indicates the number of successfully transmitted after a deferral in the half-duplex mode.
    uint32_t TXDEFRD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_DEFERRED_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_DEFERRED_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_DEFERRED_PACKETS*>(0x4043C754); }
};

// Late Collision Packets Transmitted
//
union MAC_TX_LATE_COLLISION_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Late Collision Packets This field indicates the number of packets aborted because of late collision error.
    uint32_t TXLATECOL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_LATE_COLLISION_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_LATE_COLLISION_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_LATE_COLLISION_PACKETS*>(0x4043C758); }
};

// Excessive Collision Packets Transmitted
//
union MAC_TX_EXCESSIVE_COLLISION_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Excessive Collision Packets This field indicates the number of packets aborted because of excessive (16) collision errors.
    uint32_t TXEXSCOL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_EXCESSIVE_COLLISION_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_EXCESSIVE_COLLISION_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_EXCESSIVE_COLLISION_PACKETS*>(0x4043C75C); }
};

// Carrier Error Packets Transmitted
//
union MAC_TX_CARRIER_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Carrier Error Packets This field indicates the number of packets aborted because of carrier sense error (no carrier or loss of carrier).
    uint32_t TXCARR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_CARRIER_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_CARRIER_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_CARRIER_ERROR_PACKETS*>(0x4043C760); }
};

// Bytes Transmitted in Good Packets
//
union MAC_TX_OCTET_COUNT_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Octet Count Good This field indicates the number of bytes transmitted, exclusive of preamble, only in good packets.
    uint32_t TXOCTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_OCTET_COUNT_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_OCTET_COUNT_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_OCTET_COUNT_GOOD*>(0x4043C764); }
};

// Good Packets Transmitted
//
union MAC_TX_PACKET_COUNT_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Packet Count Good This field indicates the number of good packets transmitted.
    uint32_t TXPKTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_PACKET_COUNT_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_PACKET_COUNT_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_PACKET_COUNT_GOOD*>(0x4043C768); }
};

// Packets Aborted By Excessive Deferral Error
//
union MAC_TX_EXCESSIVE_DEFERRAL_ERROR {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Excessive Deferral Error This field indicates the number of packets aborted because of excessive deferral error (deferred for more than two max-sized packet times).
    uint32_t TXEXSDEF : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_EXCESSIVE_DEFERRAL_ERROR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_EXCESSIVE_DEFERRAL_ERROR &Instance() { return *reinterpret_cast<volatile MAC_TX_EXCESSIVE_DEFERRAL_ERROR*>(0x4043C76C); }
};

// Pause Packets Transmitted
//
union MAC_TX_PAUSE_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Pause Packets This field indicates the number of good Pause packets transmitted.
    uint32_t TXPAUSE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_PAUSE_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_PAUSE_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_TX_PAUSE_PACKETS*>(0x4043C770); }
};

// Good VLAN Packets Transmitted
//
union MAC_TX_VLAN_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx VLAN Packets Good This field provides the number of good VLAN packets transmitted.
    uint32_t TXVLANG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_VLAN_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_VLAN_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_VLAN_PACKETS_GOOD*>(0x4043C774); }
};

// Good Oversize Packets Transmitted
//
union MAC_TX_OSIZE_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Tx OSize Packets Good This field indicates the number of packets transmitted without errors and with length greater than the maxsize (1,518 or 1,522 bytes for VLAN tagged packets; 2000 bytes if enabled in S2KP bit of the CONFIGURATION register).
    uint32_t TXOSIZG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_OSIZE_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_OSIZE_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_TX_OSIZE_PACKETS_GOOD*>(0x4043C778); }
};

// Good and Bad Packets Received
//
union MAC_RX_PACKETS_COUNT_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Packets Count Good Bad This field indicates the number of good and bad packets received.
    uint32_t RXPKTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_PACKETS_COUNT_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_PACKETS_COUNT_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_PACKETS_COUNT_GOOD_BAD*>(0x4043C780); }
};

// Bytes in Good and Bad Packets Received
//
union MAC_RX_OCTET_COUNT_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Octet Count Good Bad This field indicates the number of bytes received, exclusive of preamble, in good and bad packets.
    uint32_t RXOCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_OCTET_COUNT_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_OCTET_COUNT_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_OCTET_COUNT_GOOD_BAD*>(0x4043C784); }
};

// Bytes in Good Packets Received
//
union MAC_RX_OCTET_COUNT_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Octet Count Good This field indicates the number of bytes received, exclusive of preamble, only in good packets.
    uint32_t RXOCTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_OCTET_COUNT_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_OCTET_COUNT_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_OCTET_COUNT_GOOD*>(0x4043C788); }
};

// Good Broadcast Packets Received
//
union MAC_RX_BROADCAST_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Broadcast Packets Good This field indicates the number of good broadcast packets received.
    uint32_t RXBCASTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_BROADCAST_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_BROADCAST_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_BROADCAST_PACKETS_GOOD*>(0x4043C78C); }
};

// Good Multicast Packets Received
//
union MAC_RX_MULTICAST_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Multicast Packets Good This field indicates the number of good multicast packets received.
    uint32_t RXMCASTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_MULTICAST_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_MULTICAST_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_MULTICAST_PACKETS_GOOD*>(0x4043C790); }
};

// CRC Error Packets Received
//
union MAC_RX_CRC_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx CRC Error Packets This field indicates the number of packets received with CRC error.
    uint32_t RXCRCERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_CRC_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_CRC_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_CRC_ERROR_PACKETS*>(0x4043C794); }
};

// Alignment Error Packets Received
//
union MAC_RX_ALIGNMENT_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Alignment Error Packets This field indicates the number of packets received with alignment (dribble) error.
    uint32_t RXALGNERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_ALIGNMENT_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_ALIGNMENT_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_ALIGNMENT_ERROR_PACKETS*>(0x4043C798); }
};

// Runt Error Packets Received
//
union MAC_RX_RUNT_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Runt Error Packets This field indicates the number of packets received with runt (length less than 64 bytes and CRC error) error.
    uint32_t RXRUNTERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_RUNT_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_RUNT_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_RUNT_ERROR_PACKETS*>(0x4043C79C); }
};

// Jabber Error Packets Received
//
union MAC_RX_JABBER_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Jabber Error Packets This field indicates the number of giant packets received with length (including CRC) greater than 1,518 bytes (1,522 bytes for VLAN tagged) and with CRC error.
    uint32_t RXJABERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_JABBER_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_JABBER_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_JABBER_ERROR_PACKETS*>(0x4043C7A0); }
};

// Good Undersize Packets Received
//
union MAC_RX_UNDERSIZE_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Undersize Packets Good This field indicates the number of packets received with length less than 64 bytes, without any errors.
    uint32_t RXUNDERSZG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_UNDERSIZE_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_UNDERSIZE_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_UNDERSIZE_PACKETS_GOOD*>(0x4043C7A4); }
};

// Good Oversize Packets Received
//
union MAC_RX_OVERSIZE_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Oversize Packets Good This field indicates the number of packets received without errors, with length greater than the maxsize (1,518 bytes or 1,522 bytes for VLAN tagged packets; 2000 bytes if enabled in the S2KP bit of the MAC_CONFIGURATION register).
    uint32_t RXOVERSZG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_OVERSIZE_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_OVERSIZE_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_OVERSIZE_PACKETS_GOOD*>(0x4043C7A8); }
};

// Good and Bad 64-Byte Packets Received
//
union MAC_RX_64OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx 64 Octets Packets Good Bad This field indicates the number of good and bad packets received with length 64 bytes, exclusive of the preamble.
    uint32_t RX64OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_64OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_64OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_64OCTETS_PACKETS_GOOD_BAD*>(0x4043C7AC); }
};

// Good and Bad 64-to-127 Byte Packets Received
//
union MAC_RX_65TO127OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx 65-127 Octets Packets Good Bad This field indicates the number of good and bad packets received with length between 65 and 127 (inclusive) bytes, exclusive of the preamble.
    uint32_t RX65_127OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_65TO127OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_65TO127OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_65TO127OCTETS_PACKETS_GOOD_BAD*>(0x4043C7B0); }
};

// Good and Bad 128-to-255 Byte Packets Received
//
union MAC_RX_128TO255OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx 128-255 Octets Packets Good Bad This field indicates the number of good and bad packets received with length between 128 and 255 (inclusive) bytes, exclusive of the preamble.
    uint32_t RX128_255OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_128TO255OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_128TO255OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_128TO255OCTETS_PACKETS_GOOD_BAD*>(0x4043C7B4); }
};

// Good and Bad 256-to-511 Byte Packets Received
//
union MAC_RX_256TO511OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx 256-511 Octets Packets Good Bad This field indicates the number of good and bad packets received with length between 256 and 511 (inclusive) bytes, exclusive of the preamble.
    uint32_t RX256_511OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_256TO511OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_256TO511OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_256TO511OCTETS_PACKETS_GOOD_BAD*>(0x4043C7B8); }
};

// Good and Bad 512-to-1023 Byte Packets Received
//
union MAC_RX_512TO1023OCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - RX 512-1023 Octets Packets Good Bad This field indicates the number of good and bad packets received with length between 512 and 1023 (inclusive) bytes, exclusive of the preamble.
    uint32_t RX512_1023OCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_512TO1023OCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_512TO1023OCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_512TO1023OCTETS_PACKETS_GOOD_BAD*>(0x4043C7BC); }
};

// Good and Bad 1024-to-Max Byte Packets Received
//
union MAC_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx 1024-Max Octets Good Bad This field indicates the number of good and bad packets received with length between 1024 and maxsize (inclusive) bytes, exclusive of the preamble.
    uint32_t RX1024_MAXOCTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD*>(0x4043C7C0); }
};

// Good Unicast Packets Received
//
union MAC_RX_UNICAST_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Unicast Packets Good This field indicates the number of good unicast packets received.
    uint32_t RXUCASTG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_UNICAST_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_UNICAST_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_UNICAST_PACKETS_GOOD*>(0x4043C7C4); }
};

// Length Error Packets Received
//
union MAC_RX_LENGTH_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Length Error Packets This field indicates the number of packets received with length error (Length Type field not equal to packet size), for all packets with valid length field.
    uint32_t RXLENERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_LENGTH_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_LENGTH_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_LENGTH_ERROR_PACKETS*>(0x4043C7C8); }
};

// Out-of-range Type Packets Received
//
union MAC_RX_OUT_OF_RANGE_TYPE_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Out of Range Type Packet This field indicates the number of packets received with length field not equal to the valid packet size (greater than 1,500 but less than 1,536).
    uint32_t RXOUTOFRNG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_OUT_OF_RANGE_TYPE_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_OUT_OF_RANGE_TYPE_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_OUT_OF_RANGE_TYPE_PACKETS*>(0x4043C7CC); }
};

// Pause Packets Received
//
union MAC_RX_PAUSE_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Pause Packets This field indicates the number of good and valid Pause packets received.
    uint32_t RXPAUSEPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_PAUSE_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_PAUSE_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_PAUSE_PACKETS*>(0x4043C7D0); }
};

// Missed Packets Due to FIFO Overflow
//
union MAC_RX_FIFO_OVERFLOW_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx FIFO Overflow Packets This field indicates the number of missed received packets because of FIFO overflow.
    uint32_t RXFIFOOVFL : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_FIFO_OVERFLOW_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_FIFO_OVERFLOW_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_FIFO_OVERFLOW_PACKETS*>(0x4043C7D4); }
};

// Good and Bad VLAN Packets Received
//
union MAC_RX_VLAN_PACKETS_GOOD_BAD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx VLAN Packets Good Bad This field indicates the number of good and bad VLAN packets received.
    uint32_t RXVLANPKTGB : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_VLAN_PACKETS_GOOD_BAD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_VLAN_PACKETS_GOOD_BAD &Instance() { return *reinterpret_cast<volatile MAC_RX_VLAN_PACKETS_GOOD_BAD*>(0x4043C7D8); }
};

// Watchdog Error Packets Received
//
union MAC_RX_WATCHDOG_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Watchdog Error Packets This field indicates the number of packets received with error because of watchdog timeout error (packets with a data load larger than 2,048 bytes (when JE and WD bits are reset in MAC_CONFIGURATION register), 10,240 bytes (when JE bit is set and WD bit is reset in MAC_CONFIGURATION register), 16,384 bytes (when WD bit is set in MAC_CONFIGURATION register) or the value programmed in the MAC_WATCHDOG_TIMEOUT register).
    uint32_t RXWDGERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_WATCHDOG_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_WATCHDOG_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_WATCHDOG_ERROR_PACKETS*>(0x4043C7DC); }
};

// Receive Error Packets Received
//
union MAC_RX_RECEIVE_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Receive Error Packets This field indicates the number of packets received with Receive error or Packet Extension error on the GMII or MII interface.
    uint32_t RXRCVERR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_RECEIVE_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_RECEIVE_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RX_RECEIVE_ERROR_PACKETS*>(0x4043C7E0); }
};

// Good Control Packets Received
//
union MAC_RX_CONTROL_PACKETS_GOOD {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Control Packets Good This field indicates the number of good control packets received.
    uint32_t RXCTRLG : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_CONTROL_PACKETS_GOOD() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_CONTROL_PACKETS_GOOD &Instance() { return *reinterpret_cast<volatile MAC_RX_CONTROL_PACKETS_GOOD*>(0x4043C7E4); }
};

// Microseconds Tx LPI Asserted
//
union MAC_TX_LPI_USEC_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Tx LPI Microseconds Counter This field indicates the number of microseconds Tx LPI is asserted.
    uint32_t TXLPIUSC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_LPI_USEC_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_LPI_USEC_CNTR &Instance() { return *reinterpret_cast<volatile MAC_TX_LPI_USEC_CNTR*>(0x4043C7EC); }
};

// Number of Times Tx LPI Asserted
//
union MAC_TX_LPI_TRAN_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Tx LPI Transition counter This field indicates the number of times Tx LPI Entry has occurred.
    uint32_t TXLPITRC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_LPI_TRAN_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_LPI_TRAN_CNTR &Instance() { return *reinterpret_cast<volatile MAC_TX_LPI_TRAN_CNTR*>(0x4043C7F0); }
};

// Microseconds Rx LPI Sampled
//
union MAC_RX_LPI_USEC_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx LPI Microseconds Counter This field indicates the number of microseconds Rx LPI is asserted.
    uint32_t RXLPIUSC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_LPI_USEC_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_LPI_USEC_CNTR &Instance() { return *reinterpret_cast<volatile MAC_RX_LPI_USEC_CNTR*>(0x4043C7F4); }
};

// Number of Times Rx LPI Entered
//
union MAC_RX_LPI_TRAN_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx LPI Transition counter This field indicates the number of times Rx LPI Entry has occurred.
    uint32_t RXLPITRC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RX_LPI_TRAN_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RX_LPI_TRAN_CNTR &Instance() { return *reinterpret_cast<volatile MAC_RX_LPI_TRAN_CNTR*>(0x4043C7F8); }
};

// MMC IPC Receive Interrupt Mask
//
union MAC_MMC_IPC_RX_INTERRUPT_MASK {
  
  enum class eRXIPV4GPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4HERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Header Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Header Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4NOPAYPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 No Payload Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 No Payload Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4FRAGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Fragmented Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Fragmented Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4UDSBLPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6GPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6HERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 Header Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 Header Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6NOPAYPIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 No Payload Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 No Payload Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUDPGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive UDP Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive UDP Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUDPERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive UDP Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive UDP Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXTCPGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive TCP Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive TCP Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXTCPERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive TCP Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive TCP Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXICMPGPIM : uint32_t {
    eDISABLE = 0, // MMC Receive ICMP Good Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive ICMP Good Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXICMPERPIM : uint32_t {
    eDISABLE = 0, // MMC Receive ICMP Error Packet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive ICMP Error Packet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4GOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4HEROIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Header Error Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Header Error Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4NOPAYOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 No Payload Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 No Payload Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4FRAGOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 Fragmented Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 Fragmented Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV4UDSBLOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6GOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6HEROIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXIPV6NOPAYOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 Header Error Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 Header Error Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUDPGOIM : uint32_t {
    eDISABLE = 0, // MMC Receive IPV6 No Payload Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive IPV6 No Payload Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXUDPEROIM : uint32_t {
    eDISABLE = 0, // MMC Receive UDP Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive UDP Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXTCPGOIM : uint32_t {
    eDISABLE = 0, // MMC Receive TCP Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive TCP Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXTCPEROIM : uint32_t {
    eDISABLE = 0, // MMC Receive TCP Error Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive TCP Error Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXICMPGOIM : uint32_t {
    eDISABLE = 0, // MMC Receive ICMP Good Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive ICMP Good Octet Counter Interrupt Mask is enabled
  };
  
  enum class eRXICMPEROIM : uint32_t {
    eDISABLE = 0, // MMC Receive ICMP Error Octet Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Receive ICMP Error Octet Counter Interrupt Mask is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MMC Receive IPV4 Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4GPIM RXIPV4GPIM : 1;
    /// read-write - MMC Receive IPV4 Header Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_hdrerr_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4HERPIM RXIPV4HERPIM : 1;
    /// read-write - MMC Receive IPV4 No Payload Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_nopay_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4NOPAYPIM RXIPV4NOPAYPIM : 1;
    /// read-write - MMC Receive IPV4 Fragmented Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_frag_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4FRAGPIM RXIPV4FRAGPIM : 1;
    /// read-write - MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_udsbl_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4UDSBLPIM RXIPV4UDSBLPIM : 1;
    /// read-write - MMC Receive IPV6 Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6GPIM RXIPV6GPIM : 1;
    /// read-write - MMC Receive IPV6 Header Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_hdrerr_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6HERPIM RXIPV6HERPIM : 1;
    /// read-write - MMC Receive IPV6 No Payload Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_nopay_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6NOPAYPIM RXIPV6NOPAYPIM : 1;
    /// read-write - MMC Receive UDP Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxudp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXUDPGPIM RXUDPGPIM : 1;
    /// read-write - MMC Receive UDP Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxudp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXUDPERPIM RXUDPERPIM : 1;
    /// read-write - MMC Receive TCP Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxtcp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXTCPGPIM RXTCPGPIM : 1;
    /// read-write - MMC Receive TCP Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxtcp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXTCPERPIM RXTCPERPIM : 1;
    /// read-write - MMC Receive ICMP Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxicmp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXICMPGPIM RXICMPGPIM : 1;
    /// read-write - MMC Receive ICMP Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the rxicmp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXICMPERPIM RXICMPERPIM : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - MMC Receive IPV4 Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4GOIM RXIPV4GOIM : 1;
    /// read-write - MMC Receive IPV4 Header Error Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_hdrerr_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4HEROIM RXIPV4HEROIM : 1;
    /// read-write - MMC Receive IPV4 No Payload Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_nopay_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4NOPAYOIM RXIPV4NOPAYOIM : 1;
    /// read-write - MMC Receive IPV4 Fragmented Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_frag_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4FRAGOIM RXIPV4FRAGOIM : 1;
    /// read-write - MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv4_udsbl_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4UDSBLOIM RXIPV4UDSBLOIM : 1;
    /// read-write - MMC Receive IPV6 Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6GOIM RXIPV6GOIM : 1;
    /// read-write - MMC Receive IPV6 Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_hdrerr_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6HEROIM RXIPV6HEROIM : 1;
    /// read-write - MMC Receive IPV6 Header Error Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxipv6_nopay_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6NOPAYOIM RXIPV6NOPAYOIM : 1;
    /// read-write - MMC Receive IPV6 No Payload Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxudp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXUDPGOIM RXUDPGOIM : 1;
    /// read-write - MMC Receive UDP Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxudp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXUDPEROIM RXUDPEROIM : 1;
    /// read-write - MMC Receive TCP Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxtcp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXTCPGOIM RXTCPGOIM : 1;
    /// read-write - MMC Receive TCP Error Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxtcp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXTCPEROIM RXTCPEROIM : 1;
    /// read-write - MMC Receive ICMP Good Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxicmp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXICMPGOIM RXICMPGOIM : 1;
    /// read-write - MMC Receive ICMP Error Octet Counter Interrupt Mask Setting this bit masks the interrupt when the rxicmp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXICMPEROIM RXICMPEROIM : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_IPC_RX_INTERRUPT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_IPC_RX_INTERRUPT_MASK &Instance() { return *reinterpret_cast<volatile MAC_MMC_IPC_RX_INTERRUPT_MASK*>(0x4043C800); }
};

// MMC IPC Receive Interrupt
//
union MAC_MMC_IPC_RX_INTERRUPT {
  
  enum class eRXIPV4GPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4HERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Header Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Header Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4NOPAYPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 No Payload Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 No Payload Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4FRAGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Fragmented Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Fragmented Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4UDSBLPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6GPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6HERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 Header Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 Header Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6NOPAYPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 No Payload Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 No Payload Packet Counter Interrupt Status detected
  };
  
  enum class eRXUDPGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive UDP Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive UDP Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXUDPERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive UDP Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive UDP Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXTCPGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive TCP Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive TCP Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXTCPERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive TCP Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive TCP Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXICMPGPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive ICMP Good Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive ICMP Good Packet Counter Interrupt Status detected
  };
  
  enum class eRXICMPERPIS : uint32_t {
    eINACTIVE = 0, // MMC Receive ICMP Error Packet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive ICMP Error Packet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4GOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4HEROIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Header Error Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Header Error Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4NOPAYOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 No Payload Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 No Payload Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4FRAGOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 Fragmented Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 Fragmented Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV4UDSBLOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6GOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6HEROIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 Header Error Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 Header Error Octet Counter Interrupt Status detected
  };
  
  enum class eRXIPV6NOPAYOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive IPV6 No Payload Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive IPV6 No Payload Octet Counter Interrupt Status detected
  };
  
  enum class eRXUDPGOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive UDP Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive UDP Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXUDPEROIS : uint32_t {
    eINACTIVE = 0, // MMC Receive UDP Error Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive UDP Error Octet Counter Interrupt Status detected
  };
  
  enum class eRXTCPGOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive TCP Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive TCP Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXTCPEROIS : uint32_t {
    eINACTIVE = 0, // MMC Receive TCP Error Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive TCP Error Octet Counter Interrupt Status detected
  };
  
  enum class eRXICMPGOIS : uint32_t {
    eINACTIVE = 0, // MMC Receive ICMP Good Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive ICMP Good Octet Counter Interrupt Status detected
  };
  
  enum class eRXICMPEROIS : uint32_t {
    eINACTIVE = 0, // MMC Receive ICMP Error Octet Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Receive ICMP Error Octet Counter Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - MMC Receive IPV4 Good Packet Counter Interrupt Status This bit is set when the rxipv4_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4GPIS RXIPV4GPIS : 1;
    /// read-only - MMC Receive IPV4 Header Error Packet Counter Interrupt Status This bit is set when the rxipv4_hdrerr_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4HERPIS RXIPV4HERPIS : 1;
    /// read-only - MMC Receive IPV4 No Payload Packet Counter Interrupt Status This bit is set when the rxipv4_nopay_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4NOPAYPIS RXIPV4NOPAYPIS : 1;
    /// read-only - MMC Receive IPV4 Fragmented Packet Counter Interrupt Status This bit is set when the rxipv4_frag_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4FRAGPIS RXIPV4FRAGPIS : 1;
    /// read-only - MMC Receive IPV4 UDP Checksum Disabled Packet Counter Interrupt Status This bit is set when the rxipv4_udsbl_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV4UDSBLPIS RXIPV4UDSBLPIS : 1;
    /// read-only - MMC Receive IPV6 Good Packet Counter Interrupt Status This bit is set when the rxipv6_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6GPIS RXIPV6GPIS : 1;
    /// read-only - MMC Receive IPV6 Header Error Packet Counter Interrupt Status This bit is set when the rxipv6_hdrerr_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6HERPIS RXIPV6HERPIS : 1;
    /// read-only - MMC Receive IPV6 No Payload Packet Counter Interrupt Status This bit is set when the rxipv6_nopay_pkts counter reaches half of the maximum value or the maximum value.
    eRXIPV6NOPAYPIS RXIPV6NOPAYPIS : 1;
    /// read-only - MC Receive UDP Good Packet Counter Interrupt Status This bit is set when the rxudp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXUDPGPIS RXUDPGPIS : 1;
    /// read-only - MMC Receive UDP Error Packet Counter Interrupt Status This bit is set when the rxudp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXUDPERPIS RXUDPERPIS : 1;
    /// read-only - MMC Receive TCP Good Packet Counter Interrupt Status This bit is set when the rxtcp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXTCPGPIS RXTCPGPIS : 1;
    /// read-only - MMC Receive TCP Error Packet Counter Interrupt Status This bit is set when the rxtcp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXTCPERPIS RXTCPERPIS : 1;
    /// read-only - MMC Receive ICMP Good Packet Counter Interrupt Status This bit is set when the rxicmp_gd_pkts counter reaches half of the maximum value or the maximum value.
    eRXICMPGPIS RXICMPGPIS : 1;
    /// read-only - MMC Receive ICMP Error Packet Counter Interrupt Status This bit is set when the rxicmp_err_pkts counter reaches half of the maximum value or the maximum value.
    eRXICMPERPIS RXICMPERPIS : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - MMC Receive IPV4 Good Octet Counter Interrupt Status This bit is set when the rxipv4_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4GOIS RXIPV4GOIS : 1;
    /// read-only - MMC Receive IPV4 Header Error Octet Counter Interrupt Status This bit is set when the rxipv4_hdrerr_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4HEROIS RXIPV4HEROIS : 1;
    /// read-only - MMC Receive IPV4 No Payload Octet Counter Interrupt Status This bit is set when the rxipv4_nopay_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4NOPAYOIS RXIPV4NOPAYOIS : 1;
    /// read-only - MMC Receive IPV4 Fragmented Octet Counter Interrupt Status This bit is set when the rxipv4_frag_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4FRAGOIS RXIPV4FRAGOIS : 1;
    /// read-only - MMC Receive IPV4 UDP Checksum Disabled Octet Counter Interrupt Status This bit is set when the rxipv4_udsbl_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV4UDSBLOIS RXIPV4UDSBLOIS : 1;
    /// read-only - MMC Receive IPV6 Good Octet Counter Interrupt Status This bit is set when the rxipv6_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6GOIS RXIPV6GOIS : 1;
    /// read-only - MMC Receive IPV6 Header Error Octet Counter Interrupt Status This bit is set when the rxipv6_hdrerr_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6HEROIS RXIPV6HEROIS : 1;
    /// read-only - MMC Receive IPV6 No Payload Octet Counter Interrupt Status This bit is set when the rxipv6_nopay_octets counter reaches half of the maximum value or the maximum value.
    eRXIPV6NOPAYOIS RXIPV6NOPAYOIS : 1;
    /// read-only - MMC Receive UDP Good Octet Counter Interrupt Status This bit is set when the rxudp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXUDPGOIS RXUDPGOIS : 1;
    /// read-only - MMC Receive UDP Error Octet Counter Interrupt Status This bit is set when the rxudp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXUDPEROIS RXUDPEROIS : 1;
    /// read-only - MMC Receive TCP Good Octet Counter Interrupt Status This bit is set when the rxtcp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXTCPGOIS RXTCPGOIS : 1;
    /// read-only - MMC Receive TCP Error Octet Counter Interrupt Status This bit is set when the rxtcp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXTCPEROIS RXTCPEROIS : 1;
    /// read-only - MMC Receive ICMP Good Octet Counter Interrupt Status This bit is set when the rxicmp_gd_octets counter reaches half of the maximum value or the maximum value.
    eRXICMPGOIS RXICMPGOIS : 1;
    /// read-only - MMC Receive ICMP Error Octet Counter Interrupt Status This bit is set when the rxicmp_err_octets counter reaches half of the maximum value or the maximum value.
    eRXICMPEROIS RXICMPEROIS : 1;
    uint32_t _reserved_1 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_IPC_RX_INTERRUPT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_IPC_RX_INTERRUPT &Instance() { return *reinterpret_cast<volatile MAC_MMC_IPC_RX_INTERRUPT*>(0x4043C808); }
};

// Good IPv4 Datagrams Received
//
union MAC_RXIPV4_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Good Packets This field indicates the number of good IPv4 datagrams received with the TCP, UDP, or ICMP payload.
    uint32_t RXIPV4GDPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_GOOD_PACKETS*>(0x4043C810); }
};

// IPv4 Datagrams Received with Header Errors
//
union MAC_RXIPV4_HEADER_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Header Error Packets This field indicates the number of IPv4 datagrams received with header (checksum, length, or version mismatch) errors.
    uint32_t RXIPV4HDRERRPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_HEADER_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_HEADER_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_HEADER_ERROR_PACKETS*>(0x4043C814); }
};

// IPv4 Datagrams Received with No Payload
//
union MAC_RXIPV4_NO_PAYLOAD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Payload Packets This field indicates the number of IPv4 datagram packets received that did not have a TCP, UDP, or ICMP payload.
    uint32_t RXIPV4NOPAYPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_NO_PAYLOAD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_NO_PAYLOAD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_NO_PAYLOAD_PACKETS*>(0x4043C818); }
};

// IPv4 Datagrams Received with Fragmentation
//
union MAC_RXIPV4_FRAGMENTED_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Fragmented Packets This field indicates the number of good IPv4 datagrams received with fragmentation.
    uint32_t RXIPV4FRAGPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_FRAGMENTED_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_FRAGMENTED_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_FRAGMENTED_PACKETS*>(0x4043C81C); }
};

// IPv4 Datagrams Received with UDP Checksum Disabled
//
union MAC_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 UDP Checksum Disabled Packets This field indicates the number of good IPv4 datagrams received that had a UDP payload with checksum disabled.
    uint32_t RXIPV4UDSBLPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_UDP_CHECKSUM_DISABLED_PACKETS*>(0x4043C820); }
};

// Good IPv6 Datagrams Received
//
union MAC_RXIPV6_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Good Packets This field indicates the number of good IPv6 datagrams received with the TCP, UDP, or ICMP payload.
    uint32_t RXIPV6GDPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_GOOD_PACKETS*>(0x4043C824); }
};

// IPv6 Datagrams Received with Header Errors
//
union MAC_RXIPV6_HEADER_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Header Error Packets This field indicates the number of IPv6 datagrams received with header (length or version mismatch) errors.
    uint32_t RXIPV6HDRERRPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_HEADER_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_HEADER_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_HEADER_ERROR_PACKETS*>(0x4043C828); }
};

// IPv6 Datagrams Received with No Payload
//
union MAC_RXIPV6_NO_PAYLOAD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Payload Packets This field indicates the number of IPv6 datagram packets received that did not have a TCP, UDP, or ICMP payload.
    uint32_t RXIPV6NOPAYPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_NO_PAYLOAD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_NO_PAYLOAD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_NO_PAYLOAD_PACKETS*>(0x4043C82C); }
};

// IPv6 Datagrams Received with Good UDP
//
union MAC_RXUDP_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxUDP Good Packets This field indicates the number of good IP datagrams received with a good UDP payload.
    uint32_t RXUDPGDPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXUDP_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXUDP_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXUDP_GOOD_PACKETS*>(0x4043C830); }
};

// IPv6 Datagrams Received with UDP Checksum Error
//
union MAC_RXUDP_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxUDP Error Packets This field indicates the number of good IP datagrams received whose UDP payload has a checksum error.
    uint32_t RXUDPERRPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXUDP_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXUDP_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXUDP_ERROR_PACKETS*>(0x4043C834); }
};

// IPv6 Datagrams Received with Good TCP Payload
//
union MAC_RXTCP_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxTCP Good Packets This field indicates the number of good IP datagrams received with a good TCP payload.
    uint32_t RXTCPGDPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXTCP_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXTCP_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXTCP_GOOD_PACKETS*>(0x4043C838); }
};

// IPv6 Datagrams Received with TCP Checksum Error
//
union MAC_RXTCP_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxTCP Error Packets This field indicates the number of good IP datagrams received whose TCP payload has a checksum error.
    uint32_t RXTCPERRPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXTCP_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXTCP_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXTCP_ERROR_PACKETS*>(0x4043C83C); }
};

// IPv6 Datagrams Received with Good ICMP Payload
//
union MAC_RXICMP_GOOD_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxICMP Good Packets This field indicates the number of good IP datagrams received with a good ICMP payload.
    uint32_t RXICMPGDPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXICMP_GOOD_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXICMP_GOOD_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXICMP_GOOD_PACKETS*>(0x4043C840); }
};

// IPv6 Datagrams Received with ICMP Checksum Error
//
union MAC_RXICMP_ERROR_PACKETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxICMP Error Packets This field indicates the number of good IP datagrams received whose ICMP payload has a checksum error.
    uint32_t RXICMPERRPKT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXICMP_ERROR_PACKETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXICMP_ERROR_PACKETS &Instance() { return *reinterpret_cast<volatile MAC_RXICMP_ERROR_PACKETS*>(0x4043C844); }
};

// Good Bytes Received in IPv4 Datagrams
//
union MAC_RXIPV4_GOOD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Good Octets This field indicates the number of bytes received in good IPv4 datagrams encapsulating TCP, UDP, or ICMP data.
    uint32_t RXIPV4GDOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_GOOD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_GOOD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_GOOD_OCTETS*>(0x4043C850); }
};

// Bytes Received in IPv4 Datagrams with Header Errors
//
union MAC_RXIPV4_HEADER_ERROR_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Header Error Octets This field indicates the number of bytes received in IPv4 datagrams with header errors (checksum, length, version mismatch).
    uint32_t RXIPV4HDRERROCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_HEADER_ERROR_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_HEADER_ERROR_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_HEADER_ERROR_OCTETS*>(0x4043C854); }
};

// Bytes Received in IPv4 Datagrams with No Payload
//
union MAC_RXIPV4_NO_PAYLOAD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Payload Octets This field indicates the number of bytes received in IPv4 datagrams that did not have a TCP, UDP, or ICMP payload.
    uint32_t RXIPV4NOPAYOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_NO_PAYLOAD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_NO_PAYLOAD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_NO_PAYLOAD_OCTETS*>(0x4043C858); }
};

// Bytes Received in Fragmented IPv4 Datagrams
//
union MAC_RXIPV4_FRAGMENTED_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 Fragmented Octets This field indicates the number of bytes received in fragmented IPv4 datagrams.
    uint32_t RXIPV4FRAGOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_FRAGMENTED_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_FRAGMENTED_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_FRAGMENTED_OCTETS*>(0x4043C85C); }
};

// Bytes Received with UDP Checksum Disabled
//
union MAC_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv4 UDP Checksum Disable Octets This field indicates the number of bytes received in a UDP segment that had the UDP checksum disabled.
    uint32_t RXIPV4UDSBLOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV4_UDP_CHECKSUM_DISABLE_OCTETS*>(0x4043C860); }
};

// Bytes Received in Good IPv6 Datagrams
//
union MAC_RXIPV6_GOOD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Good Octets This field indicates the number of bytes received in good IPv6 datagrams encapsulating TCP, UDP, or ICMP data.
    uint32_t RXIPV6GDOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_GOOD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_GOOD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_GOOD_OCTETS*>(0x4043C864); }
};

// Bytes Received in IPv6 Datagrams with Data Errors
//
union MAC_RXIPV6_HEADER_ERROR_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Header Error Octets This field indicates the number of bytes received in IPv6 datagrams with header errors (length, version mismatch).
    uint32_t RXIPV6HDRERROCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_HEADER_ERROR_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_HEADER_ERROR_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_HEADER_ERROR_OCTETS*>(0x4043C868); }
};

// Bytes Received in IPv6 Datagrams with No Payload
//
union MAC_RXIPV6_NO_PAYLOAD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxIPv6 Payload Octets This field indicates the number of bytes received in IPv6 datagrams that did not have a TCP, UDP, or ICMP payload.
    uint32_t RXIPV6NOPAYOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXIPV6_NO_PAYLOAD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXIPV6_NO_PAYLOAD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXIPV6_NO_PAYLOAD_OCTETS*>(0x4043C86C); }
};

// Bytes Received in Good UDP Segment
//
union MAC_RXUDP_GOOD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxUDP Good Octets This field indicates the number of bytes received in a good UDP segment.
    uint32_t RXUDPGDOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXUDP_GOOD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXUDP_GOOD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXUDP_GOOD_OCTETS*>(0x4043C870); }
};

// Bytes Received in UDP Segment with Checksum Errors
//
union MAC_RXUDP_ERROR_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxUDP Error Octets This field indicates the number of bytes received in a UDP segment that had checksum errors.
    uint32_t RXUDPERROCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXUDP_ERROR_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXUDP_ERROR_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXUDP_ERROR_OCTETS*>(0x4043C874); }
};

// Bytes Received in Good TCP Segment
//
union MAC_RXTCP_GOOD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxTCP Good Octets This field indicates the number of bytes received in a good TCP segment.
    uint32_t RXTCPGDOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXTCP_GOOD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXTCP_GOOD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXTCP_GOOD_OCTETS*>(0x4043C878); }
};

// Bytes Received in TCP Segment with Checksum Errors
//
union MAC_RXTCP_ERROR_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxTCP Error Octets This field indicates the number of bytes received in a TCP segment that had checksum errors.
    uint32_t RXTCPERROCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXTCP_ERROR_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXTCP_ERROR_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXTCP_ERROR_OCTETS*>(0x4043C87C); }
};

// Bytes Received in Good ICMP Segment
//
union MAC_RXICMP_GOOD_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxICMP Good Octets This field indicates the number of bytes received in a good ICMP segment.
    uint32_t RXICMPGDOCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXICMP_GOOD_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXICMP_GOOD_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXICMP_GOOD_OCTETS*>(0x4043C880); }
};

// Bytes Received in ICMP Segment with Checksum Errors
//
union MAC_RXICMP_ERROR_OCTETS {
  
  // Bit field definition.
  struct {
    /// read-only - RxICMP Error Octets This field indicates the number of bytes received in a ICMP segment that had checksum errors.
    uint32_t RXICMPERROCT : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_RXICMP_ERROR_OCTETS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_RXICMP_ERROR_OCTETS &Instance() { return *reinterpret_cast<volatile MAC_RXICMP_ERROR_OCTETS*>(0x4043C884); }
};

// MMC FPE Transmit Interrupt
//
union MAC_MMC_FPE_TX_INTERRUPT {
  
  enum class eFCIS : uint32_t {
    eINACTIVE = 0, // MMC Tx FPE Fragment Counter Interrupt status not detected
    eACTIVE = 1, // MMC Tx FPE Fragment Counter Interrupt status detected
  };
  
  enum class eHRCIS : uint32_t {
    eINACTIVE = 0, // MMC Tx Hold Request Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Tx Hold Request Counter Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - MMC Tx FPE Fragment Counter Interrupt status This bit is set when the Tx_FPE_Fragment_Cntr counter reaches half of the maximum value or the maximum value.
    eFCIS FCIS : 1;
    /// read-only - MMC Tx Hold Request Counter Interrupt Status This bit is set when the Tx_Hold_Req_Cntr counter reaches half of the maximum value or the maximum value.
    eHRCIS HRCIS : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_FPE_TX_INTERRUPT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_FPE_TX_INTERRUPT &Instance() { return *reinterpret_cast<volatile MAC_MMC_FPE_TX_INTERRUPT*>(0x4043C8A0); }
};

// MMC FPE Transmit Mask Interrupt
//
union MAC_MMC_FPE_TX_INTERRUPT_MASK {
  
  enum class eFCIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Fragment Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Fragment Counter Interrupt Mask is enabled
  };
  
  enum class eHRCIM : uint32_t {
    eDISABLE = 0, // MMC Transmit Hold Request Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Transmit Hold Request Counter Interrupt Mask is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MMC Transmit Fragment Counter Interrupt Mask Setting this bit masks the interrupt when the Tx_FPE_Fragment_Cntr counter reaches half of the maximum value or the maximum value.
    eFCIM FCIM : 1;
    /// read-write - MMC Transmit Hold Request Counter Interrupt Mask Setting this bit masks the interrupt when the Tx_Hold_Req_Cntr counter reaches half of the maximum value or the maximum value.
    eHRCIM HRCIM : 1;
    uint32_t _reserved_0 : 30;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_FPE_TX_INTERRUPT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_FPE_TX_INTERRUPT_MASK &Instance() { return *reinterpret_cast<volatile MAC_MMC_FPE_TX_INTERRUPT_MASK*>(0x4043C8A4); }
};

// MMC FPE Transmitted Fragment Counter
//
union MAC_MMC_TX_FPE_FRAGMENT_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Tx FPE Fragment counter This field indicates the number of additional mPackets that has been transmitted due to preemption Exists when any one of the RX/TX MMC counters are enabled during FPE Enabled configuration.
    uint32_t TXFFC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_TX_FPE_FRAGMENT_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_TX_FPE_FRAGMENT_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_TX_FPE_FRAGMENT_CNTR*>(0x4043C8A8); }
};

// MMC FPE Transmitted Hold Request Counter
//
union MAC_MMC_TX_HOLD_REQ_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Tx Hold Request Counter This field indicates count of number of a hold request is given to MAC.
    uint32_t TXHRC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_TX_HOLD_REQ_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_TX_HOLD_REQ_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_TX_HOLD_REQ_CNTR*>(0x4043C8AC); }
};

// MMC FPE Receive Interrupt
//
union MAC_MMC_FPE_RX_INTERRUPT {
  
  enum class ePAECIS : uint32_t {
    eINACTIVE = 0, // MMC Rx Packet Assembly Error Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Rx Packet Assembly Error Counter Interrupt Status detected
  };
  
  enum class ePSECIS : uint32_t {
    eINACTIVE = 0, // MMC Rx Packet SMD Error Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Rx Packet SMD Error Counter Interrupt Status detected
  };
  
  enum class ePAOCIS : uint32_t {
    eINACTIVE = 0, // MMC Rx Packet Assembly OK Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Rx Packet Assembly OK Counter Interrupt Status detected
  };
  
  enum class eFCIS : uint32_t {
    eINACTIVE = 0, // MMC Rx FPE Fragment Counter Interrupt Status not detected
    eACTIVE = 1, // MMC Rx FPE Fragment Counter Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - MMC Rx Packet Assembly Error Counter Interrupt Status This bit is set when the Rx_Packet_Assemble_Err_Cntr counter reaches half of the maximum value or the maximum value.
    ePAECIS PAECIS : 1;
    /// read-only - MMC Rx Packet SMD Error Counter Interrupt Status This bit is set when the Rx_Packet_SMD_Err_Cntr counter reaches half of the maximum value or the maximum value.
    ePSECIS PSECIS : 1;
    /// read-only - MMC Rx Packet Assembly OK Counter Interrupt Status This bit is set when the Rx_Packet_Assemble_Ok_Cntr counter reaches half of the maximum value or the maximum value.
    ePAOCIS PAOCIS : 1;
    /// read-only - MMC Rx FPE Fragment Counter Interrupt Status This bit is set when the Rx_FPE_Fragment_Cntr counter reaches half of the maximum value or the maximum value.
    eFCIS FCIS : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_FPE_RX_INTERRUPT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_FPE_RX_INTERRUPT &Instance() { return *reinterpret_cast<volatile MAC_MMC_FPE_RX_INTERRUPT*>(0x4043C8C0); }
};

// MMC FPE Receive Interrupt Mask
//
union MAC_MMC_FPE_RX_INTERRUPT_MASK {
  
  enum class ePAECIM : uint32_t {
    eDISABLE = 0, // MMC Rx Packet Assembly Error Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Rx Packet Assembly Error Counter Interrupt Mask is enabled
  };
  
  enum class ePSECIM : uint32_t {
    eDISABLE = 0, // MMC Rx Packet SMD Error Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Rx Packet SMD Error Counter Interrupt Mask is enabled
  };
  
  enum class ePAOCIM : uint32_t {
    eDISABLE = 0, // MMC Rx Packet Assembly OK Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Rx Packet Assembly OK Counter Interrupt Mask is enabled
  };
  
  enum class eFCIM : uint32_t {
    eDISABLE = 0, // MMC Rx FPE Fragment Counter Interrupt Mask is disabled
    eENABLE = 1, // MMC Rx FPE Fragment Counter Interrupt Mask is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - MMC Rx Packet Assembly Error Counter Interrupt Mask Setting this bit masks the interrupt when the R Rx_Packet_Assemble_Err_Cntr counter reaches half of the maximum value or the maximum value.
    ePAECIM PAECIM : 1;
    /// read-write - MMC Rx Packet SMD Error Counter Interrupt Mask Setting this bit masks the interrupt when the R Rx_Packet_SMD_Err_Cntr counter reaches half of the maximum value or the maximum value.
    ePSECIM PSECIM : 1;
    /// read-write - MMC Rx Packet Assembly OK Counter Interrupt Mask Setting this bit masks the interrupt when the Rx_Packet_Assemble_Ok_Cntr counter reaches half of the maximum value or the maximum value.
    ePAOCIM PAOCIM : 1;
    /// read-write - MMC Rx FPE Fragment Counter Interrupt Mask Setting this bit masks the interrupt when the Tx_FPE_Fragment_Cntr counter reaches half of the maximum value or the maximum value.
    eFCIM FCIM : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_FPE_RX_INTERRUPT_MASK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_FPE_RX_INTERRUPT_MASK &Instance() { return *reinterpret_cast<volatile MAC_MMC_FPE_RX_INTERRUPT_MASK*>(0x4043C8C4); }
};

// MMC Receive Packet Reassembly Error Counter
//
union MAC_MMC_RX_PACKET_ASSEMBLY_ERR_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Packet Assembly Error Counter This field indicates the number of MAC frames with reassembly errors on the Receiver, due to mismatch in the Fragment Count value.
    uint32_t PAEC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_PACKET_ASSEMBLY_ERR_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_PACKET_ASSEMBLY_ERR_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_PACKET_ASSEMBLY_ERR_CNTR*>(0x4043C8C8); }
};

// MMC Receive Packet SMD Error Counter
//
union MAC_MMC_RX_PACKET_SMD_ERR_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Packet SMD Error Counter This field indicates the number of MAC frames rejected due to unknown SMD value and MAC frame fragments rejected due to arriving with an SMD-C when there was no preceding preempted frame.
    uint32_t PSEC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_PACKET_SMD_ERR_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_PACKET_SMD_ERR_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_PACKET_SMD_ERR_CNTR*>(0x4043C8CC); }
};

// MMC Receive Packet Successful Reassembly Counter
//
union MAC_MMC_RX_PACKET_ASSEMBLY_OK_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx Packet Assembly OK Counter This field indicates the number of MAC frames that were successfully reassembled and delivered to MAC.
    uint32_t PAOC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_PACKET_ASSEMBLY_OK_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_PACKET_ASSEMBLY_OK_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_PACKET_ASSEMBLY_OK_CNTR*>(0x4043C8D0); }
};

// MMC FPE Received Fragment Counter
//
union MAC_MMC_RX_FPE_FRAGMENT_CNTR {
  
  // Bit field definition.
  struct {
    /// read-only - Rx FPE Fragment Counter This field indicates the number of additional mPackets received due to preemption Exists when at least one of the RX/TX MMC counters are enabled during FPE Enabled configuration.
    uint32_t FFC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_MMC_RX_FPE_FRAGMENT_CNTR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_MMC_RX_FPE_FRAGMENT_CNTR &Instance() { return *reinterpret_cast<volatile MAC_MMC_RX_FPE_FRAGMENT_CNTR*>(0x4043C8D4); }
};

// Layer 3 and Layer 4 Control of Filter 0
//
union MAC_L3_L4_CONTROL0 {
  
  enum class eL3PEN0 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM0 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM0 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM0 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM0 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN0 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM0 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM0 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM0 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM0 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN0 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN0 L3PEN0 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM0 L3SAM0 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM0 L3SAIM0 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM0 L3DAM0 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM0 L3DAIM0 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM0 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM0 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN0 L4PEN0 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM0 L4SPM0 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM0 L4SPIM0 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM0 L4DPM0 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM0 L4DPIM0 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN0 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN0 DMCHEN0 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL0 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL0*>(0x4043C900); }
};

// Layer 4 Address 0
//
union MAC_LAYER4_ADDRESS0 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP0 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS0 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS0*>(0x4043C904); }
};

// Layer 3 Address 0 Register 0
//
union MAC_LAYER3_ADDR0_REG0 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A00 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG0 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG0*>(0x4043C910); }
};

// Layer 3 Address 1 Register 0
//
union MAC_LAYER3_ADDR1_REG0 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A10 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG0 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG0*>(0x4043C914); }
};

// Layer 3 Address 2 Register 0
//
union MAC_LAYER3_ADDR2_REG0 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A20 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG0 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG0*>(0x4043C918); }
};

// Layer 3 Address 3 Register 0
//
union MAC_LAYER3_ADDR3_REG0 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A30 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG0 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG0*>(0x4043C91C); }
};

// Layer 3 and Layer 4 Control of Filter 1
//
union MAC_L3_L4_CONTROL1 {
  
  enum class eL3PEN1 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM1 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM1 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM1 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM1 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN1 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM1 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM1 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM1 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM1 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN1 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN1 L3PEN1 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM1 L3SAM1 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM1 L3SAIM1 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM1 L3DAM1 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM1 L3DAIM1 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM1 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM1 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN1 L4PEN1 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM1 L4SPM1 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM1 L4SPIM1 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM1 L4DPM1 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM1 L4DPIM1 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN1 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN1 DMCHEN1 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL1 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL1*>(0x4043C930); }
};

// Layer 4 Address 0
//
union MAC_LAYER4_ADDRESS1 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP1 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS1 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS1*>(0x4043C934); }
};

// Layer 3 Address 0 Register 1
//
union MAC_LAYER3_ADDR0_REG1 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A01 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG1 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG1*>(0x4043C940); }
};

// Layer 3 Address 1 Register 1
//
union MAC_LAYER3_ADDR1_REG1 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A11 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG1 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG1*>(0x4043C944); }
};

// Layer 3 Address 2 Register 1
//
union MAC_LAYER3_ADDR2_REG1 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A21 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG1 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG1*>(0x4043C948); }
};

// Layer 3 Address 3 Register 1
//
union MAC_LAYER3_ADDR3_REG1 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A31 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG1 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG1*>(0x4043C94C); }
};

// Layer 3 and Layer 4 Control of Filter 2
//
union MAC_L3_L4_CONTROL2 {
  
  enum class eL3PEN2 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM2 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM2 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM2 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM2 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN2 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM2 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM2 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM2 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM2 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN2 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN2 L3PEN2 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM2 L3SAM2 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM2 L3SAIM2 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM2 L3DAM2 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM2 L3DAIM2 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM2 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM2 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN2 L4PEN2 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM2 L4SPM2 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM2 L4SPIM2 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM2 L4DPM2 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM2 L4DPIM2 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN2 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN2 DMCHEN2 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL2 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL2*>(0x4043C960); }
};

// Layer 4 Address 2
//
union MAC_LAYER4_ADDRESS2 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP2 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS2 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS2*>(0x4043C964); }
};

// Layer 3 Address 0 Register 2
//
union MAC_LAYER3_ADDR0_REG2 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A02 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG2 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG2*>(0x4043C970); }
};

// Layer 3 Address 0 Register 2
//
union MAC_LAYER3_ADDR1_REG2 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A12 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG2 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG2*>(0x4043C974); }
};

// Layer 3 Address 2 Register 2
//
union MAC_LAYER3_ADDR2_REG2 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A22 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG2 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG2*>(0x4043C978); }
};

// Layer 3 Address 3 Register 2
//
union MAC_LAYER3_ADDR3_REG2 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A32 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG2 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG2*>(0x4043C97C); }
};

// Layer 3 and Layer 4 Control of Filter 3
//
union MAC_L3_L4_CONTROL3 {
  
  enum class eL3PEN3 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM3 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM3 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM3 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM3 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN3 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM3 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM3 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM3 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM3 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN3 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN3 L3PEN3 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM3 L3SAM3 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM3 L3SAIM3 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM3 L3DAM3 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM3 L3DAIM3 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM3 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM3 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN3 L4PEN3 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM3 L4SPM3 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM3 L4SPIM3 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM3 L4DPM3 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM3 L4DPIM3 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN3 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN3 DMCHEN3 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL3 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL3*>(0x4043C990); }
};

// Layer 4 Address 3
//
union MAC_LAYER4_ADDRESS3 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP3 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP3 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS3 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS3*>(0x4043C994); }
};

// Layer 3 Address 0 Register 3
//
union MAC_LAYER3_ADDR0_REG3 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A03 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG3 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG3*>(0x4043C9A0); }
};

// Layer 3 Address 1 Register 3
//
union MAC_LAYER3_ADDR1_REG3 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A13 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG3 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG3*>(0x4043C9A4); }
};

// Layer 3 Address 2 Register 3
//
union MAC_LAYER3_ADDR2_REG3 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A23 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG3 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG3*>(0x4043C9A8); }
};

// Layer 3 Address 3 Register 3
//
union MAC_LAYER3_ADDR3_REG3 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A33 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG3 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG3*>(0x4043C9AC); }
};

// Layer 3 and Layer 4 Control of Filter 4
//
union MAC_L3_L4_CONTROL4 {
  
  enum class eL3PEN4 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM4 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM4 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM4 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM4 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN4 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM4 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM4 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM4 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM4 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN4 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN4 L3PEN4 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM4 L3SAM4 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM4 L3SAIM4 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM4 L3DAM4 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM4 L3DAIM4 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM4 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM4 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN4 L4PEN4 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM4 L4SPM4 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM4 L4SPIM4 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM4 L4DPM4 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM4 L4DPIM4 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN4 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN4 DMCHEN4 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL4 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL4*>(0x4043C9C0); }
};

// Layer 4 Address 4
//
union MAC_LAYER4_ADDRESS4 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP4 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP4 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS4 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS4*>(0x4043C9C4); }
};

// Layer 3 Address 0 Register 4
//
union MAC_LAYER3_ADDR0_REG4 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A04 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG4 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG4*>(0x4043C9D0); }
};

// Layer 3 Address 1 Register 4
//
union MAC_LAYER3_ADDR1_REG4 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A14 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG4 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG4*>(0x4043C9D4); }
};

// Layer 3 Address 2 Register 4
//
union MAC_LAYER3_ADDR2_REG4 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A24 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG4 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG4*>(0x4043C9D8); }
};

// Layer 3 Address 3 Register 4
//
union MAC_LAYER3_ADDR3_REG4 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A34 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG4 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG4*>(0x4043C9DC); }
};

// Layer 3 and Layer 4 Control of Filter 5
//
union MAC_L3_L4_CONTROL5 {
  
  enum class eL3PEN5 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM5 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM5 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM5 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM5 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN5 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM5 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM5 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM5 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM5 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN5 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN5 L3PEN5 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM5 L3SAM5 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM5 L3SAIM5 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM5 L3DAM5 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM5 L3DAIM5 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM5 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM5 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN5 L4PEN5 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM5 L4SPM5 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM5 L4SPIM5 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM5 L4DPM5 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM5 L4DPIM5 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN5 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN5 DMCHEN5 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL5 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL5*>(0x4043C9F0); }
};

// Layer 4 Address 5
//
union MAC_LAYER4_ADDRESS5 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP5 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP5 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS5 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS5*>(0x4043C9F4); }
};

// Layer 3 Address 0 Register 5
//
union MAC_LAYER3_ADDR0_REG5 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A05 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG5 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG5*>(0x4043CA00); }
};

// Layer 3 Address 1 Register 5
//
union MAC_LAYER3_ADDR1_REG5 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A15 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG5 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG5*>(0x4043CA04); }
};

// Layer 3 Address 2 Register 5
//
union MAC_LAYER3_ADDR2_REG5 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A25 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG5 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG5*>(0x4043CA08); }
};

// Layer 3 Address 3 Register 5
//
union MAC_LAYER3_ADDR3_REG5 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A35 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG5 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG5*>(0x4043CA0C); }
};

// Layer 3 and Layer 4 Control of Filter 6
//
union MAC_L3_L4_CONTROL6 {
  
  enum class eL3PEN6 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM6 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM6 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM6 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM6 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN6 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM6 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM6 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM6 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM6 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN6 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN6 L3PEN6 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM6 L3SAM6 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM6 L3SAIM6 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM6 L3DAM6 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM6 L3DAIM6 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM6 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM6 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN6 L4PEN6 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM6 L4SPM6 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM6 L4SPIM6 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM6 L4DPM6 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM6 L4DPIM6 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN6 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN6 DMCHEN6 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL6 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL6*>(0x4043CA20); }
};

// Layer 4 Address 6
//
union MAC_LAYER4_ADDRESS6 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP6 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP6 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS6 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS6*>(0x4043CA24); }
};

// Layer 3 Address 0 Register 6
//
union MAC_LAYER3_ADDR0_REG6 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A06 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG6 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG6*>(0x4043CA30); }
};

// Layer 3 Address 1 Register 6
//
union MAC_LAYER3_ADDR1_REG6 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A16 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG6 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG6*>(0x4043CA34); }
};

// Layer 3 Address 2 Register 6
//
union MAC_LAYER3_ADDR2_REG6 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A26 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG6 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG6*>(0x4043CA38); }
};

// Layer 3 Address 3 Register 6
//
union MAC_LAYER3_ADDR3_REG6 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A36 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG6 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG6*>(0x4043CA3C); }
};

// Layer 3 and Layer 4 Control of Filter 0
//
union MAC_L3_L4_CONTROL7 {
  
  enum class eL3PEN7 : uint32_t {
    eDISABLE = 0, // Layer 3 Protocol is disabled
    eENABLE = 1, // Layer 3 Protocol is enabled
  };
  
  enum class eL3SAM7 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Match is disabled
    eENABLE = 1, // Layer 3 IP SA Match is enabled
  };
  
  enum class eL3SAIM7 : uint32_t {
    eDISABLE = 0, // Layer 3 IP SA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP SA Inverse Match is enabled
  };
  
  enum class eL3DAM7 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Match is disabled
    eENABLE = 1, // Layer 3 IP DA Match is enabled
  };
  
  enum class eL3DAIM7 : uint32_t {
    eDISABLE = 0, // Layer 3 IP DA Inverse Match is disabled
    eENABLE = 1, // Layer 3 IP DA Inverse Match is enabled
  };
  
  enum class eL4PEN7 : uint32_t {
    eDISABLE = 0, // Layer 4 Protocol is disabled
    eENABLE = 1, // Layer 4 Protocol is enabled
  };
  
  enum class eL4SPM7 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Match is disabled
    eENABLE = 1, // Layer 4 Source Port Match is enabled
  };
  
  enum class eL4SPIM7 : uint32_t {
    eDISABLE = 0, // Layer 4 Source Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Source Port Inverse Match is enabled
  };
  
  enum class eL4DPM7 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Match is enabled
  };
  
  enum class eL4DPIM7 : uint32_t {
    eDISABLE = 0, // Layer 4 Destination Port Inverse Match is disabled
    eENABLE = 1, // Layer 4 Destination Port Inverse Match is enabled
  };
  
  enum class eDMCHEN7 : uint32_t {
    eDISABLE = 0, // DMA Channel Select is disabled
    eENABLE = 1, // DMA Channel Select is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets.
    eL3PEN7 L3PEN7 : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching.
    eL3SAM7 L3SAM7 : 1;
    /// read-write - Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching.
    eL3SAIM7 L3SAIM7 : 1;
    /// read-write - Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching.
    eL3DAM7 L3DAM7 : 1;
    /// read-write - Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching.
    eL3DAIM7 L3DAIM7 : 1;
    /// read-write - Layer 3 IP SA Higher Bits Match IPv4 Packets: This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets.
    uint32_t L3HSBM7 : 5;
    /// read-write - Layer 3 IP DA Higher Bits Match IPv4 Packets: This field contains the number of higher bits of IP Destination Address that are matched in the IPv4 packets.
    uint32_t L3HDBM7 : 5;
    /// read-write - Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching.
    eL4PEN7 L4PEN7 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching.
    eL4SPM7 L4SPM7 : 1;
    /// read-write - Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching.
    eL4SPIM7 L4SPIM7 : 1;
    /// read-write - Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching.
    eL4DPM7 L4DPM7 : 1;
    /// read-write - Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching.
    eL4DPIM7 L4DPIM7 : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - DMA Channel Number When DMCHEN is set high, this field selects the DMA Channel number to which the packet passed by this filter is routed.
    uint32_t DMCHN7 : 3;
    uint32_t _reserved_3 : 1;
    /// read-write - DMA Channel Select Enable When set, this bit enables the selection of the DMA channel number for the packet that is passed by this L3_L4 filter.
    eDMCHEN7 DMCHEN7 : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_L3_L4_CONTROL7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_L3_L4_CONTROL7 &Instance() { return *reinterpret_cast<volatile MAC_L3_L4_CONTROL7*>(0x4043CA50); }
};

// Layer 4 Address 7
//
union MAC_LAYER4_ADDRESS7 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4SPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4SP7 : 16;
    /// read-write - Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets.
    uint32_t L4DP7 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER4_ADDRESS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER4_ADDRESS7 &Instance() { return *reinterpret_cast<volatile MAC_LAYER4_ADDRESS7*>(0x4043CA54); }
};

// Layer 3 Address 0 Register 7
//
union MAC_LAYER3_ADDR0_REG7 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A07 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR0_REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR0_REG7 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR0_REG7*>(0x4043CA60); }
};

// Layer 3 Address 1 Register 7
//
union MAC_LAYER3_ADDR1_REG7 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A17 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR1_REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR1_REG7 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR1_REG7*>(0x4043CA64); }
};

// Layer 3 Address 2 Register 7
//
union MAC_LAYER3_ADDR2_REG7 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A27 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR2_REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR2_REG7 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR2_REG7*>(0x4043CA68); }
};

// Layer 3 Address 3 Register 7
//
union MAC_LAYER3_ADDR3_REG7 {
  
  // Bit field definition.
  struct {
    /// read-write - Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the MAC_L3_L4_CONTROL0 register, this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets.
    uint32_t L3A37 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LAYER3_ADDR3_REG7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LAYER3_ADDR3_REG7 &Instance() { return *reinterpret_cast<volatile MAC_LAYER3_ADDR3_REG7*>(0x4043CA6C); }
};

// Timestamp Control
//
union MAC_TIMESTAMP_CONTROL {
  
  enum class eTSENA : uint32_t {
    eDISABLE = 0, // Timestamp is disabled
    eENABLE = 1, // Timestamp is enabled
  };
  
  enum class eTSCFUPDT : uint32_t {
    eCOARSE = 0, // Coarse method is used to update system timestamp
    eFINE = 1, // Fine method is used to update system timestamp
  };
  
  enum class eTSINIT : uint32_t {
    eDISABLE = 0, // Timestamp is not initialized
    eENABLE = 1, // Timestamp is initialized
  };
  
  enum class eTSUPDT : uint32_t {
    eDISABLE = 0, // Timestamp is not updated
    eENABLE = 1, // Timestamp is updated
  };
  
  enum class eTSADDREG : uint32_t {
    eDISABLE = 0, // Addend Register is not updated
    eENABLE = 1, // Addend Register is updated
  };
  
  enum class ePTGE : uint32_t {
    eDISABLE = 0, // Presentation Time Generation is disabled
    eENABLE = 1, // Presentation Time Generation is enabled
  };
  
  enum class eTSENALL : uint32_t {
    eDISABLE = 0, // Timestamp for All Packets disabled
    eENABLE = 1, // Timestamp for All Packets enabled
  };
  
  enum class eTSCTRLSSR : uint32_t {
    eDISABLE = 0, // Timestamp Digital or Binary Rollover Control is disabled
    eENABLE = 1, // Timestamp Digital or Binary Rollover Control is enabled
  };
  
  enum class eTSVER2ENA : uint32_t {
    eDISABLE = 0, // PTP Packet Processing for Version 2 Format is disabled
    eENABLE = 1, // PTP Packet Processing for Version 2 Format is enabled
  };
  
  enum class eTSIPENA : uint32_t {
    eDISABLE = 0, // Processing of PTP over Ethernet Packets is disabled
    eENABLE = 1, // Processing of PTP over Ethernet Packets is enabled
  };
  
  enum class eTSIPV6ENA : uint32_t {
    eDISABLE = 0, // Processing of PTP Packets Sent over IPv6-UDP is disabled
    eENABLE = 1, // Processing of PTP Packets Sent over IPv6-UDP is enabled
  };
  
  enum class eTSIPV4ENA : uint32_t {
    eDISABLE = 0, // Processing of PTP Packets Sent over IPv4-UDP is disabled
    eENABLE = 1, // Processing of PTP Packets Sent over IPv4-UDP is enabled
  };
  
  enum class eTSEVNTENA : uint32_t {
    eDISABLE = 0, // Timestamp Snapshot for Event Messages is disabled
    eENABLE = 1, // Timestamp Snapshot for Event Messages is enabled
  };
  
  enum class eTSMSTRENA : uint32_t {
    eDISABLE = 0, // Snapshot for Messages Relevant to Master is disabled
    eENABLE = 1, // Snapshot for Messages Relevant to Master is enabled
  };
  
  enum class eTSENMACADDR : uint32_t {
    eDISABLE = 0, // MAC Address for PTP Packet Filtering is disabled
    eENABLE = 1, // MAC Address for PTP Packet Filtering is enabled
  };
  
  enum class eCSC : uint32_t {
    eDISABLE = 0, // checksum correction during OST for PTP over UDP/IPv4 packets is disabled
    eENABLE = 1, // checksum correction during OST for PTP over UDP/IPv4 packets is enabled
  };
  
  enum class eESTI : uint32_t {
    eDISABLE = 0, // External System Time Input is disabled
    eENABLE = 1, // External System Time Input is enabled
  };
  
  enum class eTXTSSTSM : uint32_t {
    eDISABLE = 0, // Transmit Timestamp Status Mode is disabled
    eENABLE = 1, // Transmit Timestamp Status Mode is enabled
  };
  
  enum class eAV8021ASMEN : uint32_t {
    eDISABLE = 0, // AV 802.1AS Mode is disabled
    eENABLE = 1, // AV 802.1AS Mode is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Timestamp When this bit is set, the timestamp is added for Transmit and Receive packets.
    eTSENA TSENA : 1;
    /// read-write - Fine or Coarse Timestamp Update When this bit is set, the Fine method is used to update system timestamp.
    eTSCFUPDT TSCFUPDT : 1;
    /// read-write - Initialize Timestamp When this bit is set, the system time is initialized (overwritten) with the value specified in the MAC_System_Time_Seconds_Update and MAC_System_Time_Nanoseconds_Update registers.
    eTSINIT TSINIT : 1;
    /// read-write - Update Timestamp When this bit is set, the system time is updated (added or subtracted) with the value specified in MAC_System_Time_Seconds_Update and MAC_System_Time_Nanoseconds_Update registers.
    eTSUPDT TSUPDT : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Update Addend Register When this bit is set, the content of the Timestamp Addend register is updated in the PTP block for fine correction.
    eTSADDREG TSADDREG : 1;
    /// read-write - Presentation Time Generation Enable When this bit is set the Presentation Time generation will be enabled.
    ePTGE PTGE : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Enable Timestamp for All Packets When this bit is set, the timestamp snapshot is enabled for all packets received by the MAC.
    eTSENALL TSENALL : 1;
    /// read-write - Timestamp Digital or Binary Rollover Control When this bit is set, the Timestamp Low register rolls over after 0x3B9A_C9FF value (that is, 1 nanosecond accuracy) and increments the timestamp (High) seconds.
    eTSCTRLSSR TSCTRLSSR : 1;
    /// read-write - Enable PTP Packet Processing for Version 2 Format When this bit is set, the IEEE 1588 version 2 format is used to process the PTP packets.
    eTSVER2ENA TSVER2ENA : 1;
    /// read-write - Enable Processing of PTP over Ethernet Packets When this bit is set, the MAC receiver processes the PTP packets encapsulated directly in the Ethernet packets.
    eTSIPENA TSIPENA : 1;
    /// read-write - Enable Processing of PTP Packets Sent over IPv6-UDP When this bit is set, the MAC receiver processes the PTP packets encapsulated in IPv6-UDP packets.
    eTSIPV6ENA TSIPV6ENA : 1;
    /// read-write - Enable Processing of PTP Packets Sent over IPv4-UDP When this bit is set, the MAC receiver processes the PTP packets encapsulated in IPv4-UDP packets.
    eTSIPV4ENA TSIPV4ENA : 1;
    /// read-write - Enable Timestamp Snapshot for Event Messages When this bit is set, the timestamp snapshot is taken only for event messages (SYNC, Delay_Req, Pdelay_Req, or Pdelay_Resp).
    eTSEVNTENA TSEVNTENA : 1;
    /// read-write - Enable Snapshot for Messages Relevant to Master When this bit is set, the snapshot is taken only for the messages that are relevant to the master node.
    eTSMSTRENA TSMSTRENA : 1;
    /// read-write - Select PTP packets for Taking Snapshots These bits, along with Bits 15 and 14, decide the set of PTP packet types for which snapshot needs to be taken.
    uint32_t SNAPTYPSEL : 2;
    /// read-write - Enable MAC Address for PTP Packet Filtering When this bit is set, the DA MAC address (that matches any MAC Address register) is used to filter the PTP packets when PTP is directly sent over Ethernet.
    eTSENMACADDR TSENMACADDR : 1;
    /// read-write - Enable checksum correction during OST for PTP over UDP/IPv4 packets When this bit is set, the last two bytes of PTP message sent over UDP/IPv4 is updated to keep the UDP checksum correct, for changes made to origin timestamp and/or correction field as part of one step timestamp operation.
    eCSC CSC : 1;
    /// read-write - External System Time Input When this bit is set, the MAC uses the external 64-bit reference System Time input for the following: - To take the timestamp provided as status - To insert the timestamp in transmit PTP packets when One-step Timestamp or Timestamp Offload feature is enabled.
    eESTI ESTI : 1;
    uint32_t _reserved_2 : 3;
    /// read-write - Transmit Timestamp Status Mode When this bit is set, the MAC overwrites the earlier transmit timestamp status even if it is not read by the software.
    eTXTSSTSM TXTSSTSM : 1;
    uint32_t _reserved_3 : 3;
    /// read-write - AV 802.
    eAV8021ASMEN AV8021ASMEN : 1;
    uint32_t _reserved_4 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00002000; }
  static inline volatile MAC_TIMESTAMP_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_CONTROL*>(0x4043CB00); }
};

// Subsecond Increment
//
union MAC_SUB_SECOND_INCREMENT {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    /// read-write - Sub-nanosecond Increment Value This field contains the sub-nanosecond increment value, represented in nanoseconds multiplied by 2^8.
    uint32_t SNSINC : 8;
    /// read-write - Sub-second Increment Value The value programmed in this field is accumulated every clock cycle (of clk_ptp_i) with the contents of the sub-second register.
    uint32_t SSINC : 8;
    uint32_t _reserved_1 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SUB_SECOND_INCREMENT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SUB_SECOND_INCREMENT &Instance() { return *reinterpret_cast<volatile MAC_SUB_SECOND_INCREMENT*>(0x4043CB04); }
};

// System Time Seconds
//
union MAC_SYSTEM_TIME_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-only - Timestamp Second The value in this field indicates the current value in seconds of the System Time maintained by the MAC.
    uint32_t TSS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SYSTEM_TIME_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SYSTEM_TIME_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_SYSTEM_TIME_SECONDS*>(0x4043CB08); }
};

// System Time Nanoseconds
//
union MAC_SYSTEM_TIME_NANOSECONDS {
  
  // Bit field definition.
  struct {
    /// read-only - Timestamp Sub Seconds The value in this field has the sub-second representation of time, with an accuracy of 0.
    uint32_t TSSS : 31;
    uint32_t _reserved_0 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SYSTEM_TIME_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SYSTEM_TIME_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_SYSTEM_TIME_NANOSECONDS*>(0x4043CB0C); }
};

// System Time Seconds Update
//
union MAC_SYSTEM_TIME_SECONDS_UPDATE {
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Seconds The value in this field is the seconds part of the update.
    uint32_t TSS : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SYSTEM_TIME_SECONDS_UPDATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SYSTEM_TIME_SECONDS_UPDATE &Instance() { return *reinterpret_cast<volatile MAC_SYSTEM_TIME_SECONDS_UPDATE*>(0x4043CB10); }
};

// System Time Nanoseconds Update
//
union MAC_SYSTEM_TIME_NANOSECONDS_UPDATE {
  
  enum class eADDSUB : uint32_t {
    eADD = 0, // Add time
    eSUB = 1, // Subtract time
  };
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Sub Seconds The value in this field is the sub-seconds part of the update.
    uint32_t TSSS : 31;
    /// read-write - Add or Subtract Time When this bit is set, the time value is subtracted with the contents of the update register.
    eADDSUB ADDSUB : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SYSTEM_TIME_NANOSECONDS_UPDATE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SYSTEM_TIME_NANOSECONDS_UPDATE &Instance() { return *reinterpret_cast<volatile MAC_SYSTEM_TIME_NANOSECONDS_UPDATE*>(0x4043CB14); }
};

// Timestamp Addend
//
union MAC_TIMESTAMP_ADDEND {
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Addend Register This field indicates the 32-bit time value to be added to the Accumulator register to achieve time synchronization.
    uint32_t TSAR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_ADDEND() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_ADDEND &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_ADDEND*>(0x4043CB18); }
};

// System Time - Higher Word Seconds
//
union MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Higher Word Register This field contains the most-significant 16-bits of timestamp seconds value.
    uint32_t TSHWR : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS*>(0x4043CB1C); }
};

// Timestamp Status
//
union MAC_TIMESTAMP_STATUS {
  
  enum class eTSSOVF : uint32_t {
    eINACTIVE = 0, // Timestamp Seconds Overflow status not detected
    eACTIVE = 1, // Timestamp Seconds Overflow status detected
  };
  
  enum class eTSTARGT0 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Reached status not detected
    eACTIVE = 1, // Timestamp Target Time Reached status detected
  };
  
  enum class eAUXTSTRIG : uint32_t {
    eINACTIVE = 0, // Auxiliary Timestamp Trigger Snapshot status not detected
    eACTIVE = 1, // Auxiliary Timestamp Trigger Snapshot status detected
  };
  
  enum class eTSTRGTERR0 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Error status not detected
    eACTIVE = 1, // Timestamp Target Time Error status detected
  };
  
  enum class eTSTARGT1 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Reached for Target Time PPS1 status not detected
    eACTIVE = 1, // Timestamp Target Time Reached for Target Time PPS1 status detected
  };
  
  enum class eTSTRGTERR1 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Error status not detected
    eACTIVE = 1, // Timestamp Target Time Error status detected
  };
  
  enum class eTSTARGT2 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Reached for Target Time PPS2 status not detected
    eACTIVE = 1, // Timestamp Target Time Reached for Target Time PPS2 status detected
  };
  
  enum class eTSTRGTERR2 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Error status not detected
    eACTIVE = 1, // Timestamp Target Time Error status detected
  };
  
  enum class eTSTARGT3 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Reached for Target Time PPS3 status not detected
    eACTIVE = 1, // Timestamp Target Time Reached for Target Time PPS3 status detected
  };
  
  enum class eTSTRGTERR3 : uint32_t {
    eINACTIVE = 0, // Timestamp Target Time Error status not detected
    eACTIVE = 1, // Timestamp Target Time Error status detected
  };
  
  enum class eTXTSSIS : uint32_t {
    eINACTIVE = 0, // Tx Timestamp Status Interrupt status not detected
    eACTIVE = 1, // Tx Timestamp Status Interrupt status detected
  };
  
  enum class eATSSTM : uint32_t {
    eINACTIVE = 0, // Auxiliary Timestamp Snapshot Trigger Missed status not detected
    eACTIVE = 1, // Auxiliary Timestamp Snapshot Trigger Missed status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Timestamp Seconds Overflow When this bit is set, it indicates that the seconds value of the timestamp (when supporting version 2 format) has overflowed beyond 32'hFFFF_FFFF.
    eTSSOVF TSSOVF : 1;
    /// read-only - Timestamp Target Time Reached When set, this bit indicates that the value of system time is greater than or equal to the value specified in the MAC_PPS0_Target_Time_Seconds and MAC_PPS0_Target_Time_Nanoseconds registers.
    eTSTARGT0 TSTARGT0 : 1;
    /// read-only - Auxiliary Timestamp Trigger Snapshot This bit is set high when the auxiliary snapshot is written to the FIFO.
    eAUXTSTRIG AUXTSTRIG : 1;
    /// read-only - Timestamp Target Time Error This bit is set when the latest target time programmed in the MAC_PPS0_Target_Time_Seconds and MAC_PPS0_Target_Time_Nanoseconds registers elapses.
    eTSTRGTERR0 TSTRGTERR0 : 1;
    /// read-only - Timestamp Target Time Reached for Target Time PPS1 When set, this bit indicates that the value of system time is greater than or equal to the value specified in the MAC_PPS1_TARGET_TIME_SECONDS and MAC_PPS1_TARGET_TIME_NANOSECONDS registers.
    eTSTARGT1 TSTARGT1 : 1;
    /// read-only - Timestamp Target Time Error This bit is set when the latest target time programmed in the MAC_PPS1_TARGET_TIME_SECONDS and MAC_PPS1_TARGET_TIME_NANOSECONDS registers elapses.
    eTSTRGTERR1 TSTRGTERR1 : 1;
    /// read-only - Timestamp Target Time Reached for Target Time PPS2 When set, this bit indicates that the value of system time is greater than or equal to the value specified in the MAC_PPS2_TARGET_TIME_SECONDS and MAC_PPS2_TARGET_TIME_NANOSECONDS registers.
    eTSTARGT2 TSTARGT2 : 1;
    /// read-only - Timestamp Target Time Error This bit is set when the latest target time programmed in the MAC_PPS2_TARGET_TIME_SECONDS and MAC_PPS2_TARGET_TIME_NANOSECONDS registers elapses.
    eTSTRGTERR2 TSTRGTERR2 : 1;
    /// read-only - Timestamp Target Time Reached for Target Time PPS3 When this bit is set, it indicates that the value of system time is greater than or equal to the value specified in the MAC_PPS3_TARGET_TIME_SECONDS and MAC_PPS3_TARGET_TIME_NANOSECONDS registers.
    eTSTARGT3 TSTARGT3 : 1;
    /// read-only - Timestamp Target Time Error This bit is set when the latest target time programmed in the MAC_PPS3_TARGET_TIME_SECONDS and MAC_PPS3_TARGET_TIME_NANOSECONDS registers elapses.
    eTSTRGTERR3 TSTRGTERR3 : 1;
    uint32_t _reserved_0 : 5;
    /// read-only - Tx Timestamp Status Interrupt Status In non-EQOS_CORE configurations when drop transmit status is enabled in MTL, this bit is set when the captured transmit timestamp is updated in the MAC_TX_TIMESTAMP_STATUS_NANOSECONDS and MAC_TX_TIMESTAMP_STATUS_SECONDS registers.
    eTXTSSIS TXTSSIS : 1;
    /// read-only - Auxiliary Timestamp Snapshot Trigger Identifier These bits identify the Auxiliary trigger inputs for which the timestamp available in the Auxiliary Snapshot Register is applicable.
    uint32_t ATSSTN : 4;
    uint32_t _reserved_1 : 4;
    /// read-only - Auxiliary Timestamp Snapshot Trigger Missed This bit is set when the Auxiliary timestamp snapshot FIFO is full and external trigger was set.
    eATSSTM ATSSTM : 1;
    /// read-only - Number of Auxiliary Timestamp Snapshots This field indicates the number of Snapshots available in the FIFO.
    uint32_t ATSNS : 5;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_STATUS &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_STATUS*>(0x4043CB20); }
};

// Transmit Timestamp Status Nanoseconds
//
union MAC_TX_TIMESTAMP_STATUS_NANOSECONDS {
  
  enum class eTXTSSMIS : uint32_t {
    eINACTIVE = 0, // Transmit Timestamp Status Missed status not detected
    eACTIVE = 1, // Transmit Timestamp Status Missed status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Timestamp Status Low This field contains the 31 bits of the Nanoseconds field of the Transmit packet's captured timestamp.
    uint32_t TXTSSLO : 31;
    /// read-only - Transmit Timestamp Status Missed When this bit is set, it indicates one of the following: - The timestamp of the current packet is ignored if TXTSSTSM bit of the TIMESTAMP_CONTROL register is reset - The timestamp of the previous packet is overwritten with timestamp of the current packet if TXTSSTSM bit of the MAC_TIMESTAMP_CONTROL register is set.
    eTXTSSMIS TXTSSMIS : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_TIMESTAMP_STATUS_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_TIMESTAMP_STATUS_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_TX_TIMESTAMP_STATUS_NANOSECONDS*>(0x4043CB30); }
};

// Transmit Timestamp Status Seconds
//
union MAC_TX_TIMESTAMP_STATUS_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Timestamp Status High This field contains the lower 32 bits of the Seconds field of Transmit packet's captured timestamp.
    uint32_t TXTSSHI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TX_TIMESTAMP_STATUS_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TX_TIMESTAMP_STATUS_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_TX_TIMESTAMP_STATUS_SECONDS*>(0x4043CB34); }
};

// Auxiliary Timestamp Control
//
union MAC_AUXILIARY_CONTROL {
  
  enum class eATSFC : uint32_t {
    eDISABLE = 0, // Auxiliary Snapshot FIFO Clear is disabled
    eENABLE = 1, // Auxiliary Snapshot FIFO Clear is enabled
  };
  
  enum class eATSEN0 : uint32_t {
    eDISABLE = 0, // Auxiliary Snapshot $i is disabled
    eENABLE = 1, // Auxiliary Snapshot $i is enabled
  };
  
  enum class eATSEN1 : uint32_t {
    eDISABLE = 0, // Auxiliary Snapshot $i is disabled
    eENABLE = 1, // Auxiliary Snapshot $i is enabled
  };
  
  enum class eATSEN2 : uint32_t {
    eDISABLE = 0, // Auxiliary Snapshot $i is disabled
    eENABLE = 1, // Auxiliary Snapshot $i is enabled
  };
  
  enum class eATSEN3 : uint32_t {
    eDISABLE = 0, // Auxiliary Snapshot $i is disabled
    eENABLE = 1, // Auxiliary Snapshot $i is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Auxiliary Snapshot FIFO Clear When set, this bit resets the pointers of the Auxiliary Snapshot FIFO.
    eATSFC ATSFC : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Auxiliary Snapshot 0 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 0.
    eATSEN0 ATSEN0 : 1;
    /// read-write - Auxiliary Snapshot 1 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 1.
    eATSEN1 ATSEN1 : 1;
    /// read-write - Auxiliary Snapshot 2 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 2.
    eATSEN2 ATSEN2 : 1;
    /// read-write - Auxiliary Snapshot 3 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 3.
    eATSEN3 ATSEN3 : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_AUXILIARY_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_AUXILIARY_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_AUXILIARY_CONTROL*>(0x4043CB40); }
};

// Auxiliary Timestamp Nanoseconds
//
union MAC_AUXILIARY_TIMESTAMP_NANOSECONDS {
  
  // Bit field definition.
  struct {
    /// read-only - Auxiliary Timestamp Contains the lower 31 bits (nanoseconds field) of the auxiliary timestamp.
    uint32_t AUXTSLO : 31;
    uint32_t _reserved_0 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_AUXILIARY_TIMESTAMP_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_AUXILIARY_TIMESTAMP_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_AUXILIARY_TIMESTAMP_NANOSECONDS*>(0x4043CB48); }
};

// Auxiliary Timestamp Seconds
//
union MAC_AUXILIARY_TIMESTAMP_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-only - Auxiliary Timestamp Contains the lower 32 bits of the Seconds field of the auxiliary timestamp.
    uint32_t AUXTSHI : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_AUXILIARY_TIMESTAMP_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_AUXILIARY_TIMESTAMP_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_AUXILIARY_TIMESTAMP_SECONDS*>(0x4043CB4C); }
};

// Timestamp Ingress Asymmetry Correction
//
union MAC_TIMESTAMP_INGRESS_ASYM_CORR {
  
  // Bit field definition.
  struct {
    /// read-write - One-Step Timestamp Ingress Asymmetry Correction This field contains the ingress path asymmetry value to be added to correctionField of Pdelay_Resp PTP packet.
    uint32_t OSTIAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_INGRESS_ASYM_CORR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_INGRESS_ASYM_CORR &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_INGRESS_ASYM_CORR*>(0x4043CB50); }
};

// imestamp Egress Asymmetry Correction
//
union MAC_TIMESTAMP_EGRESS_ASYM_CORR {
  
  // Bit field definition.
  struct {
    /// read-write - One-Step Timestamp Egress Asymmetry Correction This field contains the egress path asymmetry value to be subtracted from correctionField of Pdelay_Resp PTP packet.
    uint32_t OSTEAC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_EGRESS_ASYM_CORR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_EGRESS_ASYM_CORR &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_EGRESS_ASYM_CORR*>(0x4043CB54); }
};

// Timestamp Ingress Correction Nanosecond
//
union MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND {
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Ingress Correction This field contains the ingress path correction value as defined by the Ingress Correction expression.
    uint32_t TSIC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND*>(0x4043CB58); }
};

// Timestamp Egress Correction Nanosecond
//
union MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND {
  
  // Bit field definition.
  struct {
    /// read-write - Timestamp Egress Correction This field contains the nanoseconds part of the egress path correction value as defined by the Egress Correction expression.
    uint32_t TSEC : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND*>(0x4043CB5C); }
};

// Timestamp Ingress Correction Subnanosecond
//
union MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    /// read-write - Timestamp Ingress Correction, sub-nanoseconds This field contains the sub-nanoseconds part of the ingress path correction value as defined by the "Ingress Correction" expression.
    uint32_t TSICSNS : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC*>(0x4043CB60); }
};

// Timestamp Egress Correction Subnanosecond
//
union MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    /// read-write - Timestamp Egress Correction, sub-nanoseconds This field contains the sub-nanoseconds part of the egress path correction value as defined by the "Egress Correction" expression.
    uint32_t TSECSNS : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC*>(0x4043CB64); }
};

// Timestamp Ingress Latency
//
union MAC_TIMESTAMP_INGRESS_LATENCY {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    /// read-only - Ingress Timestamp Latency, in nanoseconds This register holds the average latency in nanoseconds between the input ports (phy_rxd_i) of MAC and the actual point (GMII/MII) where the ingress timestamp is taken.
    uint32_t ITLSNS : 8;
    /// read-only - Ingress Timestamp Latency, in sub-nanoseconds This register holds the average latency in sub-nanoseconds between the input ports (phy_rxd_i) of MAC and the actual point (GMII/MII) where the ingress timestamp is taken.
    uint32_t ITLNS : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_INGRESS_LATENCY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_INGRESS_LATENCY &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_INGRESS_LATENCY*>(0x4043CB68); }
};

// Timestamp Egress Latency
//
union MAC_TIMESTAMP_EGRESS_LATENCY {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 8;
    /// read-only - Egress Timestamp Latency, in sub-nanoseconds This register holds the average latency in sub-nanoseconds between the actual point (GMII/MII) where the egress timestamp is taken and the output ports (phy_txd_o) of the MAC.
    uint32_t ETLSNS : 8;
    /// read-only - Egress Timestamp Latency, in nanoseconds This register holds the average latency in nanoseconds between the actual point (GMII/MII) where the egress timestamp is taken and the output ports (phy_txd_o) of the MAC.
    uint32_t ETLNS : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_TIMESTAMP_EGRESS_LATENCY() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_TIMESTAMP_EGRESS_LATENCY &Instance() { return *reinterpret_cast<volatile MAC_TIMESTAMP_EGRESS_LATENCY*>(0x4043CB6C); }
};

// PPS Control
//
union MAC_PPS_CONTROL {
  
  enum class ePPSEN0 : uint32_t {
    eDISABLE = 0, // Flexible PPS Output Mode is disabled
    eENABLE = 1, // Flexible PPS Output Mode is enabled
  };
  
  enum class eTRGTMODSEL0 : uint32_t {
    eONLY_INT = 0, // Target Time registers are programmed only for generating the interrupt event. The Flexible PPS function must not be enabled in this mode, otherwise spurious transitions may be observed on the corresponding ptp_pps_o output port
    eINT_ST = 2, // Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS0 output signal generation
    eONLY_ST = 3, // Target Time registers are programmed only for starting or stopping the PPS0 output signal generation. No interrupt is asserted
  };
  
  enum class eMCGREN0 : uint32_t {
    ePPS = 0, // 0th PPS instance is enabled to operate in PPS mode
    eMCGR = 1, // 0th PPS instance is enabled to operate in MCGR mode
  };
  
  enum class eTRGTMODSEL1 : uint32_t {
    eONLY_INT = 0, // Target Time registers are programmed only for generating the interrupt event. The Flexible PPS function must not be enabled in this mode, otherwise spurious transitions may be observed on the corresponding ptp_pps_o output port
    eINT_ST = 2, // Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS0 output signal generation
    eONLY_ST = 3, // Target Time registers are programmed only for starting or stopping the PPS0 output signal generation. No interrupt is asserted
  };
  
  enum class eMCGREN1 : uint32_t {
    eDISABLE = 0, // 1st PPS instance is disabled to operate in PPS or MCGR mode
    eENABLE = 1, // 1st PPS instance is enabled to operate in PPS or MCGR mode
  };
  
  enum class eTRGTMODSEL2 : uint32_t {
    eONLY_INT = 0, // Target Time registers are programmed only for generating the interrupt event. The Flexible PPS function must not be enabled in this mode, otherwise spurious transitions may be observed on the corresponding ptp_pps_o output port
    eINT_ST = 2, // Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS0 output signal generation
    eONLY_ST = 3, // Target Time registers are programmed only for starting or stopping the PPS0 output signal generation. No interrupt is asserted
  };
  
  enum class eMCGREN2 : uint32_t {
    eDISABLE = 0, // 2nd PPS instance is disabled to operate in PPS or MCGR mode
    eENABLE = 1, // 2nd PPS instance is enabled to operate in PPS or MCGR mode
  };
  
  enum class eTRGTMODSEL3 : uint32_t {
    eONLY_INT = 0, // Target Time registers are programmed only for generating the interrupt event. The Flexible PPS function must not be enabled in this mode, otherwise spurious transitions may be observed on the corresponding ptp_pps_o output port
    eINT_ST = 2, // Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS0 output signal generation
    eONLY_ST = 3, // Target Time registers are programmed only for starting or stopping the PPS0 output signal generation. No interrupt is asserted
  };
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Frequency Control This field controls the frequency of the PPS0 output (ptp_pps_o[0]) signal.
    uint32_t PPSCTRL_PPSCMD : 4;
    /// read-write - Flexible PPS Output Mode Enable When this bit is set, Bits[3:0] function as PPSCMD.
    ePPSEN0 PPSEN0 : 1;
    /// read-write - Target Time Register Mode for PPS0 Output This field indicates the Target Time registers (MAC_PPS0_TARGET_TIME_SECONDS and MAC_PPS0_TARGET_TIME_NANOSECONDS) mode for PPS0 output signal:
    eTRGTMODSEL0 TRGTMODSEL0 : 2;
    /// read-write - MCGR Mode Enable for PPS0 Output This field enables the 0th PPS instance to operate in PPS or MCGR mode.
    eMCGREN0 MCGREN0 : 1;
    /// read-write - Flexible PPS1 Output Control This field controls the flexible PPS1 output (ptp_pps_o[1]) signal.
    uint32_t PPSCMD1 : 4;
    uint32_t _reserved_0 : 1;
    /// read-write - Target Time Register Mode for PPS1 Output This field indicates the Target Time registers (MAC_PPS1_TARGET_TIME_SECONDS and MAC_PPS1_TARGET_TIME_NANOSECONDS) mode for PPS1 output signal.
    eTRGTMODSEL1 TRGTMODSEL1 : 2;
    /// read-write - MCGR Mode Enable for PPS1 Output This field enables the 1st PPS instance to operate in PPS or MCGR mode.
    eMCGREN1 MCGREN1 : 1;
    /// read-write - Flexible PPS2 Output Control This field controls the flexible PPS2 output (ptp_pps_o[2]) signal.
    uint32_t PPSCMD2 : 4;
    uint32_t _reserved_1 : 1;
    /// read-write - Target Time Register Mode for PPS2 Output This field indicates the Target Time registers (MAC_PPS2_TARGET_TIME_SECONDS and MAC_PPS2_TARGET_TIME_NANOSECONDS) mode for PPS2 output signal.
    eTRGTMODSEL2 TRGTMODSEL2 : 2;
    /// read-write - MCGR Mode Enable for PPS2 Output This field enables the 2nd PPS instance to operate in PPS or MCGR mode.
    eMCGREN2 MCGREN2 : 1;
    /// read-write - Flexible PPS3 Output Control This field controls the flexible PPS3 output (ptp_pps_o[3]) signal.
    uint32_t PPSCMD3 : 4;
    uint32_t _reserved_2 : 1;
    /// read-write - Target Time Register Mode for PPS3 Output This field indicates the Target Time registers (MAC_PPS3_TARGET_TIME_SECONDS and MAC_PPS3_TARGET_TIME_NANOSECONDS) mode for PPS3 output signal.
    eTRGTMODSEL3 TRGTMODSEL3 : 2;
    /// read-write - MCGR Mode Enable for PPS3 Output This field enables the 3rd PPS instance to operate in PPS or MCGR mode.
    uint32_t MCGREN3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_PPS_CONTROL*>(0x4043CB70); }
};

// PPS0 Target Time Seconds
//
union MAC_PPS0_TARGET_TIME_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Target Time Seconds Register This field stores the time in seconds.
    uint32_t TSTRH0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS0_TARGET_TIME_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS0_TARGET_TIME_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS0_TARGET_TIME_SECONDS*>(0x4043CB80); }
};

// PPS0 Target Time Nanoseconds
//
union MAC_PPS0_TARGET_TIME_NANOSECONDS {
  
  enum class eTRGTBUSY0 : uint32_t {
    eINACTIVE = 0, // PPS Target Time Register Busy status is not detected
    eACTIVE = 1, // PPS Target Time Register Busy is detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Target Time Low for PPS Register This register stores the time in (signed) nanoseconds.
    uint32_t TTSL0 : 31;
    /// read-write - PPS Target Time Register Busy The MAC sets this bit when the PPSCMD0 field in the PPS_CONTROL register is programmed to 010 or 011.
    eTRGTBUSY0 TRGTBUSY0 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS0_TARGET_TIME_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS0_TARGET_TIME_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS0_TARGET_TIME_NANOSECONDS*>(0x4043CB84); }
};

// PPS0 Interval
//
union MAC_PPS0_INTERVAL {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Interval These bits store the interval between the rising edges of PPS0 signal output.
    uint32_t PPSINT0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS0_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS0_INTERVAL &Instance() { return *reinterpret_cast<volatile MAC_PPS0_INTERVAL*>(0x4043CB88); }
};

// PPS0 Width
//
union MAC_PPS0_WIDTH {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Width These bits store the width between the rising edge and corresponding falling edge of PPS0 signal output.
    uint32_t PPSWIDTH0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS0_WIDTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS0_WIDTH &Instance() { return *reinterpret_cast<volatile MAC_PPS0_WIDTH*>(0x4043CB8C); }
};

// PPS1 Target Time Seconds
//
union MAC_PPS1_TARGET_TIME_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Target Time Seconds Register This field stores the time in seconds.
    uint32_t TSTRH1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS1_TARGET_TIME_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS1_TARGET_TIME_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS1_TARGET_TIME_SECONDS*>(0x4043CB90); }
};

// PPS1 Target Time Nanoseconds
//
union MAC_PPS1_TARGET_TIME_NANOSECONDS {
  
  enum class eTRGTBUSY1 : uint32_t {
    eINACTIVE = 0, // PPS Target Time Register Busy status is not detected
    eACTIVE = 1, // PPS Target Time Register Busy is detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Target Time Low for PPS Register This register stores the time in (signed) nanoseconds.
    uint32_t TTSL1 : 31;
    /// read-write - PPS Target Time Register Busy The MAC sets this bit when the PPSCMD0 field in the PPS_CONTROL register is programmed to 010 or 011.
    eTRGTBUSY1 TRGTBUSY1 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS1_TARGET_TIME_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS1_TARGET_TIME_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS1_TARGET_TIME_NANOSECONDS*>(0x4043CB94); }
};

// PPS1 Interval
//
union MAC_PPS1_INTERVAL {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Interval These bits store the interval between the rising edges of PPS0 signal output.
    uint32_t PPSINT1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS1_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS1_INTERVAL &Instance() { return *reinterpret_cast<volatile MAC_PPS1_INTERVAL*>(0x4043CB98); }
};

// PPS1 Width
//
union MAC_PPS1_WIDTH {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Width These bits store the width between the rising edge and corresponding falling edge of PPS0 signal output.
    uint32_t PPSWIDTH1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS1_WIDTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS1_WIDTH &Instance() { return *reinterpret_cast<volatile MAC_PPS1_WIDTH*>(0x4043CB9C); }
};

// PPS2 Target Time Seconds
//
union MAC_PPS2_TARGET_TIME_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Target Time Seconds Register This field stores the time in seconds.
    uint32_t TSTRH2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS2_TARGET_TIME_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS2_TARGET_TIME_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS2_TARGET_TIME_SECONDS*>(0x4043CBA0); }
};

// PPS2 Target Time Nanoseconds
//
union MAC_PPS2_TARGET_TIME_NANOSECONDS {
  
  enum class eTRGTBUSY2 : uint32_t {
    eINACTIVE = 0, // PPS Target Time Register Busy status is not detected
    eACTIVE = 1, // PPS Target Time Register Busy is detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Target Time Low for PPS Register This register stores the time in (signed) nanoseconds.
    uint32_t TTSL2 : 31;
    /// read-write - PPS Target Time Register Busy The MAC sets this bit when the PPSCMD0 field in the PPS_CONTROL register is programmed to 010 or 011.
    eTRGTBUSY2 TRGTBUSY2 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS2_TARGET_TIME_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS2_TARGET_TIME_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS2_TARGET_TIME_NANOSECONDS*>(0x4043CBA4); }
};

// PPS2 Interval
//
union MAC_PPS2_INTERVAL {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Interval These bits store the interval between the rising edges of PPS0 signal output.
    uint32_t PPSINT2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS2_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS2_INTERVAL &Instance() { return *reinterpret_cast<volatile MAC_PPS2_INTERVAL*>(0x4043CBA8); }
};

// PPS2 Width
//
union MAC_PPS2_WIDTH {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Width These bits store the width between the rising edge and corresponding falling edge of PPS0 signal output.
    uint32_t PPSWIDTH2 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS2_WIDTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS2_WIDTH &Instance() { return *reinterpret_cast<volatile MAC_PPS2_WIDTH*>(0x4043CBAC); }
};

// PPS3 Target Time Seconds
//
union MAC_PPS3_TARGET_TIME_SECONDS {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Target Time Seconds Register This field stores the time in seconds.
    uint32_t TSTRH3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS3_TARGET_TIME_SECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS3_TARGET_TIME_SECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS3_TARGET_TIME_SECONDS*>(0x4043CBB0); }
};

// PPS3 Target Time Nanoseconds
//
union MAC_PPS3_TARGET_TIME_NANOSECONDS {
  
  enum class eTRGTBUSY3 : uint32_t {
    eINACTIVE = 0, // PPS Target Time Register Busy status is not detected
    eACTIVE = 1, // PPS Target Time Register Busy is detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Target Time Low for PPS Register This register stores the time in (signed) nanoseconds.
    uint32_t TTSL3 : 31;
    /// read-write - PPS Target Time Register Busy The MAC sets this bit when the PPSCMD0 field in the PPS_CONTROL register is programmed to 010 or 011.
    eTRGTBUSY3 TRGTBUSY3 : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS3_TARGET_TIME_NANOSECONDS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS3_TARGET_TIME_NANOSECONDS &Instance() { return *reinterpret_cast<volatile MAC_PPS3_TARGET_TIME_NANOSECONDS*>(0x4043CBB4); }
};

// PPS3 Interval
//
union MAC_PPS3_INTERVAL {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Interval These bits store the interval between the rising edges of PPS0 signal output.
    uint32_t PPSINT3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS3_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS3_INTERVAL &Instance() { return *reinterpret_cast<volatile MAC_PPS3_INTERVAL*>(0x4043CBB8); }
};

// PPS3 Width
//
union MAC_PPS3_WIDTH {
  
  // Bit field definition.
  struct {
    /// read-write - PPS Output Signal Width These bits store the width between the rising edge and corresponding falling edge of PPS0 signal output.
    uint32_t PPSWIDTH3 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PPS3_WIDTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PPS3_WIDTH &Instance() { return *reinterpret_cast<volatile MAC_PPS3_WIDTH*>(0x4043CBBC); }
};

// PTP Offload Engine Control
//
union MAC_PTO_CONTROL {
  
  enum class ePTOEN : uint32_t {
    eDISABLE = 0, // PTP Offload feature is disabled
    eENABLE = 1, // PTP Offload feature is enabled
  };
  
  enum class eASYNCEN : uint32_t {
    eDISABLE = 0, // Automatic PTP SYNC message is disabled
    eENABLE = 1, // Automatic PTP SYNC message is enabled
  };
  
  enum class eAPDREQEN : uint32_t {
    eDISABLE = 0, // Automatic PTP Pdelay_Req message is disabled
    eENABLE = 1, // Automatic PTP Pdelay_Req message is enabled
  };
  
  enum class eASYNCTRIG : uint32_t {
    eDISABLE = 0, // Automatic PTP SYNC message Trigger is disabled
    eENABLE = 1, // Automatic PTP SYNC message Trigger is enabled
  };
  
  enum class eAPDREQTRIG : uint32_t {
    eDISABLE = 0, // Automatic PTP Pdelay_Req message Trigger is disabled
    eENABLE = 1, // Automatic PTP Pdelay_Req message Trigger is enabled
  };
  
  enum class eDRRDIS : uint32_t {
    eENABLE = 0, // PTO Delay Request/Response response generation is enabled
    eDISABLE = 1, // PTO Delay Request/Response response generation is disabled
  };
  
  enum class ePDRDIS : uint32_t {
    eENABLE = 0, // Peer Delay Response response generation is enabled
    eDISABLE = 1, // Peer Delay Response response generation is disabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - PTP Offload Enable When this bit is set, the PTP Offload feature is enabled.
    ePTOEN PTOEN : 1;
    /// read-write - Automatic PTP SYNC message Enable When this bit is set, PTP SYNC message is generated periodically based on interval programmed or trigger from application, when the MAC is programmed to be in Clock Master mode.
    eASYNCEN ASYNCEN : 1;
    /// read-write - Automatic PTP Pdelay_Req message Enable When this bit is set, PTP Pdelay_Req message is generated periodically based on interval programmed or trigger from application, when the MAC is programmed to be in Peer-to-Peer Transparent mode.
    eAPDREQEN APDREQEN : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Automatic PTP SYNC message Trigger When this bit is set, one PTP SYNC message is transmitted.
    eASYNCTRIG ASYNCTRIG : 1;
    /// read-write - Automatic PTP Pdelay_Req message Trigger When this bit is set, one PTP Pdelay_Req message is transmitted.
    eAPDREQTRIG APDREQTRIG : 1;
    /// read-write - Disable PTO Delay Request/Response response generation When this bit is set, the Delay Request and Delay response is not generated for received SYNC and Delay request packet respectively, as required by the programmed mode.
    eDRRDIS DRRDIS : 1;
    /// read-write - Disable Peer Delay Response response generation When this bit is set, the Peer Delay Response (Pdelay_Resp) response is not be generated for received Peer Delay Request (Pdelay_Req) request packet, as required by the programmed mode.
    ePDRDIS PDRDIS : 1;
    /// read-write - Domain Number This field indicates the domain Number in which the PTP node is operating.
    uint32_t DN : 8;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_PTO_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_PTO_CONTROL &Instance() { return *reinterpret_cast<volatile MAC_PTO_CONTROL*>(0x4043CBC0); }
};

// Source Port Identity 0
//
union MAC_SOURCE_PORT_IDENTITY0 {
  
  // Bit field definition.
  struct {
    /// read-write - Source Port Identity 0 This field indicates bits [31:0] of sourcePortIdentity of PTP node.
    uint32_t SPI0 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SOURCE_PORT_IDENTITY0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SOURCE_PORT_IDENTITY0 &Instance() { return *reinterpret_cast<volatile MAC_SOURCE_PORT_IDENTITY0*>(0x4043CBC4); }
};

// Source Port Identity 1
//
union MAC_SOURCE_PORT_IDENTITY1 {
  
  // Bit field definition.
  struct {
    /// read-write - Source Port Identity 1 This field indicates bits [63:32] of sourcePortIdentity of PTP node.
    uint32_t SPI1 : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SOURCE_PORT_IDENTITY1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SOURCE_PORT_IDENTITY1 &Instance() { return *reinterpret_cast<volatile MAC_SOURCE_PORT_IDENTITY1*>(0x4043CBC8); }
};

// Source Port Identity 2
//
union MAC_SOURCE_PORT_IDENTITY2 {
  
  // Bit field definition.
  struct {
    /// read-write - Source Port Identity 2 This field indicates bits [79:64] of sourcePortIdentity of PTP node.
    uint32_t SPI2 : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_SOURCE_PORT_IDENTITY2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_SOURCE_PORT_IDENTITY2 &Instance() { return *reinterpret_cast<volatile MAC_SOURCE_PORT_IDENTITY2*>(0x4043CBCC); }
};

// Log Message Interval
//
union MAC_LOG_MESSAGE_INTERVAL {
  
  enum class eDRSYNCR : uint32_t {
    eSYNC1 = 0, // DelayReq generated for every received SYNC
    eSYNC2 = 1, // DelayReq generated every alternate reception of SYNC
    eSYNC4 = 2, // for every 4 SYNC messages
    eSYNC8 = 3, // for every 8 SYNC messages
    eSYNC16 = 4, // for every 16 SYNC messages
    eSYNC32 = 5, // for every 32 SYNC messages
  };
  
  // Bit field definition.
  struct {
    /// read-write - Log Sync Interval This field indicates the periodicity of the automatically generated SYNC message when the PTP node is Master.
    uint32_t LSI : 8;
    /// read-write - Delay_Req to SYNC Ratio In Slave mode, it is used for controlling frequency of Delay_Req messages transmitted.
    eDRSYNCR DRSYNCR : 3;
    uint32_t _reserved_0 : 13;
    /// read-write - Log Min Pdelay_Req Interval This field indicates logMinPdelayReqInterval of PTP node.
    uint32_t LMPDRI : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MAC_LOG_MESSAGE_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MAC_LOG_MESSAGE_INTERVAL &Instance() { return *reinterpret_cast<volatile MAC_LOG_MESSAGE_INTERVAL*>(0x4043CBD0); }
};

// MTL Operation Mode
//
union MTL_OPERATION_MODE {
  
  enum class eDTXSTS : uint32_t {
    eDISABLE = 0, // Drop Transmit Status is disabled
    eENABLE = 1, // Drop Transmit Status is enabled
  };
  
  enum class eRAA : uint32_t {
    eSP = 0, // Strict priority (SP)
    eWSP = 1, // Weighted Strict Priority (WSP)
  };
  
  enum class eSCHALG : uint32_t {
    eWRR = 0, // WRR algorithm
    eWFQ = 1, // WFQ algorithm when DCB feature is selected.Otherwise, Reserved
    eDWRR = 2, // DWRR algorithm when DCB feature is selected.Otherwise, Reserved
    eSP = 3, // Strict priority algorithm
  };
  
  enum class eCNTPRST : uint32_t {
    eDISABLE = 0, // Counters Preset is disabled
    eENABLE = 1, // Counters Preset is enabled
  };
  
  enum class eCNTCLR : uint32_t {
    eDISABLE = 0, // Counters are not reset
    eENABLE = 1, // All counters are reset
  };
  
  enum class eFRPE : uint32_t {
    eDISABLE = 0, // Flexible Rx parser is disabled
    eENABLE = 1, // Flexible Rx parser is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 1;
    /// read-write - Drop Transmit Status When this bit is set, the Tx packet status received from the MAC is dropped in the MTL.
    eDTXSTS DTXSTS : 1;
    /// read-write - Receive Arbitration Algorithm This field is used to select the arbitration algorithm for the Rx side.
    eRAA RAA : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Tx Scheduling Algorithm This field indicates the algorithm for Tx scheduling:
    eSCHALG SCHALG : 2;
    uint32_t _reserved_2 : 1;
    /// read-write - Counters Preset When this bit is set, - MTL_TxQ[0-7]_Underflow register is initialized/preset to 12'h7F0.
    eCNTPRST CNTPRST : 1;
    /// read-write - Counters Reset When this bit is set, all counters are reset.
    eCNTCLR CNTCLR : 1;
    uint32_t _reserved_3 : 5;
    /// read-write - Flexible Rx parser Enable When this bit is set to 1, the Programmable Rx Parser functionality is enabled.
    eFRPE FRPE : 1;
    uint32_t _reserved_4 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_OPERATION_MODE*>(0x4043CC00); }
};

// FIFO Debug Access Control and Status
//
union MTL_DBG_CTL {
  
  enum class eFDBGEN : uint32_t {
    eDISABLE = 0, // FIFO Debug Access is disabled
    eENABLE = 1, // FIFO Debug Access is enabled
  };
  
  enum class eDBGMOD : uint32_t {
    eDISABLE = 0, // Debug Mode Access to FIFO is disabled
    eENABLE = 1, // Debug Mode Access to FIFO is enabled
  };
  
  enum class eBYTEEN : uint32_t {
    eB0_VAL = 0, // Byte 0 valid
    eB01_VAL = 1, // Byte 0 and Byte 1 are valid
    eB012_VAL = 2, // Byte 0, Byte 1, and Byte 2 are valid
    eB0123_VAL = 3, // All four bytes are valid
  };
  
  enum class ePKTSTATE : uint32_t {
    ePKT_DATA = 0, // Packet Data
    eCW_NS = 1, // Control Word/Normal Status
    eSOP_LS = 2, // SOP Data/Last Status
    eEOP = 3, // EOP Data/EOP
  };
  
  enum class eRSTALL : uint32_t {
    eDISABLE = 0, // Reset All Pointers is disabled
    eENABLE = 1, // Reset All Pointers is enabled
  };
  
  enum class eRSTSEL : uint32_t {
    eDISABLE = 0, // Reset Pointers of Selected FIFO is disabled
    eENABLE = 1, // Reset Pointers of Selected FIFO is enabled
  };
  
  enum class eFIFORDEN : uint32_t {
    eDISABLE = 0, // FIFO Read is disabled
    eENABLE = 1, // FIFO Read is enabled
  };
  
  enum class eFIFOWREN : uint32_t {
    eDISABLE = 0, // FIFO Write is disabled
    eENABLE = 1, // FIFO Write is enabled
  };
  
  enum class eFIFOSEL : uint32_t {
    eTXFIFO = 0, // Tx FIFO
    eTXSTSFIFO = 1, // Tx Status FIFO (only read access when SLVMOD is set)
    eTSOFIFO = 2, // TSO FIFO (cannot be accessed when SLVMOD is set)
    eRXFIFO = 3, // Rx FIFO
  };
  
  enum class ePKTIE : uint32_t {
    eDISABLE = 0, // Receive Packet Available Interrupt Status is disabled
    eENABLE = 1, // Receive Packet Available Interrupt Status is enabled
  };
  
  enum class eSTSIE : uint32_t {
    eDISABLE = 0, // Transmit Packet Available Interrupt Status is disabled
    eENABLE = 1, // Transmit Packet Available Interrupt Status is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - FIFO Debug Access Enable When this bit is set, it indicates that the debug mode access to the FIFO is enabled.
    eFDBGEN FDBGEN : 1;
    /// read-write - Debug Mode Access to FIFO When this bit is set, it indicates that the current access to the FIFO is read, write, and debug access.
    eDBGMOD DBGMOD : 1;
    /// read-write - Byte Enables This field indicates the number of data bytes valid in the data register during Write operation.
    eBYTEEN BYTEEN : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Encoded Packet State This field is used to write the control information to the Tx FIFO or Rx FIFO.
    ePKTSTATE PKTSTATE : 2;
    uint32_t _reserved_1 : 1;
    /// read-write - Reset All Pointers When this bit is set, the pointers of all FIFOs are reset when FIFO Debug Access is enabled.
    eRSTALL RSTALL : 1;
    /// read-write - Reset Pointers of Selected FIFO When this bit is set, the pointers of the currently-selected FIFO are reset when FIFO Debug Access is enabled.
    eRSTSEL RSTSEL : 1;
    /// read-write - FIFO Read Enable When this bit is set, it enables the Read operation on selected FIFO when FIFO Debug Access is enabled.
    eFIFORDEN FIFORDEN : 1;
    /// read-write - FIFO Write Enable When this bit is set, it enables the Write operation on selected FIFO when FIFO Debug Access is enabled.
    eFIFOWREN FIFOWREN : 1;
    /// read-write - FIFO Selected for Access This field indicates the FIFO selected for debug access:
    eFIFOSEL FIFOSEL : 2;
    /// read-write - Receive Packet Available Interrupt Status Enable When this bit is set, an interrupt is generated when EOP of received packet is written to the Rx FIFO.
    ePKTIE PKTIE : 1;
    /// read-write - Transmit Status Available Interrupt Status Enable When this bit is set, an interrupt is generated when Transmit status is available in slave mode.
    eSTSIE STSIE : 1;
    uint32_t _reserved_2 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_DBG_CTL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_DBG_CTL &Instance() { return *reinterpret_cast<volatile MTL_DBG_CTL*>(0x4043CC08); }
};

// FIFO Debug Status
//
union MTL_DBG_STS {
  
  enum class eFIFOBUSY : uint32_t {
    eINACTIVE = 0, // FIFO Busy not detected
    eACTIVE = 1, // FIFO Busy detected
  };
  
  enum class ePKTSTATE : uint32_t {
    ePKT_DATA = 0, // Packet Data
    eCW_NS = 1, // Control Word/Normal Status
    eSOP_LS = 2, // SOP Data/Last Status
    eEOP = 3, // EOP Data/EOP
  };
  
  enum class eBYTEEN : uint32_t {
    eB0_VAL = 0, // Byte 0 valid
    eB01_VAL = 1, // Byte 0 and Byte 1 are valid
    eB012_VAL = 2, // Byte 0, Byte 1, and Byte 2 are valid
    eB0123_VAL = 3, // All four bytes are valid
  };
  
  enum class ePKTI : uint32_t {
    eINACTIVE = 0, // Receive Packet Available Interrupt Status not detected
    eACTIVE = 1, // Receive Packet Available Interrupt Status detected
  };
  
  enum class eSTSI : uint32_t {
    eINACTIVE = 0, // Transmit Status Available Interrupt Status not detected
    eACTIVE = 1, // Transmit Status Available Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - FIFO Busy When set, this bit indicates that a FIFO operation is in progress in the MAC and content of the following fields is not valid: - All other fields of this register - All fields of the MTL_FIFO_DEBUG_DATA register
    eFIFOBUSY FIFOBUSY : 1;
    /// read-only - Encoded Packet State This field is used to get the control or status information of the selected FIFO.
    ePKTSTATE PKTSTATE : 2;
    /// read-only - Byte Enables This field indicates the number of data bytes valid in the data register during Read operation.
    eBYTEEN BYTEEN : 2;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Packet Available Interrupt Status When set, this bit indicates that MAC layer has written the EOP of received packet to the Rx FIFO.
    ePKTI PKTI : 1;
    /// read-write - Transmit Status Available Interrupt Status When set, this bit indicates that the Slave mode Tx packet is transmitted, and the status is available in Tx Status FIFO.
    eSTSI STSI : 1;
    uint32_t _reserved_1 : 5;
    /// read-only - Remaining Locations in the FIFO Slave Access Mode: This field indicates the space available in selected FIFO.
    uint32_t LOCR : 17;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_DBG_STS() = delete;
  inline void Reset() volatile { this->value = 0x00000018; }
  static inline volatile MTL_DBG_STS &Instance() { return *reinterpret_cast<volatile MTL_DBG_STS*>(0x4043CC0C); }
};

// FIFO Debug Data
//
union MTL_FIFO_DEBUG_DATA {
  
  // Bit field definition.
  struct {
    /// read-write - FIFO Debug Data During debug or slave access write operation, this field contains the data to be written to the Tx FIFO, Rx FIFO, or TSO FIFO.
    uint32_t FDBGDATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_FIFO_DEBUG_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_FIFO_DEBUG_DATA &Instance() { return *reinterpret_cast<volatile MTL_FIFO_DEBUG_DATA*>(0x4043CC10); }
};

// MTL Interrupt Status
//
union MTL_INTERRUPT_STATUS {
  
  enum class eQ0IS : uint32_t {
    eINACTIVE = 0, // Queue 0 Interrupt status not detected
    eACTIVE = 1, // Queue 0 Interrupt status detected
  };
  
  enum class eQ1IS : uint32_t {
    eINACTIVE = 0, // Queue 1 Interrupt status not detected
    eACTIVE = 1, // Queue 1 Interrupt status detected
  };
  
  enum class eQ2IS : uint32_t {
    eINACTIVE = 0, // Queue 2 Interrupt status not detected
    eACTIVE = 1, // Queue 2 Interrupt status detected
  };
  
  enum class eQ3IS : uint32_t {
    eINACTIVE = 0, // Queue 3 Interrupt status not detected
    eACTIVE = 1, // Queue 3 Interrupt status detected
  };
  
  enum class eQ4IS : uint32_t {
    eINACTIVE = 0, // Queue 4 Interrupt status not detected
    eACTIVE = 1, // Queue 4 Interrupt status detected
  };
  
  enum class eDBGIS : uint32_t {
    eINACTIVE = 0, // Debug Interrupt status not detected
    eACTIVE = 1, // Debug Interrupt status detected
  };
  
  enum class eESTIS : uint32_t {
    eINACTIVE = 0, // EST (TAS- 802.1Qbv) Interrupt status not detected
    eACTIVE = 1, // EST (TAS- 802.1Qbv) Interrupt status detected
  };
  
  enum class eMTLPIS : uint32_t {
    eINACTIVE = 0, // MTL Rx Parser Interrupt status not detected
    eACTIVE = 1, // MTL Rx Parser Interrupt status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Queue 0 Interrupt status This bit indicates that there is an interrupt from Queue 0.
    eQ0IS Q0IS : 1;
    /// read-only - Queue 1 Interrupt status This bit indicates that there is an interrupt from Queue 1.
    eQ1IS Q1IS : 1;
    /// read-only - Queue 2 Interrupt status This bit indicates that there is an interrupt from Queue 2.
    eQ2IS Q2IS : 1;
    /// read-only - Queue 3 Interrupt status This bit indicates that there is an interrupt from Queue 3.
    eQ3IS Q3IS : 1;
    /// read-only - Queue 4 Interrupt status This bit indicates that there is an interrupt from Queue 4.
    eQ4IS Q4IS : 1;
    uint32_t _reserved_0 : 12;
    /// read-only - Debug Interrupt status This bit indicates an interrupt event during the slave access.
    eDBGIS DBGIS : 1;
    /// read-only - EST (TAS- 802.
    eESTIS ESTIS : 1;
    uint32_t _reserved_1 : 4;
    /// read-only - MTL Rx Parser Interrupt Status This bit indicates that there is an interrupt from Rx Parser Block.
    eMTLPIS MTLPIS : 1;
    uint32_t _reserved_2 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_INTERRUPT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_INTERRUPT_STATUS &Instance() { return *reinterpret_cast<volatile MTL_INTERRUPT_STATUS*>(0x4043CC20); }
};

// Receive Queue and DMA Channel Mapping 0
//
union MTL_RXQ_DMA_MAP0 {
  
  enum class eQ0DDMACH : uint32_t {
    eDISABLE = 0, // Queue 0 disabled for DA-based DMA Channel Selection
    eENABLE = 1, // Queue 0 enabled for DA-based DMA Channel Selection
  };
  
  enum class eQ1DDMACH : uint32_t {
    eDISABLE = 0, // Queue 1 disabled for DA-based DMA Channel Selection
    eENABLE = 1, // Queue 1 enabled for DA-based DMA Channel Selection
  };
  
  enum class eQ2DDMACH : uint32_t {
    eDISABLE = 0, // Queue 2 disabled for DA-based DMA Channel Selection
    eENABLE = 1, // Queue 2 enabled for DA-based DMA Channel Selection
  };
  
  enum class eQ3DDMACH : uint32_t {
    eDISABLE = 0, // Queue 3 disabled for DA-based DMA Channel Selection
    eENABLE = 1, // Queue 3 enabled for DA-based DMA Channel Selection
  };
  
  // Bit field definition.
  struct {
    /// read-write - Queue 0 Mapped to DMA Channel This field controls the routing of the packet received in Queue 0 to the DMA channel: - 000: DMA Channel 0 - 001: DMA Channel 1 - 010: DMA Channel 2 - 011: DMA Channel 3 - 100: DMA Channel 4 - 101: Reserved - 110: Reserved - 111: Reserved This field is valid when the Q0DDMACH field is reset.
    uint32_t Q0MDMACH : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - Queue 0 Enabled for DA-based DMA Channel Selection When set, this bit indicates that the packets received in Queue 0 are routed to a particular DMA channel as decided in the MAC Receiver based on the DMA channel number programmed in the L3-L4 filter registers, or the Ethernet DA address.
    eQ0DDMACH Q0DDMACH : 1;
    uint32_t _reserved_1 : 3;
    /// read-write - Queue 1 Mapped to DMA Channel This field controls the routing of the received packet in Queue 1 to the DMA channel: - 000: DMA Channel 0 - 001: DMA Channel 1 - 010: DMA Channel 2 - 011: DMA Channel 3 - 100: DMA Channel 4 - 101: Reserved - 110: Reserved - 111: Reserved This field is valid when the Q1DDMACH field is reset.
    uint32_t Q1MDMACH : 3;
    uint32_t _reserved_2 : 1;
    /// read-write - Queue 1 Enabled for DA-based DMA Channel Selection When set, this bit indicates that the packets received in Queue 1 are routed to a particular DMA channel as decided in the MAC Receiver based on the DMA channel number programmed in the L3-L4 filter registers, or the Ethernet DA address.
    eQ1DDMACH Q1DDMACH : 1;
    uint32_t _reserved_3 : 3;
    /// read-write - Queue 2 Mapped to DMA Channel This field controls the routing of the received packet in Queue 2 to the DMA channel: - 000: DMA Channel 0 - 001: DMA Channel 1 - 010: DMA Channel 2 - 011: DMA Channel 3 - 100: DMA Channel 4 - 101: Reserved - 110: Reserved - 111: Reserved This field is valid when the Q2DDMACH field is reset.
    uint32_t Q2MDMACH : 3;
    uint32_t _reserved_4 : 1;
    /// read-write - Queue 2 Enabled for DA-based DMA Channel Selection When set, this bit indicates that the packets received in Queue 2 are routed to a particular DMA channel as decided in the MAC Receiver based on the DMA channel number programmed in the L3-L4 filter registers, or the Ethernet DA address.
    eQ2DDMACH Q2DDMACH : 1;
    uint32_t _reserved_5 : 3;
    /// read-write - Queue 3 Mapped to DMA Channel This field controls the routing of the received packet in Queue 3 to the DMA channel: - 000: DMA Channel 0 - 001: DMA Channel 1 - 010: DMA Channel 2 - 011: DMA Channel 3 - 100: DMA Channel 4 - 101: Reserved - 110: Reserved - 111: Reserved This field is valid when the Q3DDMACH field is reset.
    uint32_t Q3MDMACH : 3;
    uint32_t _reserved_6 : 1;
    /// read-write - Queue 3 Enabled for Dynamic (per packet) DMA Channel Selection When set, this bit indicates that the packets received in Queue 3 are routed to a particular DMA channel as decided in the MAC Receiver based on the DMA channel number programmed in the L3-L4 filter registers, or the Ethernet DA address.
    eQ3DDMACH Q3DDMACH : 1;
    uint32_t _reserved_7 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ_DMA_MAP0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ_DMA_MAP0 &Instance() { return *reinterpret_cast<volatile MTL_RXQ_DMA_MAP0*>(0x4043CC30); }
};

// Receive Queue and DMA Channel Mapping 1
//
union MTL_RXQ_DMA_MAP1 {
  
  enum class eQ4DDMACH : uint32_t {
    eDISABLE = 0, // Queue 4 disabled for DA-based DMA Channel Selection
    eENABLE = 1, // Queue 4 enabled for DA-based DMA Channel Selection
  };
  
  // Bit field definition.
  struct {
    /// read-write - Queue 4 Mapped to DMA Channel This field controls the routing of the packet received in Queue 4 to the DMA channel: - 000: DMA Channel 0 - 001: DMA Channel 1 - 010: DMA Channel 2 - 011: DMA Channel 3 - 100: DMA Channel 4 - 101: Reserved - 110: Reserved - 111: Reserved This field is valid when the Q4DDMACH field is reset.
    uint32_t Q4MDMACH : 3;
    uint32_t _reserved_0 : 1;
    /// read-write - Queue 4 Enabled for DA-based DMA Channel Selection When set, this bit indicates that the packets received in Queue 4 are routed to a particular DMA channel as decided in the MAC Receiver based on the DMA channel number programmed in the L3-L4 filter registers, or the Ethernet DA address.
    eQ4DDMACH Q4DDMACH : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ_DMA_MAP1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ_DMA_MAP1 &Instance() { return *reinterpret_cast<volatile MTL_RXQ_DMA_MAP1*>(0x4043CC34); }
};

// Time Based Scheduling Control
//
union MTL_TBS_CTRL {
  
  enum class eESTM : uint32_t {
    eDISABLE = 0, // EST offset Mode is disabled
    eENABLE = 1, // EST offset Mode is enabled
  };
  
  enum class eLEOV : uint32_t {
    eINVALID = 0, // LEOS field is invalid
    eVALID = 1, // LEOS field is valid
  };
  
  // Bit field definition.
  struct {
    /// read-write - EST offset Mode When this bit is set, the Launch Time value used in Time Based Scheduling is interpreted as an EST offset value and is added to the Base Time Register (BTR) of the current list.
    eESTM ESTM : 1;
    /// read-write - Launch Expiry Offset Valid When set indicates the LEOS field is valid.
    eLEOV LEOV : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Launch Expiry GSN Offset The number GSN slots that has to be added to the Launch GSN to compute the Launch Expiry time.
    uint32_t LEGOS : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Launch Expiry Offset The value in units of 256 nanoseconds that has to be added to the Launch time to compute the Launch Expiry time.
    uint32_t LEOS : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TBS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TBS_CTRL &Instance() { return *reinterpret_cast<volatile MTL_TBS_CTRL*>(0x4043CC40); }
};

// Enhancements to Scheduled Transmission Control
//
union MTL_EST_CONTROL {
  
  enum class eEEST : uint32_t {
    eDISABLE = 0, // EST is disabled
    eENABLE = 1, // EST is enabled
  };
  
  enum class eSSWL : uint32_t {
    eDISABLE = 0, // Switch to S/W owned list is disabled
    eENABLE = 1, // Switch to S/W owned list is enabled
  };
  
  enum class eDDBF : uint32_t {
    eDROP = 0, // Drop frames during Frame Size Error
    eDONT_DROP = 1, // Do not Drop frames during Frame Size Error
  };
  
  enum class eDFBS : uint32_t {
    eDONT_DROP = 0, // Do not Drop Frames causing Scheduling Error
    eDROP = 1, // Drop Frames causing Scheduling Error
  };
  
  enum class eLCSE : uint32_t {
    ebf_4_ITERNS = 0, // 4 iterations
    ebf_8_ITERNS = 1, // 8 iterations
    ebf_16_ITERNS = 2, // 16 iterations
    ebf_32_ITERNS = 3, // 32 iterations
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable EST When reset, the gate control list processing is halted and all gates are assumed to be in Open state.
    eEEST EEST : 1;
    /// read-write - Switch to S/W owned list When set indicates that the software has programmed that list that it currently owns (SWOL) and the hardware should switch to the new list based on the new BTR.
    eSSWL SSWL : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Do not Drop frames during Frame Size Error When set, frames are not be dropped during Head-of-Line blocking due to Frame Size Error (HLBF field of MTL_EST_STATUS register).
    eDDBF DDBF : 1;
    /// read-write - Drop Frames causing Scheduling Error When set frames reported to cause HOL Blocking due to not getting scheduled (HLBS field of EST_STATUS register) after 4,8,16,32 (based on LCSE field of this register) GCL iterations are dropped.
    eDFBS DFBS : 1;
    /// read-write - Loop Count to report Scheduling Error Programmable number of GCL list iterations before reporting an HLBS error defined in EST_STATUS register.
    eLCSE LCSE : 2;
    /// read-write - Time Interval Left Shift Amount This field provides the left shift amount for the programmed Time Interval values used in the Gate Control Lists.
    uint32_t TILS : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Current Time Offset Value Provides a 12 bit time offset value in nano second that is added to the current time to compensate for all the implementation pipeline delays such as the CDC sync delay, buffering delays, data path delays etc.
    uint32_t CTOV : 12;
    /// read-write - PTP Time Offset Value The value of PTP Clock period multiplied by 6 in nanoseconds.
    uint32_t PTOV : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_EST_CONTROL*>(0x4043CC50); }
};

// Enhancements to Scheduled Transmission Status
//
union MTL_EST_STATUS {
  
  enum class eSWLC : uint32_t {
    eINACTIVE = 0, // Switch to S/W owned list Complete not detected
    eACTIVE = 1, // Switch to S/W owned list Complete detected
  };
  
  enum class eBTRE : uint32_t {
    eINACTIVE = 0, // BTR Error not detected
    eACTIVE = 1, // BTR Error detected
  };
  
  enum class eHLBF : uint32_t {
    eINACTIVE = 0, // Head-Of-Line Blocking due to Frame Size not detected
    eACTIVE = 1, // Head-Of-Line Blocking due to Frame Size detected
  };
  
  enum class eHLBS : uint32_t {
    eINACTIVE = 0, // Head-Of-Line Blocking due to Scheduling not detected
    eACTIVE = 1, // Head-Of-Line Blocking due to Scheduling detected
  };
  
  enum class eCGCE : uint32_t {
    eINACTIVE = 0, // Constant Gate Control Error not detected
    eACTIVE = 1, // Constant Gate Control Error detected
  };
  
  enum class eSWOL : uint32_t {
    eINACTIVE = 0, // Gate control list number "0" is owned by software
    eACTIVE = 1, // Gate control list number "1" is owned by software
  };
  
  // Bit field definition.
  struct {
    /// read-write - Switch to S/W owned list Complete When "1" indicates the hardware has successfully switched to the SWOL, and the SWOL bit has been updated to that effect.
    eSWLC SWLC : 1;
    /// read-write - BTR Error When "1" indicates a programming error in the BTR of SWOL where the programmed value is less than current time.
    eBTRE BTRE : 1;
    /// read-only - Head-Of-Line Blocking due to Frame Size Set when HOL Blocking is noticed on one or more Queues as a result of none of the Time Intervals of gate open in the GCL being greater than or equal to the duration needed for frame size (or frame fragment size when preemption is enabled) transmission.
    eHLBF HLBF : 1;
    /// read-only - Head-Of-Line Blocking due to Scheduling Set when the frame is not able to win arbitration and get scheduled even after 4 iterations of the GCL.
    eHLBS HLBS : 1;
    /// read-write - Constant Gate Control Error This error occurs when the list length (LLR) is 1 and the programmed Time Interval (TI) value after the optional Left Shifting is less than or equal to the Cycle Time (CTR).
    eCGCE CGCE : 1;
    uint32_t _reserved_0 : 2;
    /// read-only - S/W owned list When '0' indicates Gate control list number "0" is owned by software and when "1" indicates the Gate Control list "1" is owned by the software.
    eSWOL SWOL : 1;
    /// read-only - BTR Error Loop Count Provides the minimum count (N) for which the equation Current Time =< New BTR + (N * New Cycle Time) becomes true.
    uint32_t BTRL : 4;
    uint32_t _reserved_1 : 4;
    /// read-only - Current GCL Slot Number Indicates the slot number of the GCL list.
    uint32_t CGSN : 4;
    uint32_t _reserved_2 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_STATUS &Instance() { return *reinterpret_cast<volatile MTL_EST_STATUS*>(0x4043CC58); }
};

// EST Scheduling Error
//
union MTL_EST_SCH_ERROR {
  
  // Bit field definition.
  struct {
    /// read-write - Schedule Error Queue Number The One Hot Encoded Queue Numbers that have experienced error/timeout described in HLBS field of status register.
    uint32_t SEQN : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_SCH_ERROR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_SCH_ERROR &Instance() { return *reinterpret_cast<volatile MTL_EST_SCH_ERROR*>(0x4043CC60); }
};

// EST Frame Size Error
//
union MTL_EST_FRM_SIZE_ERROR {
  
  // Bit field definition.
  struct {
    /// read-write - Frame Size Error Queue Number The One Hot Encoded Queue Numbers that have experienced error described in HLBF field of status register.
    uint32_t FEQN : 5;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_FRM_SIZE_ERROR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_FRM_SIZE_ERROR &Instance() { return *reinterpret_cast<volatile MTL_EST_FRM_SIZE_ERROR*>(0x4043CC64); }
};

// EST Frame Size Capture
//
union MTL_EST_FRM_SIZE_CAPTURE {
  
  // Bit field definition.
  struct {
    /// read-only - Frame Size of HLBF Captures the Frame Size of the dropped frame related to queue number indicated in HBFQ field of this register.
    uint32_t HBFS : 15;
    uint32_t _reserved_0 : 1;
    /// read-only - Queue Number of HLBF Captures the binary value of the of the first Queue (number) experiencing HLBF error (see HLBF field of status register).
    uint32_t HBFQ : 3;
    uint32_t _reserved_1 : 13;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_FRM_SIZE_CAPTURE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_FRM_SIZE_CAPTURE &Instance() { return *reinterpret_cast<volatile MTL_EST_FRM_SIZE_CAPTURE*>(0x4043CC68); }
};

// EST Interrupt Enable
//
union MTL_EST_INTR_ENABLE {
  
  enum class eIECC : uint32_t {
    eDISABLE = 0, // Interrupt for Switch List is disabled
    eENABLE = 1, // Interrupt for Switch List is enabled
  };
  
  enum class eIEBE : uint32_t {
    eDISABLE = 0, // Interrupt for BTR Error is disabled
    eENABLE = 1, // Interrupt for BTR Error is enabled
  };
  
  enum class eIEHF : uint32_t {
    eDISABLE = 0, // Interrupt for HLBF is disabled
    eENABLE = 1, // Interrupt for HLBF is enabled
  };
  
  enum class eIEHS : uint32_t {
    eDISABLE = 0, // Interrupt for HLBS is disabled
    eENABLE = 1, // Interrupt for HLBS is enabled
  };
  
  enum class eCGCE : uint32_t {
    eDISABLE = 0, // Interrupt for CGCE is disabled
    eENABLE = 1, // Interrupt for CGCE is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Interrupt Enable for Switch List When set, generates interrupt when the configuration change is successful and the hardware has switched to the new list.
    eIECC IECC : 1;
    /// read-write - Interrupt Enable for BTR Error When set, generates interrupt when the BTR Error occurs and is indicated in the status.
    eIEBE IEBE : 1;
    /// read-write - Interrupt Enable for HLBF When set, generates interrupt when the Head-of-Line Blocking due to Frame Size error occurs and is indicated in the status.
    eIEHF IEHF : 1;
    /// read-write - Interrupt Enable for HLBS When set, generates interrupt when the Head-of-Line Blocking due to Scheduling issue and is indicated in the status.
    eIEHS IEHS : 1;
    /// read-write - Interrupt Enable for CGCE When set, generates interrupt when the Constant Gate Control Error occurs and is indicated in the status.
    eCGCE CGCE : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_INTR_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_INTR_ENABLE &Instance() { return *reinterpret_cast<volatile MTL_EST_INTR_ENABLE*>(0x4043CC70); }
};

// EST GCL Control
//
union MTL_EST_GCL_CONTROL {
  
  enum class eSRWO : uint32_t {
    eDISABLE = 0, // Start Read/Write Op disabled
    eENABLE = 1, // Start Read/Write Op enabled
  };
  
  enum class eR1W0 : uint32_t {
    eWRITE = 0, // Write Operation
    eREAD = 1, // Read Operation
  };
  
  enum class eGCRR : uint32_t {
    eDISABLE = 0, // Gate Control Related Registers are disabled
    eENABLE = 1, // Gate Control Related Registers are enabled
  };
  
  enum class eDBGM : uint32_t {
    eDISABLE = 0, // Debug Mode is disabled
    eENABLE = 1, // Debug Mode is enabled
  };
  
  enum class eDBGB : uint32_t {
    eBANK0 = 0, // R/W in debug mode should be directed to Bank 0
    eBANK1 = 1, // R/W in debug mode should be directed to Bank 1
  };
  
  enum class eERR0 : uint32_t {
    eDISABLE = 0, // ERR0 is disabled
    eENABLE = 1, // ERR1 is enabled
  };
  
  enum class eESTEIEE : uint32_t {
    eDISABLE = 0, // EST ECC Inject Error is disabled
    eENABLE = 1, // EST ECC Inject Error is enabled
  };
  
  enum class eESTEIEC : uint32_t {
    ebf_1BIT = 0, // Insert 1 bit error
    ebf_2BIT = 1, // Insert 2 bit errors
    ebf_3BIT = 2, // Insert 3 bit errors
    ebf_1BIT_ADDR = 3, // Insert 1 bit error in address field
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start Read/Write Op When set indicates a Read/Write Op has started and is in progress.
    eSRWO SRWO : 1;
    /// read-write - Read '1', Write '0': When set to '1': Read Operation When set to '0': Write Operation.
    eR1W0 R1W0 : 1;
    /// read-write - Gate Control Related Registers When set to "1" indicates the R/W access is for the GCL related registers (BTR, CTR, TER, LLR) whose address is provided by GCRA.
    eGCRR GCRR : 1;
    uint32_t _reserved_0 : 1;
    /// read-write - Debug Mode When set to "1" indicates R/W in debug mode where the memory bank (for GCL and Time related registers) is explicitly provided by DBGB value, when set to "0" SWOL bit is used to determine which bank to use.
    eDBGM DBGM : 1;
    /// read-write - Debug Mode Bank Select When set to "0" indicates R/W in debug mode should be directed to Bank 0 (GCL0 and corresponding Time related registers).
    eDBGB DBGB : 1;
    uint32_t _reserved_1 : 2;
    /// read-write - Gate Control List Address: (GCLA when GCRR is "0").
    uint32_t ADDR : 9;
    uint32_t _reserved_2 : 3;
    /// read-write - When set indicates the last write operation was aborted as software writes to GCL and GCL registers is prohibited when SSWL bit of MTL_EST_CONTROL Register is set.
    eERR0 ERR0 : 1;
    /// read-only - EST ECC Inject Error Enable When set along with EEST bit of MTL_EST_CONTROL register, enables the ECC error injection feature.
    eESTEIEE ESTEIEE : 1;
    /// read-only - ECC Inject Error Control for EST Memory When EIEE bit of this register is set, following are the errors inserted based on the value encoded in this field.
    eESTEIEC ESTEIEC : 2;
    uint32_t _reserved_3 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_GCL_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_GCL_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_EST_GCL_CONTROL*>(0x4043CC80); }
};

// EST GCL Data
//
union MTL_EST_GCL_DATA {
  
  // Bit field definition.
  struct {
    /// read-write - Gate Control Data The data corresponding to the address selected in the MTL_GCL_CONTROL register.
    uint32_t GCD : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_EST_GCL_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_EST_GCL_DATA &Instance() { return *reinterpret_cast<volatile MTL_EST_GCL_DATA*>(0x4043CC84); }
};

// Frame Preemption Control and Status
//
union MTL_FPE_CTRL_STS {
  
  enum class eHRS : uint32_t {
    eSET_REL = 0, // Indicates a Set-and-Release-MAC operation was last executed and the pMAC is in Release State
    eSET_HOLD = 1, // Indicates a Set-and-Hold-MAC operation was last executed and the pMAC is in Hold State
  };
  
  // Bit field definition.
  struct {
    /// read-write - Additional Fragment Size used to indicate, in units of 64 bytes, the minimum number of bytes over 64 bytes required in non-final fragments of preempted frames.
    uint32_t AFSZ : 2;
    uint32_t _reserved_0 : 6;
    /// read-write - Preemption Classification When set indicates the corresponding Queue must be classified as preemptable, when '0' Queue is classified as express.
    uint32_t PEC : 5;
    uint32_t _reserved_1 : 15;
    /// read-only - Hold/Release Status - 1: Indicates a Set-and-Hold-MAC operation was last executed and the pMAC is in Hold State.
    eHRS HRS : 1;
    uint32_t _reserved_2 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_FPE_CTRL_STS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_FPE_CTRL_STS &Instance() { return *reinterpret_cast<volatile MTL_FPE_CTRL_STS*>(0x4043CC90); }
};

// Frame Preemption Hold and Release Advance
//
union MTL_FPE_ADVANCE {
  
  // Bit field definition.
  struct {
    /// read-write - Hold Advance The maximum time in nanoseconds that can elapse between issuing a HOLD to the MAC and the MAC ceasing to transmit any preemptable frame that is in the process of transmission or any preemptable frames that are queued for transmission.
    uint32_t HADV : 16;
    /// read-write - Release Advance The maximum time in nanoseconds that can elapse between issuing a RELEASE to the MAC and the MAC being ready to resume transmission of preemptable frames, in the absence of there being any express frames available for transmission.
    uint32_t RADV : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_FPE_ADVANCE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_FPE_ADVANCE &Instance() { return *reinterpret_cast<volatile MTL_FPE_ADVANCE*>(0x4043CC94); }
};

// RXP Control Status
//
union MTL_RXP_CONTROL_STATUS {
  
  enum class eRXPI : uint32_t {
    eINACTIVE = 0, // RX Parser not in Idle state
    eACTIVE = 1, // RX Parser in Idle state
  };
  
  // Bit field definition.
  struct {
    /// read-write - Number of valid entries in the Instruction table This control indicates the number of valid entries in the Instruction Memory.
    uint32_t NVE : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Number of parsable entries in the Instruction table This control indicates the number of parsable entries in the Instruction Memory.
    uint32_t NPE : 8;
    uint32_t _reserved_1 : 7;
    /// read-only - RX Parser in Idle state This status bit is set to 1 when the Rx parser is in Idle State and waiting for a new packet for processing.
    eRXPI RXPI : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x80FF00FF; }
  static inline volatile MTL_RXP_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_RXP_CONTROL_STATUS*>(0x4043CCA0); }
};

// RXP Interrupt Control Status
//
union MTL_RXP_INTERRUPT_CONTROL_STATUS {
  
  enum class eNVEOVIS : uint32_t {
    eINACTIVE = 0, // Number of Valid Entries Overflow Interrupt Status not detected
    eACTIVE = 1, // Number of Valid Entries Overflow Interrupt Status detected
  };
  
  enum class eNPEOVIS : uint32_t {
    eINACTIVE = 0, // Number of Parsable Entries Overflow Interrupt Status not detected
    eACTIVE = 1, // Number of Parsable Entries Overflow Interrupt Status detected
  };
  
  enum class eFOOVIS : uint32_t {
    eINACTIVE = 0, // Frame Offset Overflow Interrupt Status not detected
    eACTIVE = 1, // Frame Offset Overflow Interrupt Status detected
  };
  
  enum class ePDRFIS : uint32_t {
    eINACTIVE = 0, // Packet Dropped due to RF Interrupt Status not detected
    eACTIVE = 1, // Packet Dropped due to RF Interrupt Status detected
  };
  
  enum class eNVEOVIE : uint32_t {
    eDISABLE = 0, // Number of Valid Entries Overflow Interrupt is disabled
    eENABLE = 1, // Number of Valid Entries Overflow Interrupt is enabled
  };
  
  enum class eNPEOVIE : uint32_t {
    eDISABLE = 0, // Number of Parsable Entries Overflow Interrupt is disabled
    eENABLE = 1, // Number of Parsable Entries Overflow Interrupt is enabled
  };
  
  enum class eFOOVIE : uint32_t {
    eDISABLE = 0, // Frame Offset Overflow Interrupt is disabled
    eENABLE = 1, // Frame Offset Overflow Interrupt is enabled
  };
  
  enum class ePDRFIE : uint32_t {
    eDISABLE = 0, // Packet Drop due to RF Interrupt is disabled
    eENABLE = 1, // Packet Drop due to RF Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Number of Valid Entries Overflow Interrupt Status While parsing if the Instruction address found to be more than NVE (Number of Valid Entries in MTL_RXP_CONTROL register), then this bit is set to 1.
    eNVEOVIS NVEOVIS : 1;
    /// read-write - Number of Parsable Entries Overflow Interrupt Status While parsing a packet if the number of parsed entries found to be more than NPE[] (Number of Parseable Entries in MTL_RXP_CONTROL register),then this bit is set to 1.
    eNPEOVIS NPEOVIS : 1;
    /// read-write - Frame Offset Overflow Interrupt Status While parsing if the Instruction table entry's 'Frame Offset' found to be more than EOF offset, then then this bit is set.
    eFOOVIS FOOVIS : 1;
    /// read-write - Packet Dropped due to RF Interrupt Status If the Rx Parser result says to drop the packet by setting RF=1 in the instruction memory, then this bit is set to 1.
    ePDRFIS PDRFIS : 1;
    uint32_t _reserved_0 : 12;
    /// read-write - Number of Valid Entries Overflow Interrupt Enable When this bit is set, the NVEOVIS interrupt is enabled.
    eNVEOVIE NVEOVIE : 1;
    /// read-write - Number of Parsable Entries Overflow Interrupt Enable When this bit is set, the NPEOVIS interrupt is enabled.
    eNPEOVIE NPEOVIE : 1;
    /// read-write - Frame Offset Overflow Interrupt Enable When this bit is set, the FOOVIS interrupt is enabled.
    eFOOVIE FOOVIE : 1;
    /// read-write - Packet Drop due to RF Interrupt Enable When this bit is set, the PDRFIS interrupt is enabled.
    ePDRFIE PDRFIE : 1;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXP_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_RXP_INTERRUPT_CONTROL_STATUS*>(0x4043CCA4); }
};

// RXP Drop Count
//
union MTL_RXP_DROP_CNT {
  
  enum class eRXPDCOVF : uint32_t {
    eINACTIVE = 0, // Rx Parser Drop count overflow not occurred
    eACTIVE = 1, // Rx Parser Drop count overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Drop count This 31-bit counter is implemented whenever a Rx Parser Drops a packet due to RF =1.
    uint32_t RXPDC : 31;
    /// read-only - Rx Parser Drop Counter Overflow Bit When set, this bit indicates that the MTL_RXP_DROP_CNT (RXPDC) Counter field crossed the maximum limit.
    eRXPDCOVF RXPDCOVF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_DROP_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXP_DROP_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXP_DROP_CNT*>(0x4043CCA8); }
};

// RXP Error Count
//
union MTL_RXP_ERROR_CNT {
  
  enum class eRXPECOVF : uint32_t {
    eINACTIVE = 0, // Rx Parser Error count overflow not occurred
    eACTIVE = 1, // Rx Parser Error count overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Error count This 31-bit counter is implemented whenever a Rx Parser encounters following Error scenarios - Entry address >= NVE[] - Number Parsed Entries >= NPE[] - Entry address > EOF data entry address The counter is cleared when the register is read.
    uint32_t RXPEC : 31;
    /// read-only - Rx Parser Error Counter Overflow Bit When set, this bit indicates that the MTL_RXP_ERROR_CNT (RXPEC) Counter field crossed the maximum limit.
    eRXPECOVF RXPECOVF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_ERROR_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXP_ERROR_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXP_ERROR_CNT*>(0x4043CCAC); }
};

// RXP Indirect Access Control and Status
//
union MTL_RXP_INDIRECT_ACC_CONTROL_STATUS {
  
  enum class eWRRDN : uint32_t {
    eREAD = 0, // Read operation to the Rx Parser Memory
    eWRITE = 1, // Write operation to the Rx Parser Memory
  };
  
  enum class eSTARTBUSY : uint32_t {
    eINACTIVE = 0, // hardware not busy
    eACTIVE = 1, // hardware is busy (Read/Write operation from/to the Rx Parser Memory)
  };
  
  // Bit field definition.
  struct {
    /// read-write - FRP Instruction Table Offset Address This field indicates the ADDR of the 32-bit entry in Rx parser instruction table.
    uint32_t ADDR : 10;
    uint32_t _reserved_0 : 6;
    /// read-write - Read Write Control When this bit is set to 1 indicates the write operation to the Rx Parser Memory.
    eWRRDN WRRDN : 1;
    uint32_t _reserved_1 : 14;
    /// read-write - FRP Instruction Table Access Busy When this bit is set to 1 by the software then it indicates to start the Read/Write operation from/to the Rx Parser Memory.
    eSTARTBUSY STARTBUSY : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_INDIRECT_ACC_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXP_INDIRECT_ACC_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_RXP_INDIRECT_ACC_CONTROL_STATUS*>(0x4043CCB0); }
};

// RXP Indirect Access Data
//
union MTL_RXP_INDIRECT_ACC_DATA {
  
  // Bit field definition.
  struct {
    /// read-write - FRP Instruction Table Write/Read Data Software should write this register before issuing any write command.
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXP_INDIRECT_ACC_DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXP_INDIRECT_ACC_DATA &Instance() { return *reinterpret_cast<volatile MTL_RXP_INDIRECT_ACC_DATA*>(0x4043CCB4); }
};

// Queue 0 Transmit Operation Mode
//
union MTL_TXQ0_OPERATION_MODE {
  
  enum class eFTQ : uint32_t {
    eDISABLE = 0, // Flush Transmit Queue is disabled
    eENABLE = 1, // Flush Transmit Queue is enabled
  };
  
  enum class eTSF : uint32_t {
    eDISABLE = 0, // Transmit Store and Forward is disabled
    eENABLE = 1, // Transmit Store and Forward is enabled
  };
  
  enum class eTXQEN : uint32_t {
    eDISABLE = 0, // Not enabled
    eEN_IF_AV = 1, // Enable in AV mode (Reserved in non-AV)
    eENABLE = 2, // Enabled
  };
  
  enum class eTTC : uint32_t {
    ebf_32BYTES = 0, // 32
    ebf_64BYTES = 1, // 64
    ebf_96BYTES = 2, // 96
    ebf_128BYTES = 3, // 128
    ebf_192BYTES = 4, // 192
    ebf_256BYTES = 5, // 256
    ebf_384BYTES = 6, // 384
    ebf_512BYTES = 7, // 512
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values.
    eFTQ FTQ : 1;
    /// read-write - Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue.
    eTSF TSF : 1;
    /// read-write - Transmit Queue Enable This field is used to enable/disable the transmit queue 0.
    eTXQEN TXQEN : 2;
    /// read-write - Transmit Threshold Control These bits control the threshold level of the MTL Tx Queue.
    eTTC TTC : 3;
    uint32_t _reserved_0 : 9;
    /// read-write - Transmit Queue Size This field indicates the size of the allocated Transmit queues in blocks of 256 bytes.
    uint32_t TQS : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ0_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ0_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_TXQ0_OPERATION_MODE*>(0x4043CD00); }
};

// Queue 0 Underflow Counter
//
union MTL_TXQ0_UNDERFLOW {
  
  enum class eUFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow not detected for Underflow Packet Counter
    eACTIVE = 1, // Overflow detected for Underflow Packet Counter
  };
  
  // Bit field definition.
  struct {
    /// read-only - Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx Queue Underflow.
    uint32_t UFFRMCNT : 11;
    /// read-only - Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count.
    eUFCNTOVF UFCNTOVF : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ0_UNDERFLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ0_UNDERFLOW &Instance() { return *reinterpret_cast<volatile MTL_TXQ0_UNDERFLOW*>(0x4043CD04); }
};

// Queue 0 Transmit Debug
//
union MTL_TXQ0_DEBUG {
  
  enum class eTXQPAUSED : uint32_t {
    eINACTIVE = 0, // Transmit Queue in Pause status is not detected
    eACTIVE = 1, // Transmit Queue in Pause status is detected
  };
  
  enum class eTRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD = 1, // Read state (transferring data to the MAC transmitter)
    eWAIT = 2, // Waiting for pending Tx Status from the MAC transmitter
    eFLUSH = 3, // Flushing the Tx queue because of the Packet Abort request from the MAC
  };
  
  enum class eTWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Write Controller status is not detected
    eACTIVE = 1, // MTL Tx Queue Write Controller status is detected
  };
  
  enum class eTXQSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Not Empty status is not detected
    eACTIVE = 1, // MTL Tx Queue Not Empty status is detected
  };
  
  enum class eTXSTSFSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Status FIFO Full status is not detected
    eACTIVE = 1, // MTL Tx Status FIFO Full status is detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx Queue is in the Pause condition (in the full-duplex only mode) because of the following: - Reception of the PFC packet for the priorities assigned to the Tx Queue when PFC is enabled - Reception of 802.
    eTXQPAUSED TXQPAUSED : 1;
    /// read-only - MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller:
    eTRCSTS TRCSTS : 2;
    /// read-only - MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx Queue Write Controller is active, and it is transferring the data to the Tx Queue.
    eTWCSTS TWCSTS : 1;
    /// read-only - MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx Queue is not empty and some data is left for transmission.
    eTXQSTS TXQSTS : 1;
    /// read-only - MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full.
    eTXSTSFSTS TXSTSFSTS : 1;
    uint32_t _reserved_0 : 10;
    /// read-only - Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx Queue.
    uint32_t PTXQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-only - Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue.
    uint32_t STXSTSF : 3;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ0_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ0_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_TXQ0_DEBUG*>(0x4043CD08); }
};

// Queue 0 ETS Status
//
union MTL_TXQ0_ETS_STATUS {
  
  // Bit field definition.
  struct {
    /// read-only - Average Bits per Slot This field contains the average transmitted bits per slot.
    uint32_t ABS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ0_ETS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ0_ETS_STATUS &Instance() { return *reinterpret_cast<volatile MTL_TXQ0_ETS_STATUS*>(0x4043CD14); }
};

// Queue 0 Quantum or Weights
//
union MTL_TXQ0_QUANTUM_WEIGHT {
  
  // Bit field definition.
  struct {
    /// read-write - Quantum or Weights When the DCB operation is enabled with DWRR algorithm for Queue 0 traffic, this field contains the quantum value in bytes to be added to credit during every queue scanning cycle.
    uint32_t ISCQW : 21;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ0_QUANTUM_WEIGHT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ0_QUANTUM_WEIGHT &Instance() { return *reinterpret_cast<volatile MTL_TXQ0_QUANTUM_WEIGHT*>(0x4043CD18); }
};

// Queue 0 Interrupt Control Status
//
union MTL_Q0_INTERRUPT_CONTROL_STATUS {
  
  enum class eTXUNFIS : uint32_t {
    eINACTIVE = 0, // Transmit Queue Underflow Interrupt Status not detected
    eACTIVE = 1, // Transmit Queue Underflow Interrupt Status detected
  };
  
  enum class eABPSIS : uint32_t {
    eINACTIVE = 0, // Average Bits Per Slot Interrupt Status not detected
    eACTIVE = 1, // Average Bits Per Slot Interrupt Status detected
  };
  
  enum class eTXUIE : uint32_t {
    eDISABLE = 0, // Transmit Queue Underflow Interrupt Status is disabled
    eENABLE = 1, // Transmit Queue Underflow Interrupt Status is enabled
  };
  
  enum class eABPSIE : uint32_t {
    eDISABLE = 0, // Average Bits Per Slot Interrupt is disabled
    eENABLE = 1, // Average Bits Per Slot Interrupt is enabled
  };
  
  enum class eRXOVFIS : uint32_t {
    eINACTIVE = 0, // Receive Queue Overflow Interrupt Status not detected
    eACTIVE = 1, // Receive Queue Overflow Interrupt Status detected
  };
  
  enum class eRXOIE : uint32_t {
    eDISABLE = 0, // Receive Queue Overflow Interrupt is disabled
    eENABLE = 1, // Receive Queue Overflow Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet.
    eTXUNFIS TXUNFIS : 1;
    /// read-write - Average Bits Per Slot Interrupt Status When set, this bit indicates that the MAC has updated the ABS value.
    eABPSIS ABPSIS : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled.
    eTXUIE TXUIE : 1;
    /// read-write - Average Bits Per Slot Interrupt Enable When this bit is set, the MAC asserts the sbd_intr_o or mci_intr_o interrupt when the average bits per slot status is updated.
    eABPSIE ABPSIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet.
    eRXOVFIS RXOVFIS : 1;
    uint32_t _reserved_2 : 7;
    /// read-write - Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled.
    eRXOIE RXOIE : 1;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_Q0_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_Q0_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_Q0_INTERRUPT_CONTROL_STATUS*>(0x4043CD2C); }
};

// Queue 0 Receive Operation Mode
//
union MTL_RXQ0_OPERATION_MODE {
  
  enum class eRTC : uint32_t {
    ebf_64BYTE = 0, // 64
    ebf_32BYTE = 1, // 32
    ebf_96BYTE = 2, // 96
    ebf_128BYTE = 3, // 128
  };
  
  enum class eFUP : uint32_t {
    eDISABLE = 0, // Forward Undersized Good Packets is disabled
    eENABLE = 1, // Forward Undersized Good Packets is enabled
  };
  
  enum class eFEP : uint32_t {
    eDISABLE = 0, // Forward Error Packets is disabled
    eENABLE = 1, // Forward Error Packets is enabled
  };
  
  enum class eRSF : uint32_t {
    eDISABLE = 0, // Receive Queue Store and Forward is disabled
    eENABLE = 1, // Receive Queue Store and Forward is enabled
  };
  
  enum class eDIS_TCP_EF : uint32_t {
    eENABLE = 0, // Dropping of TCP/IP Checksum Error Packets is enabled
    eDISABLE = 1, // Dropping of TCP/IP Checksum Error Packets is disabled
  };
  
  enum class eEHFC : uint32_t {
    eDISABLE = 0, // Hardware Flow Control is disabled
    eENABLE = 1, // Hardware Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold.
    eRTC RTC : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC.
    eFUP FUP : 1;
    /// read-write - Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, GMII_ER, watchdog timeout, or overflow).
    eFEP FEP : 1;
    /// read-write - Receive Queue Store and Forward When this bit is set, the DWC_ether_qos reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register.
    eRSF RSF : 1;
    /// read-write - Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine.
    eDIS_TCP_EF DIS_TCP_EF : 1;
    /// read-write - Enable Hardware Flow Control When this bit is set, the flow control signal operation, based on the fill-level of Rx queue, is enabled.
    eEHFC EHFC : 1;
    /// read-write - Threshold for Activating Flow Control (in half-duplex and full-duplex These bits control the threshold (fill-level of Rx queue) at which the flow control is activated: For more information on encoding for this field, see RFD.
    uint32_t RFA : 4;
    uint32_t _reserved_1 : 2;
    /// read-write - Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) These bits control the threshold (fill-level of Rx queue) at which the flow control is de-asserted after activation: - 0: Full minus 1 KB, that is, FULL 1 KB - 1: Full minus 1.
    uint32_t RFD : 4;
    uint32_t _reserved_2 : 2;
    /// read-write - Receive Queue Size This field indicates the size of the allocated Receive queues in blocks of 256 bytes.
    uint32_t RQS : 5;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ0_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ0_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_RXQ0_OPERATION_MODE*>(0x4043CD30); }
};

// Queue 0 Missed Packet and Overflow Counter
//
union MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT {
  
  enum class eOVFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow Counter overflow not detected
    eACTIVE = 1, // Overflow Counter overflow detected
  };
  
  enum class eMISCNTOVF : uint32_t {
    eINACTIVE = 0, // Missed Packet Counter overflow not detected
    eACTIVE = 1, // Missed Packet Counter overflow detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Overflow Packet Counter This field indicates the number of packets discarded by the DWC_ether_qos because of Receive queue overflow.
    uint32_t OVFPKTCNT : 11;
    /// read-only - Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit.
    eOVFCNTOVF OVFCNTOVF : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Missed Packet Counter This field indicates the number of packets missed by the DWC_ether_qos because the application asserted ari_pkt_flush_i[] for this queue.
    uint32_t MISPKTCNT : 11;
    /// read-only - Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit.
    eMISCNTOVF MISCNTOVF : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXQ0_MISSED_PACKET_OVERFLOW_CNT*>(0x4043CD34); }
};

// Queue 0 Receive Debug
//
union MTL_RXQ0_DEBUG {
  
  enum class eRWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Rx Queue Write Controller Active Status not detected
    eACTIVE = 1, // MTL Rx Queue Write Controller Active Status detected
  };
  
  enum class eRRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD_DATA = 1, // Reading packet data
    eREAD_STS = 2, // Reading packet status (or timestamp)
    eFLUSH = 3, // Flushing the packet data and status
  };
  
  enum class eRXQSTS : uint32_t {
    eEMPTY = 0, // Rx Queue empty
    eBLW_THR = 1, // Rx Queue fill-level below flow-control deactivate threshold
    eABV_THR = 2, // Rx Queue fill-level above flow-control activate threshold
    eFULL = 3, // Rx Queue full
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx Queue.
    eRWCSTS RWCSTS : 1;
    /// read-only - MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller:
    eRRCSTS RRCSTS : 2;
    uint32_t _reserved_0 : 1;
    /// read-only - MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx Queue:
    eRXQSTS RXQSTS : 2;
    uint32_t _reserved_1 : 10;
    /// read-only - Number of Packets in Receive Queue This field indicates the current number of packets in the Rx Queue.
    uint32_t PRXQ : 14;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ0_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ0_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_RXQ0_DEBUG*>(0x4043CD38); }
};

// Queue 0 Receive Control
//
union MTL_RXQ0_CONTROL {
  
  enum class eRXQ_FRM_ARBIT : uint32_t {
    eDISABLE = 0, // Receive Queue Packet Arbitration is disabled
    eENABLE = 1, // Receive Queue Packet Arbitration is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Weight This field indicates the weight assigned to the Rx Queue 0.
    uint32_t RXQ_WEGT : 3;
    /// read-write - Receive Queue Packet Arbitration When this bit is set, the DWC_ether_qos drives the packet data to the ARI interface such that the entire packet data of currently-selected queue is transmitted before switching to other queue.
    eRXQ_FRM_ARBIT RXQ_FRM_ARBIT : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ0_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ0_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_RXQ0_CONTROL*>(0x4043CD3C); }
};

// Queue 1 Transmit Operation Mode
//
union MTL_TXQ1_OPERATION_MODE {
  
  enum class eFTQ : uint32_t {
    eDISABLE = 0, // Flush Transmit Queue is disabled
    eENABLE = 1, // Flush Transmit Queue is enabled
  };
  
  enum class eTSF : uint32_t {
    eDISABLE = 0, // Transmit Store and Forward is disabled
    eENABLE = 1, // Transmit Store and Forward is enabled
  };
  
  enum class eTXQEN : uint32_t {
    eDISABLE = 0, // Not enabled
    eEN_IF_AV = 1, // Enable in AV mode (Reserved in non-AV)
    eENABLE = 2, // Enabled
  };
  
  enum class eTTC : uint32_t {
    ebf_32BYTES = 0, // 32
    ebf_64BYTES = 1, // 64
    ebf_96BYTES = 2, // 96
    ebf_128BYTES = 3, // 128
    ebf_192BYTES = 4, // 192
    ebf_256BYTES = 5, // 256
    ebf_384BYTES = 6, // 384
    ebf_512BYTES = 7, // 512
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values.
    eFTQ FTQ : 1;
    /// read-write - Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue.
    eTSF TSF : 1;
    /// read-write - Transmit Queue Enable This field is used to enable/disable the transmit queue 0.
    eTXQEN TXQEN : 2;
    /// read-write - Transmit Threshold Control These bits control the threshold level of the MTL Tx Queue.
    eTTC TTC : 3;
    uint32_t _reserved_0 : 9;
    /// read-write - Transmit Queue Size This field indicates the size of the allocated Transmit queues in blocks of 256 bytes.
    uint32_t TQS : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_OPERATION_MODE*>(0x4043CD40); }
};

// Queue 1 Underflow Counter
//
union MTL_TXQ1_UNDERFLOW {
  
  enum class eUFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow not detected for Underflow Packet Counter
    eACTIVE = 1, // Overflow detected for Underflow Packet Counter
  };
  
  // Bit field definition.
  struct {
    /// read-only - Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx Queue Underflow.
    uint32_t UFFRMCNT : 11;
    /// read-only - Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count.
    eUFCNTOVF UFCNTOVF : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_UNDERFLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_UNDERFLOW &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_UNDERFLOW*>(0x4043CD44); }
};

// Queue 1 Transmit Debug
//
union MTL_TXQ1_DEBUG {
  
  enum class eTXQPAUSED : uint32_t {
    eINACTIVE = 0, // Transmit Queue in Pause status is not detected
    eACTIVE = 1, // Transmit Queue in Pause status is detected
  };
  
  enum class eTRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD = 1, // Read state (transferring data to the MAC transmitter)
    eWAIT = 2, // Waiting for pending Tx Status from the MAC transmitter
    eFLUSH = 3, // Flushing the Tx queue because of the Packet Abort request from the MAC
  };
  
  enum class eTWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Write Controller status is not detected
    eACTIVE = 1, // MTL Tx Queue Write Controller status is detected
  };
  
  enum class eTXQSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Not Empty status is not detected
    eACTIVE = 1, // MTL Tx Queue Not Empty status is detected
  };
  
  enum class eTXSTSFSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Status FIFO Full status is not detected
    eACTIVE = 1, // MTL Tx Status FIFO Full status is detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx Queue is in the Pause condition (in the full-duplex only mode) because of the following: - Reception of the PFC packet for the priorities assigned to the Tx Queue when PFC is enabled - Reception of 802.
    eTXQPAUSED TXQPAUSED : 1;
    /// read-only - MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller:
    eTRCSTS TRCSTS : 2;
    /// read-only - MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx Queue Write Controller is active, and it is transferring the data to the Tx Queue.
    eTWCSTS TWCSTS : 1;
    /// read-only - MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx Queue is not empty and some data is left for transmission.
    eTXQSTS TXQSTS : 1;
    /// read-only - MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full.
    eTXSTSFSTS TXSTSFSTS : 1;
    uint32_t _reserved_0 : 10;
    /// read-only - Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx Queue.
    uint32_t PTXQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-only - Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue.
    uint32_t STXSTSF : 3;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_DEBUG*>(0x4043CD48); }
};

// Queue 1 ETS Control
//
union MTL_TXQ1_ETS_CONTROL {
  
  enum class eAVALG : uint32_t {
    eDISABLE = 0, // CBS Algorithm is disabled
    eENABLE = 1, // CBS Algorithm is enabled
  };
  
  enum class eCC : uint32_t {
    eDISABLE = 0, // Credit Control is disabled
    eENABLE = 1, // Credit Control is enabled
  };
  
  enum class eSLC : uint32_t {
    ebf_1_SLOT = 0, // 1 slot
    ebf_2_SLOT = 1, // 2 slots
    ebf_4_SLOT = 2, // 4 slots
    ebf_8_SLOT = 3, // 8 slots
    ebf_16_SLOT = 4, // 16 slots
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    /// read-write - AV Algorithm When Queue 1 is programmed for AV, this field configures the scheduling algorithm for this queue: This bit when set, indicates credit based shaper algorithm (CBS) is selected for Queue 1 traffic.
    eAVALG AVALG : 1;
    /// read-write - Credit Control When this bit is set, the accumulated credit parameter in the credit-based shaper algorithm logic is not reset to zero when there is positive credit and no packet to transmit in Channel 1.
    eCC CC : 1;
    /// read-write - Slot Count If the credit-based shaper algorithm is enabled, the software can program the number of slots (of duration programmed in DMA_CH[n]_Slot_Interval register) over which the average transmitted bits per slot, provided in the MTL_TXQ[N]_ETS_STATUS register, need to be computed for Queue.
    eSLC SLC : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_ETS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_ETS_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_ETS_CONTROL*>(0x4043CD50); }
};

// Queue 1 ETS Status
//
union MTL_TXQ1_ETS_STATUS {
  
  // Bit field definition.
  struct {
    /// read-only - Average Bits per Slot This field contains the average transmitted bits per slot.
    uint32_t ABS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_ETS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_ETS_STATUS &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_ETS_STATUS*>(0x4043CD54); }
};

// Queue 1 idleSlopeCredit, Quantum or Weights
//
union MTL_TXQ1_QUANTUM_WEIGHT {
  
  // Bit field definition.
  struct {
    /// read-write - idleSlopeCredit, Quantum or Weights - idleSlopeCredit When AV feature is enabled, this field contains the idleSlopeCredit value required for the credit-based shaper algorithm for Queue 1.
    uint32_t ISCQW : 21;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_QUANTUM_WEIGHT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_QUANTUM_WEIGHT &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_QUANTUM_WEIGHT*>(0x4043CD58); }
};

// Queue 1 sendSlopeCredit
//
union MTL_TXQ1_SENDSLOPECREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - sendSlopeCredit Value When AV operation is enabled, this field contains the sendSlopeCredit value required for credit-based shaper algorithm for Queue 1.
    uint32_t SSC : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_SENDSLOPECREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_SENDSLOPECREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_SENDSLOPECREDIT*>(0x4043CD5C); }
};

// Queue 1 hiCredit
//
union MTL_TXQ1_HICREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - hiCredit Value When the AV feature is enabled, this field contains the hiCredit value required for the credit-based shaper algorithm.
    uint32_t HC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_HICREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_HICREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_HICREDIT*>(0x4043CD60); }
};

// Queue 1 loCredit
//
union MTL_TXQ1_LOCREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - loCredit Value When AV operation is enabled, this field contains the loCredit value required for the credit-based shaper algorithm.
    uint32_t LC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ1_LOCREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ1_LOCREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ1_LOCREDIT*>(0x4043CD64); }
};

// Queue 1 Interrupt Control Status
//
union MTL_Q1_INTERRUPT_CONTROL_STATUS {
  
  enum class eTXUNFIS : uint32_t {
    eINACTIVE = 0, // Transmit Queue Underflow Interrupt Status not detected
    eACTIVE = 1, // Transmit Queue Underflow Interrupt Status detected
  };
  
  enum class eABPSIS : uint32_t {
    eINACTIVE = 0, // Average Bits Per Slot Interrupt Status not detected
    eACTIVE = 1, // Average Bits Per Slot Interrupt Status detected
  };
  
  enum class eTXUIE : uint32_t {
    eDISABLE = 0, // Transmit Queue Underflow Interrupt Status is disabled
    eENABLE = 1, // Transmit Queue Underflow Interrupt Status is enabled
  };
  
  enum class eABPSIE : uint32_t {
    eDISABLE = 0, // Average Bits Per Slot Interrupt is disabled
    eENABLE = 1, // Average Bits Per Slot Interrupt is enabled
  };
  
  enum class eRXOVFIS : uint32_t {
    eINACTIVE = 0, // Receive Queue Overflow Interrupt Status not detected
    eACTIVE = 1, // Receive Queue Overflow Interrupt Status detected
  };
  
  enum class eRXOIE : uint32_t {
    eDISABLE = 0, // Receive Queue Overflow Interrupt is disabled
    eENABLE = 1, // Receive Queue Overflow Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet.
    eTXUNFIS TXUNFIS : 1;
    /// read-write - Average Bits Per Slot Interrupt Status When set, this bit indicates that the MAC has updated the ABS value.
    eABPSIS ABPSIS : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled.
    eTXUIE TXUIE : 1;
    /// read-write - Average Bits Per Slot Interrupt Enable When this bit is set, the MAC asserts the sbd_intr_o or mci_intr_o interrupt when the average bits per slot status is updated.
    eABPSIE ABPSIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet.
    eRXOVFIS RXOVFIS : 1;
    uint32_t _reserved_2 : 7;
    /// read-write - Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled.
    eRXOIE RXOIE : 1;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_Q1_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_Q1_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_Q1_INTERRUPT_CONTROL_STATUS*>(0x4043CD6C); }
};

// Queue 1 Receive Operation Mode
//
union MTL_RXQ1_OPERATION_MODE {
  
  enum class eRTC : uint32_t {
    ebf_64BYTE = 0, // 64
    ebf_32BYTE = 1, // 32
    ebf_96BYTE = 2, // 96
    ebf_128BYTE = 3, // 128
  };
  
  enum class eFUP : uint32_t {
    eDISABLE = 0, // Forward Undersized Good Packets is disabled
    eENABLE = 1, // Forward Undersized Good Packets is enabled
  };
  
  enum class eFEP : uint32_t {
    eDISABLE = 0, // Forward Error Packets is disabled
    eENABLE = 1, // Forward Error Packets is enabled
  };
  
  enum class eRSF : uint32_t {
    eDISABLE = 0, // Receive Queue Store and Forward is disabled
    eENABLE = 1, // Receive Queue Store and Forward is enabled
  };
  
  enum class eDIS_TCP_EF : uint32_t {
    eENABLE = 0, // Dropping of TCP/IP Checksum Error Packets is enabled
    eDISABLE = 1, // Dropping of TCP/IP Checksum Error Packets is disabled
  };
  
  enum class eEHFC : uint32_t {
    eDISABLE = 0, // Hardware Flow Control is disabled
    eENABLE = 1, // Hardware Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold.
    eRTC RTC : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC.
    eFUP FUP : 1;
    /// read-write - Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, GMII_ER, watchdog timeout, or overflow).
    eFEP FEP : 1;
    /// read-write - Receive Queue Store and Forward When this bit is set, the DWC_ether_qos reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register.
    eRSF RSF : 1;
    /// read-write - Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine.
    eDIS_TCP_EF DIS_TCP_EF : 1;
    /// read-write - Enable Hardware Flow Control When this bit is set, the flow control signal operation, based on the fill-level of Rx queue, is enabled.
    eEHFC EHFC : 1;
    /// read-write - Threshold for Activating Flow Control (in half-duplex and full-duplex These bits control the threshold (fill-level of Rx queue) at which the flow control is activated: For more information on encoding for this field, see RFD.
    uint32_t RFA : 4;
    uint32_t _reserved_1 : 2;
    /// read-write - Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) These bits control the threshold (fill-level of Rx queue) at which the flow control is de-asserted after activation: - 0: Full minus 1 KB, that is, FULL 1 KB - 1: Full minus 1.
    uint32_t RFD : 4;
    uint32_t _reserved_2 : 2;
    /// read-write - Receive Queue Size This field indicates the size of the allocated Receive queues in blocks of 256 bytes.
    uint32_t RQS : 5;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ1_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ1_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_RXQ1_OPERATION_MODE*>(0x4043CD70); }
};

// Queue 1 Missed Packet and Overflow Counter
//
union MTL_RXQ1_MISSED_PACKET_OVERFLOW_CNT {
  
  enum class eOVFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow Counter overflow not detected
    eACTIVE = 1, // Overflow Counter overflow detected
  };
  
  enum class eMISCNTOVF : uint32_t {
    eINACTIVE = 0, // Missed Packet Counter overflow not detected
    eACTIVE = 1, // Missed Packet Counter overflow detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Overflow Packet Counter This field indicates the number of packets discarded by the DWC_ether_qos because of Receive queue overflow.
    uint32_t OVFPKTCNT : 11;
    /// read-only - Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit.
    eOVFCNTOVF OVFCNTOVF : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Missed Packet Counter This field indicates the number of packets missed by the DWC_ether_qos because the application asserted ari_pkt_flush_i[] for this queue.
    uint32_t MISPKTCNT : 11;
    /// read-only - Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit.
    eMISCNTOVF MISCNTOVF : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ1_MISSED_PACKET_OVERFLOW_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ1_MISSED_PACKET_OVERFLOW_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXQ1_MISSED_PACKET_OVERFLOW_CNT*>(0x4043CD74); }
};

// Queue 1 Receive Debug
//
union MTL_RXQ1_DEBUG {
  
  enum class eRWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Rx Queue Write Controller Active Status not detected
    eACTIVE = 1, // MTL Rx Queue Write Controller Active Status detected
  };
  
  enum class eRRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD_DATA = 1, // Reading packet data
    eREAD_STS = 2, // Reading packet status (or timestamp)
    eFLUSH = 3, // Flushing the packet data and status
  };
  
  enum class eRXQSTS : uint32_t {
    eEMPTY = 0, // Rx Queue empty
    eBLW_THR = 1, // Rx Queue fill-level below flow-control deactivate threshold
    eABV_THR = 2, // Rx Queue fill-level above flow-control activate threshold
    eFULL = 3, // Rx Queue full
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx Queue.
    eRWCSTS RWCSTS : 1;
    /// read-only - MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller:
    eRRCSTS RRCSTS : 2;
    uint32_t _reserved_0 : 1;
    /// read-only - MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx Queue:
    eRXQSTS RXQSTS : 2;
    uint32_t _reserved_1 : 10;
    /// read-only - Number of Packets in Receive Queue This field indicates the current number of packets in the Rx Queue.
    uint32_t PRXQ : 14;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ1_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ1_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_RXQ1_DEBUG*>(0x4043CD78); }
};

// Queue 1 Receive Control
//
union MTL_RXQ1_CONTROL {
  
  enum class eRXQ_FRM_ARBIT : uint32_t {
    eDISABLE = 0, // Receive Queue Packet Arbitration is disabled
    eENABLE = 1, // Receive Queue Packet Arbitration is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Weight This field indicates the weight assigned to the Rx Queue 0.
    uint32_t RXQ_WEGT : 3;
    /// read-write - Receive Queue Packet Arbitration When this bit is set, the DWC_ether_qos drives the packet data to the ARI interface such that the entire packet data of currently-selected queue is transmitted before switching to other queue.
    eRXQ_FRM_ARBIT RXQ_FRM_ARBIT : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ1_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ1_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_RXQ1_CONTROL*>(0x4043CD7C); }
};

// Queue 2 Transmit Operation Mode
//
union MTL_TXQ2_OPERATION_MODE {
  
  enum class eFTQ : uint32_t {
    eDISABLE = 0, // Flush Transmit Queue is disabled
    eENABLE = 1, // Flush Transmit Queue is enabled
  };
  
  enum class eTSF : uint32_t {
    eDISABLE = 0, // Transmit Store and Forward is disabled
    eENABLE = 1, // Transmit Store and Forward is enabled
  };
  
  enum class eTXQEN : uint32_t {
    eDISABLE = 0, // Not enabled
    eEN_IF_AV = 1, // Enable in AV mode (Reserved in non-AV)
    eENABLE = 2, // Enabled
  };
  
  enum class eTTC : uint32_t {
    ebf_32BYTES = 0, // 32
    ebf_64BYTES = 1, // 64
    ebf_96BYTES = 2, // 96
    ebf_128BYTES = 3, // 128
    ebf_192BYTES = 4, // 192
    ebf_256BYTES = 5, // 256
    ebf_384BYTES = 6, // 384
    ebf_512BYTES = 7, // 512
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values.
    eFTQ FTQ : 1;
    /// read-write - Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue.
    eTSF TSF : 1;
    /// read-write - Transmit Queue Enable This field is used to enable/disable the transmit queue 0.
    eTXQEN TXQEN : 2;
    /// read-write - Transmit Threshold Control These bits control the threshold level of the MTL Tx Queue.
    eTTC TTC : 3;
    uint32_t _reserved_0 : 9;
    /// read-write - Transmit Queue Size This field indicates the size of the allocated Transmit queues in blocks of 256 bytes.
    uint32_t TQS : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_OPERATION_MODE*>(0x4043CD80); }
};

// Queue 2 Underflow Counter
//
union MTL_TXQ2_UNDERFLOW {
  
  enum class eUFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow not detected for Underflow Packet Counter
    eACTIVE = 1, // Overflow detected for Underflow Packet Counter
  };
  
  // Bit field definition.
  struct {
    /// read-only - Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx Queue Underflow.
    uint32_t UFFRMCNT : 11;
    /// read-only - Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count.
    eUFCNTOVF UFCNTOVF : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_UNDERFLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_UNDERFLOW &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_UNDERFLOW*>(0x4043CD84); }
};

// Queue 2 Transmit Debug
//
union MTL_TXQ2_DEBUG {
  
  enum class eTXQPAUSED : uint32_t {
    eINACTIVE = 0, // Transmit Queue in Pause status is not detected
    eACTIVE = 1, // Transmit Queue in Pause status is detected
  };
  
  enum class eTRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD = 1, // Read state (transferring data to the MAC transmitter)
    eWAIT = 2, // Waiting for pending Tx Status from the MAC transmitter
    eFLUSH = 3, // Flushing the Tx queue because of the Packet Abort request from the MAC
  };
  
  enum class eTWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Write Controller status is not detected
    eACTIVE = 1, // MTL Tx Queue Write Controller status is detected
  };
  
  enum class eTXQSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Not Empty status is not detected
    eACTIVE = 1, // MTL Tx Queue Not Empty status is detected
  };
  
  enum class eTXSTSFSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Status FIFO Full status is not detected
    eACTIVE = 1, // MTL Tx Status FIFO Full status is detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx Queue is in the Pause condition (in the full-duplex only mode) because of the following: - Reception of the PFC packet for the priorities assigned to the Tx Queue when PFC is enabled - Reception of 802.
    eTXQPAUSED TXQPAUSED : 1;
    /// read-only - MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller:
    eTRCSTS TRCSTS : 2;
    /// read-only - MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx Queue Write Controller is active, and it is transferring the data to the Tx Queue.
    eTWCSTS TWCSTS : 1;
    /// read-only - MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx Queue is not empty and some data is left for transmission.
    eTXQSTS TXQSTS : 1;
    /// read-only - MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full.
    eTXSTSFSTS TXSTSFSTS : 1;
    uint32_t _reserved_0 : 10;
    /// read-only - Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx Queue.
    uint32_t PTXQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-only - Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue.
    uint32_t STXSTSF : 3;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_DEBUG*>(0x4043CD88); }
};

// Queue 2 ETS Control
//
union MTL_TXQ2_ETS_CONTROL {
  
  enum class eAVALG : uint32_t {
    eDISABLE = 0, // CBS Algorithm is disabled
    eENABLE = 1, // CBS Algorithm is enabled
  };
  
  enum class eCC : uint32_t {
    eDISABLE = 0, // Credit Control is disabled
    eENABLE = 1, // Credit Control is enabled
  };
  
  enum class eSLC : uint32_t {
    ebf_1_SLOT = 0, // 1 slot
    ebf_2_SLOT = 1, // 2 slots
    ebf_4_SLOT = 2, // 4 slots
    ebf_8_SLOT = 3, // 8 slots
    ebf_16_SLOT = 4, // 16 slots
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    /// read-write - AV Algorithm When Queue 1 is programmed for AV, this field configures the scheduling algorithm for this queue: This bit when set, indicates credit based shaper algorithm (CBS) is selected for Queue 1 traffic.
    eAVALG AVALG : 1;
    /// read-write - Credit Control When this bit is set, the accumulated credit parameter in the credit-based shaper algorithm logic is not reset to zero when there is positive credit and no packet to transmit in Channel 1.
    eCC CC : 1;
    /// read-write - Slot Count If the credit-based shaper algorithm is enabled, the software can program the number of slots (of duration programmed in DMA_CH[N]_SLOT_INTERVAL register) over which the average transmitted bits per slot, provided in the MTL_TXQ[N]_ETS_STATUS register, need to be computed for Queue.
    eSLC SLC : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_ETS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_ETS_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_ETS_CONTROL*>(0x4043CD90); }
};

// Queue 2 ETS Status
//
union MTL_TXQ2_ETS_STATUS {
  
  // Bit field definition.
  struct {
    /// read-only - Average Bits per Slot This field contains the average transmitted bits per slot.
    uint32_t ABS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_ETS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_ETS_STATUS &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_ETS_STATUS*>(0x4043CD94); }
};

// Queue 2 idleSlopeCredit, Quantum or Weights
//
union MTL_TXQ2_QUANTUM_WEIGHT {
  
  // Bit field definition.
  struct {
    /// read-write - idleSlopeCredit, Quantum or Weights - idleSlopeCredit When AV feature is enabled, this field contains the idleSlopeCredit value required for the credit-based shaper algorithm for Queue 1.
    uint32_t ISCQW : 21;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_QUANTUM_WEIGHT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_QUANTUM_WEIGHT &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_QUANTUM_WEIGHT*>(0x4043CD98); }
};

// Queue 2 sendSlopeCredit
//
union MTL_TXQ2_SENDSLOPECREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - sendSlopeCredit Value When AV operation is enabled, this field contains the sendSlopeCredit value required for credit-based shaper algorithm for Queue 1.
    uint32_t SSC : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_SENDSLOPECREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_SENDSLOPECREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_SENDSLOPECREDIT*>(0x4043CD9C); }
};

// Queue 2 hiCredit
//
union MTL_TXQ2_HICREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - hiCredit Value When the AV feature is enabled, this field contains the hiCredit value required for the credit-based shaper algorithm.
    uint32_t HC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_HICREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_HICREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_HICREDIT*>(0x4043CDA0); }
};

// Queue 2 loCredit
//
union MTL_TXQ2_LOCREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - loCredit Value When AV operation is enabled, this field contains the loCredit value required for the credit-based shaper algorithm.
    uint32_t LC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ2_LOCREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ2_LOCREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ2_LOCREDIT*>(0x4043CDA4); }
};

// Queue 2 Interrupt Control Status
//
union MTL_Q2_INTERRUPT_CONTROL_STATUS {
  
  enum class eTXUNFIS : uint32_t {
    eINACTIVE = 0, // Transmit Queue Underflow Interrupt Status not detected
    eACTIVE = 1, // Transmit Queue Underflow Interrupt Status detected
  };
  
  enum class eABPSIS : uint32_t {
    eINACTIVE = 0, // Average Bits Per Slot Interrupt Status not detected
    eACTIVE = 1, // Average Bits Per Slot Interrupt Status detected
  };
  
  enum class eTXUIE : uint32_t {
    eDISABLE = 0, // Transmit Queue Underflow Interrupt Status is disabled
    eENABLE = 1, // Transmit Queue Underflow Interrupt Status is enabled
  };
  
  enum class eABPSIE : uint32_t {
    eDISABLE = 0, // Average Bits Per Slot Interrupt is disabled
    eENABLE = 1, // Average Bits Per Slot Interrupt is enabled
  };
  
  enum class eRXOVFIS : uint32_t {
    eINACTIVE = 0, // Receive Queue Overflow Interrupt Status not detected
    eACTIVE = 1, // Receive Queue Overflow Interrupt Status detected
  };
  
  enum class eRXOIE : uint32_t {
    eDISABLE = 0, // Receive Queue Overflow Interrupt is disabled
    eENABLE = 1, // Receive Queue Overflow Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet.
    eTXUNFIS TXUNFIS : 1;
    /// read-write - Average Bits Per Slot Interrupt Status When set, this bit indicates that the MAC has updated the ABS value.
    eABPSIS ABPSIS : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled.
    eTXUIE TXUIE : 1;
    /// read-write - Average Bits Per Slot Interrupt Enable When this bit is set, the MAC asserts the sbd_intr_o or mci_intr_o interrupt when the average bits per slot status is updated.
    eABPSIE ABPSIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet.
    eRXOVFIS RXOVFIS : 1;
    uint32_t _reserved_2 : 7;
    /// read-write - Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled.
    eRXOIE RXOIE : 1;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_Q2_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_Q2_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_Q2_INTERRUPT_CONTROL_STATUS*>(0x4043CDAC); }
};

// Queue 2 Receive Operation Mode
//
union MTL_RXQ2_OPERATION_MODE {
  
  enum class eRTC : uint32_t {
    ebf_64BYTE = 0, // 64
    ebf_32BYTE = 1, // 32
    ebf_96BYTE = 2, // 96
    ebf_128BYTE = 3, // 128
  };
  
  enum class eFUP : uint32_t {
    eDISABLE = 0, // Forward Undersized Good Packets is disabled
    eENABLE = 1, // Forward Undersized Good Packets is enabled
  };
  
  enum class eFEP : uint32_t {
    eDISABLE = 0, // Forward Error Packets is disabled
    eENABLE = 1, // Forward Error Packets is enabled
  };
  
  enum class eRSF : uint32_t {
    eDISABLE = 0, // Receive Queue Store and Forward is disabled
    eENABLE = 1, // Receive Queue Store and Forward is enabled
  };
  
  enum class eDIS_TCP_EF : uint32_t {
    eENABLE = 0, // Dropping of TCP/IP Checksum Error Packets is enabled
    eDISABLE = 1, // Dropping of TCP/IP Checksum Error Packets is disabled
  };
  
  enum class eEHFC : uint32_t {
    eDISABLE = 0, // Hardware Flow Control is disabled
    eENABLE = 1, // Hardware Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold.
    eRTC RTC : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC.
    eFUP FUP : 1;
    /// read-write - Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, GMII_ER, watchdog timeout, or overflow).
    eFEP FEP : 1;
    /// read-write - Receive Queue Store and Forward When this bit is set, the DWC_ether_qos reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register.
    eRSF RSF : 1;
    /// read-write - Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine.
    eDIS_TCP_EF DIS_TCP_EF : 1;
    /// read-write - Enable Hardware Flow Control When this bit is set, the flow control signal operation, based on the fill-level of Rx queue, is enabled.
    eEHFC EHFC : 1;
    /// read-write - Threshold for Activating Flow Control (in half-duplex and full-duplex These bits control the threshold (fill-level of Rx queue) at which the flow control is activated: For more information on encoding for this field, see RFD.
    uint32_t RFA : 4;
    uint32_t _reserved_1 : 2;
    /// read-write - Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) These bits control the threshold (fill-level of Rx queue) at which the flow control is de-asserted after activation: - 0: Full minus 1 KB, that is, FULL 1 KB - 1: Full minus 1.
    uint32_t RFD : 4;
    uint32_t _reserved_2 : 2;
    /// read-write - Receive Queue Size This field indicates the size of the allocated Receive queues in blocks of 256 bytes.
    uint32_t RQS : 5;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ2_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ2_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_RXQ2_OPERATION_MODE*>(0x4043CDB0); }
};

// Queue 2 Missed Packet and Overflow Counter
//
union MTL_RXQ2_MISSED_PACKET_OVERFLOW_CNT {
  
  enum class eOVFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow Counter overflow not detected
    eACTIVE = 1, // Overflow Counter overflow detected
  };
  
  enum class eMISCNTOVF : uint32_t {
    eINACTIVE = 0, // Missed Packet Counter overflow not detected
    eACTIVE = 1, // Missed Packet Counter overflow detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Overflow Packet Counter This field indicates the number of packets discarded by the DWC_ether_qos because of Receive queue overflow.
    uint32_t OVFPKTCNT : 11;
    /// read-only - Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit.
    eOVFCNTOVF OVFCNTOVF : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Missed Packet Counter This field indicates the number of packets missed by the DWC_ether_qos because the application asserted ari_pkt_flush_i[] for this queue.
    uint32_t MISPKTCNT : 11;
    /// read-only - Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit.
    eMISCNTOVF MISCNTOVF : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ2_MISSED_PACKET_OVERFLOW_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ2_MISSED_PACKET_OVERFLOW_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXQ2_MISSED_PACKET_OVERFLOW_CNT*>(0x4043CDB4); }
};

// Queue 2 Receive Debug
//
union MTL_RXQ2_DEBUG {
  
  enum class eRWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Rx Queue Write Controller Active Status not detected
    eACTIVE = 1, // MTL Rx Queue Write Controller Active Status detected
  };
  
  enum class eRRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD_DATA = 1, // Reading packet data
    eREAD_STS = 2, // Reading packet status (or timestamp)
    eFLUSH = 3, // Flushing the packet data and status
  };
  
  enum class eRXQSTS : uint32_t {
    eEMPTY = 0, // Rx Queue empty
    eBLW_THR = 1, // Rx Queue fill-level below flow-control deactivate threshold
    eABV_THR = 2, // Rx Queue fill-level above flow-control activate threshold
    eFULL = 3, // Rx Queue full
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx Queue.
    eRWCSTS RWCSTS : 1;
    /// read-only - MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller:
    eRRCSTS RRCSTS : 2;
    uint32_t _reserved_0 : 1;
    /// read-only - MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx Queue:
    eRXQSTS RXQSTS : 2;
    uint32_t _reserved_1 : 10;
    /// read-only - Number of Packets in Receive Queue This field indicates the current number of packets in the Rx Queue.
    uint32_t PRXQ : 14;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ2_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ2_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_RXQ2_DEBUG*>(0x4043CDB8); }
};

// Queue 2 Receive Control
//
union MTL_RXQ2_CONTROL {
  
  enum class eRXQ_FRM_ARBIT : uint32_t {
    eDISABLE = 0, // Receive Queue Packet Arbitration is disabled
    eENABLE = 1, // Receive Queue Packet Arbitration is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Weight This field indicates the weight assigned to the Rx Queue 0.
    uint32_t RXQ_WEGT : 3;
    /// read-write - Receive Queue Packet Arbitration When this bit is set, the DWC_ether_qos drives the packet data to the ARI interface such that the entire packet data of currently-selected queue is transmitted before switching to other queue.
    eRXQ_FRM_ARBIT RXQ_FRM_ARBIT : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ2_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ2_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_RXQ2_CONTROL*>(0x4043CDBC); }
};

// Queue 3 Transmit Operation Mode
//
union MTL_TXQ3_OPERATION_MODE {
  
  enum class eFTQ : uint32_t {
    eDISABLE = 0, // Flush Transmit Queue is disabled
    eENABLE = 1, // Flush Transmit Queue is enabled
  };
  
  enum class eTSF : uint32_t {
    eDISABLE = 0, // Transmit Store and Forward is disabled
    eENABLE = 1, // Transmit Store and Forward is enabled
  };
  
  enum class eTXQEN : uint32_t {
    eDISABLE = 0, // Not enabled
    eEN_IF_AV = 1, // Enable in AV mode (Reserved in non-AV)
    eENABLE = 2, // Enabled
  };
  
  enum class eTTC : uint32_t {
    ebf_32BYTES = 0, // 32
    ebf_64BYTES = 1, // 64
    ebf_96BYTES = 2, // 96
    ebf_128BYTES = 3, // 128
    ebf_192BYTES = 4, // 192
    ebf_256BYTES = 5, // 256
    ebf_384BYTES = 6, // 384
    ebf_512BYTES = 7, // 512
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values.
    eFTQ FTQ : 1;
    /// read-write - Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue.
    eTSF TSF : 1;
    /// read-write - Transmit Queue Enable This field is used to enable/disable the transmit queue 0.
    eTXQEN TXQEN : 2;
    /// read-write - Transmit Threshold Control These bits control the threshold level of the MTL Tx Queue.
    eTTC TTC : 3;
    uint32_t _reserved_0 : 9;
    /// read-write - Transmit Queue Size This field indicates the size of the allocated Transmit queues in blocks of 256 bytes.
    uint32_t TQS : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_OPERATION_MODE*>(0x4043CDC0); }
};

// Queue 3 Underflow Counter
//
union MTL_TXQ3_UNDERFLOW {
  
  enum class eUFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow not detected for Underflow Packet Counter
    eACTIVE = 1, // Overflow detected for Underflow Packet Counter
  };
  
  // Bit field definition.
  struct {
    /// read-only - Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx Queue Underflow.
    uint32_t UFFRMCNT : 11;
    /// read-only - Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count.
    eUFCNTOVF UFCNTOVF : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_UNDERFLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_UNDERFLOW &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_UNDERFLOW*>(0x4043CDC4); }
};

// Queue 3 Transmit Debug
//
union MTL_TXQ3_DEBUG {
  
  enum class eTXQPAUSED : uint32_t {
    eINACTIVE = 0, // Transmit Queue in Pause status is not detected
    eACTIVE = 1, // Transmit Queue in Pause status is detected
  };
  
  enum class eTRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD = 1, // Read state (transferring data to the MAC transmitter)
    eWAIT = 2, // Waiting for pending Tx Status from the MAC transmitter
    eFLUSH = 3, // Flushing the Tx queue because of the Packet Abort request from the MAC
  };
  
  enum class eTWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Write Controller status is not detected
    eACTIVE = 1, // MTL Tx Queue Write Controller status is detected
  };
  
  enum class eTXQSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Not Empty status is not detected
    eACTIVE = 1, // MTL Tx Queue Not Empty status is detected
  };
  
  enum class eTXSTSFSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Status FIFO Full status is not detected
    eACTIVE = 1, // MTL Tx Status FIFO Full status is detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx Queue is in the Pause condition (in the full-duplex only mode) because of the following: - Reception of the PFC packet for the priorities assigned to the Tx Queue when PFC is enabled - Reception of 802.
    eTXQPAUSED TXQPAUSED : 1;
    /// read-only - MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller:
    eTRCSTS TRCSTS : 2;
    /// read-only - MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx Queue Write Controller is active, and it is transferring the data to the Tx Queue.
    eTWCSTS TWCSTS : 1;
    /// read-only - MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx Queue is not empty and some data is left for transmission.
    eTXQSTS TXQSTS : 1;
    /// read-only - MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full.
    eTXSTSFSTS TXSTSFSTS : 1;
    uint32_t _reserved_0 : 10;
    /// read-only - Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx Queue.
    uint32_t PTXQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-only - Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue.
    uint32_t STXSTSF : 3;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_DEBUG*>(0x4043CDC8); }
};

// Queue 3 ETS Control
//
union MTL_TXQ3_ETS_CONTROL {
  
  enum class eAVALG : uint32_t {
    eDISABLE = 0, // CBS Algorithm is disabled
    eENABLE = 1, // CBS Algorithm is enabled
  };
  
  enum class eCC : uint32_t {
    eDISABLE = 0, // Credit Control is disabled
    eENABLE = 1, // Credit Control is enabled
  };
  
  enum class eSLC : uint32_t {
    ebf_1_SLOT = 0, // 1 slot
    ebf_2_SLOT = 1, // 2 slots
    ebf_4_SLOT = 2, // 4 slots
    ebf_8_SLOT = 3, // 8 slots
    ebf_16_SLOT = 4, // 16 slots
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    /// read-write - AV Algorithm When Queue 1 is programmed for AV, this field configures the scheduling algorithm for this queue: This bit when set, indicates credit based shaper algorithm (CBS) is selected for Queue 1 traffic.
    eAVALG AVALG : 1;
    /// read-write - Credit Control When this bit is set, the accumulated credit parameter in the credit-based shaper algorithm logic is not reset to zero when there is positive credit and no packet to transmit in Channel 1.
    eCC CC : 1;
    /// read-write - Slot Count If the credit-based shaper algorithm is enabled, the software can program the number of slots (of duration programmed in DMA_CH[N]_SLOT_INTERVAL register) over which the average transmitted bits per slot, provided in the MTL_TXQ[N]_ETS_STATUS register, need to be computed for Queue.
    eSLC SLC : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_ETS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_ETS_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_ETS_CONTROL*>(0x4043CDD0); }
};

// Queue 3 ETS Status
//
union MTL_TXQ3_ETS_STATUS {
  
  // Bit field definition.
  struct {
    /// read-only - Average Bits per Slot This field contains the average transmitted bits per slot.
    uint32_t ABS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_ETS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_ETS_STATUS &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_ETS_STATUS*>(0x4043CDD4); }
};

// Queue 3 idleSlopeCredit, Quantum or Weights
//
union MTL_TXQ3_QUANTUM_WEIGHT {
  
  // Bit field definition.
  struct {
    /// read-write - idleSlopeCredit, Quantum or Weights - idleSlopeCredit When AV feature is enabled, this field contains the idleSlopeCredit value required for the credit-based shaper algorithm for Queue 1.
    uint32_t ISCQW : 21;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_QUANTUM_WEIGHT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_QUANTUM_WEIGHT &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_QUANTUM_WEIGHT*>(0x4043CDD8); }
};

// Queue 3 sendSlopeCredit
//
union MTL_TXQ3_SENDSLOPECREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - sendSlopeCredit Value When AV operation is enabled, this field contains the sendSlopeCredit value required for credit-based shaper algorithm for Queue 1.
    uint32_t SSC : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_SENDSLOPECREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_SENDSLOPECREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_SENDSLOPECREDIT*>(0x4043CDDC); }
};

// Queue 3 hiCredit
//
union MTL_TXQ3_HICREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - hiCredit Value When the AV feature is enabled, this field contains the hiCredit value required for the credit-based shaper algorithm.
    uint32_t HC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_HICREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_HICREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_HICREDIT*>(0x4043CDE0); }
};

// Queue 3 loCredit
//
union MTL_TXQ3_LOCREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - loCredit Value When AV operation is enabled, this field contains the loCredit value required for the credit-based shaper algorithm.
    uint32_t LC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ3_LOCREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ3_LOCREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ3_LOCREDIT*>(0x4043CDE4); }
};

// Queue 3 Interrupt Control Status
//
union MTL_Q3_INTERRUPT_CONTROL_STATUS {
  
  enum class eTXUNFIS : uint32_t {
    eINACTIVE = 0, // Transmit Queue Underflow Interrupt Status not detected
    eACTIVE = 1, // Transmit Queue Underflow Interrupt Status detected
  };
  
  enum class eABPSIS : uint32_t {
    eINACTIVE = 0, // Average Bits Per Slot Interrupt Status not detected
    eACTIVE = 1, // Average Bits Per Slot Interrupt Status detected
  };
  
  enum class eTXUIE : uint32_t {
    eDISABLE = 0, // Transmit Queue Underflow Interrupt Status is disabled
    eENABLE = 1, // Transmit Queue Underflow Interrupt Status is enabled
  };
  
  enum class eABPSIE : uint32_t {
    eDISABLE = 0, // Average Bits Per Slot Interrupt is disabled
    eENABLE = 1, // Average Bits Per Slot Interrupt is enabled
  };
  
  enum class eRXOVFIS : uint32_t {
    eINACTIVE = 0, // Receive Queue Overflow Interrupt Status not detected
    eACTIVE = 1, // Receive Queue Overflow Interrupt Status detected
  };
  
  enum class eRXOIE : uint32_t {
    eDISABLE = 0, // Receive Queue Overflow Interrupt is disabled
    eENABLE = 1, // Receive Queue Overflow Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet.
    eTXUNFIS TXUNFIS : 1;
    /// read-write - Average Bits Per Slot Interrupt Status When set, this bit indicates that the MAC has updated the ABS value.
    eABPSIS ABPSIS : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled.
    eTXUIE TXUIE : 1;
    /// read-write - Average Bits Per Slot Interrupt Enable When this bit is set, the MAC asserts the sbd_intr_o or mci_intr_o interrupt when the average bits per slot status is updated.
    eABPSIE ABPSIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet.
    eRXOVFIS RXOVFIS : 1;
    uint32_t _reserved_2 : 7;
    /// read-write - Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled.
    eRXOIE RXOIE : 1;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_Q3_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_Q3_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_Q3_INTERRUPT_CONTROL_STATUS*>(0x4043CDEC); }
};

// Queue 3 Receive Operation Mode
//
union MTL_RXQ3_OPERATION_MODE {
  
  enum class eRTC : uint32_t {
    ebf_64BYTE = 0, // 64
    ebf_32BYTE = 1, // 32
    ebf_96BYTE = 2, // 96
    ebf_128BYTE = 3, // 128
  };
  
  enum class eFUP : uint32_t {
    eDISABLE = 0, // Forward Undersized Good Packets is disabled
    eENABLE = 1, // Forward Undersized Good Packets is enabled
  };
  
  enum class eFEP : uint32_t {
    eDISABLE = 0, // Forward Error Packets is disabled
    eENABLE = 1, // Forward Error Packets is enabled
  };
  
  enum class eRSF : uint32_t {
    eDISABLE = 0, // Receive Queue Store and Forward is disabled
    eENABLE = 1, // Receive Queue Store and Forward is enabled
  };
  
  enum class eDIS_TCP_EF : uint32_t {
    eENABLE = 0, // Dropping of TCP/IP Checksum Error Packets is enabled
    eDISABLE = 1, // Dropping of TCP/IP Checksum Error Packets is disabled
  };
  
  enum class eEHFC : uint32_t {
    eDISABLE = 0, // Hardware Flow Control is disabled
    eENABLE = 1, // Hardware Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold.
    eRTC RTC : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC.
    eFUP FUP : 1;
    /// read-write - Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, GMII_ER, watchdog timeout, or overflow).
    eFEP FEP : 1;
    /// read-write - Receive Queue Store and Forward When this bit is set, the DWC_ether_qos reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register.
    eRSF RSF : 1;
    /// read-write - Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine.
    eDIS_TCP_EF DIS_TCP_EF : 1;
    /// read-write - Enable Hardware Flow Control When this bit is set, the flow control signal operation, based on the fill-level of Rx queue, is enabled.
    eEHFC EHFC : 1;
    /// read-write - Threshold for Activating Flow Control (in half-duplex and full-duplex These bits control the threshold (fill-level of Rx queue) at which the flow control is activated: For more information on encoding for this field, see RFD.
    uint32_t RFA : 4;
    uint32_t _reserved_1 : 2;
    /// read-write - Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) These bits control the threshold (fill-level of Rx queue) at which the flow control is de-asserted after activation: - 0: Full minus 1 KB, that is, FULL 1 KB - 1: Full minus 1.
    uint32_t RFD : 4;
    uint32_t _reserved_2 : 2;
    /// read-write - Receive Queue Size This field indicates the size of the allocated Receive queues in blocks of 256 bytes.
    uint32_t RQS : 5;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ3_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ3_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_RXQ3_OPERATION_MODE*>(0x4043CDF0); }
};

// Queue 3 Missed Packet and Overflow Counter
//
union MTL_RXQ3_MISSED_PACKET_OVERFLOW_CNT {
  
  enum class eOVFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow Counter overflow not detected
    eACTIVE = 1, // Overflow Counter overflow detected
  };
  
  enum class eMISCNTOVF : uint32_t {
    eINACTIVE = 0, // Missed Packet Counter overflow not detected
    eACTIVE = 1, // Missed Packet Counter overflow detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Overflow Packet Counter This field indicates the number of packets discarded by the DWC_ether_qos because of Receive queue overflow.
    uint32_t OVFPKTCNT : 11;
    /// read-only - Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit.
    eOVFCNTOVF OVFCNTOVF : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Missed Packet Counter This field indicates the number of packets missed by the DWC_ether_qos because the application asserted ari_pkt_flush_i[] for this queue.
    uint32_t MISPKTCNT : 11;
    /// read-only - Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit.
    eMISCNTOVF MISCNTOVF : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ3_MISSED_PACKET_OVERFLOW_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ3_MISSED_PACKET_OVERFLOW_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXQ3_MISSED_PACKET_OVERFLOW_CNT*>(0x4043CDF4); }
};

// Queue 3 Receive Debug
//
union MTL_RXQ3_DEBUG {
  
  enum class eRWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Rx Queue Write Controller Active Status not detected
    eACTIVE = 1, // MTL Rx Queue Write Controller Active Status detected
  };
  
  enum class eRRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD_DATA = 1, // Reading packet data
    eREAD_STS = 2, // Reading packet status (or timestamp)
    eFLUSH = 3, // Flushing the packet data and status
  };
  
  enum class eRXQSTS : uint32_t {
    eEMPTY = 0, // Rx Queue empty
    eBLW_THR = 1, // Rx Queue fill-level below flow-control deactivate threshold
    eABV_THR = 2, // Rx Queue fill-level above flow-control activate threshold
    eFULL = 3, // Rx Queue full
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx Queue.
    eRWCSTS RWCSTS : 1;
    /// read-only - MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller:
    eRRCSTS RRCSTS : 2;
    uint32_t _reserved_0 : 1;
    /// read-only - MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx Queue:
    eRXQSTS RXQSTS : 2;
    uint32_t _reserved_1 : 10;
    /// read-only - Number of Packets in Receive Queue This field indicates the current number of packets in the Rx Queue.
    uint32_t PRXQ : 14;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ3_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ3_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_RXQ3_DEBUG*>(0x4043CDF8); }
};

// Queue 3 Receive Control
//
union MTL_RXQ3_CONTROL {
  
  enum class eRXQ_FRM_ARBIT : uint32_t {
    eDISABLE = 0, // Receive Queue Packet Arbitration is disabled
    eENABLE = 1, // Receive Queue Packet Arbitration is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Weight This field indicates the weight assigned to the Rx Queue 0.
    uint32_t RXQ_WEGT : 3;
    /// read-write - Receive Queue Packet Arbitration When this bit is set, the DWC_ether_qos drives the packet data to the ARI interface such that the entire packet data of currently-selected queue is transmitted before switching to other queue.
    eRXQ_FRM_ARBIT RXQ_FRM_ARBIT : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ3_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ3_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_RXQ3_CONTROL*>(0x4043CDFC); }
};

// Queue 4 Transmit Operation Mode
//
union MTL_TXQ4_OPERATION_MODE {
  
  enum class eFTQ : uint32_t {
    eDISABLE = 0, // Flush Transmit Queue is disabled
    eENABLE = 1, // Flush Transmit Queue is enabled
  };
  
  enum class eTSF : uint32_t {
    eDISABLE = 0, // Transmit Store and Forward is disabled
    eENABLE = 1, // Transmit Store and Forward is enabled
  };
  
  enum class eTXQEN : uint32_t {
    eDISABLE = 0, // Not enabled
    eEN_IF_AV = 1, // Enable in AV mode (Reserved in non-AV)
    eENABLE = 2, // Enabled
  };
  
  enum class eTTC : uint32_t {
    ebf_32BYTES = 0, // 32
    ebf_64BYTES = 1, // 64
    ebf_96BYTES = 2, // 96
    ebf_128BYTES = 3, // 128
    ebf_192BYTES = 4, // 192
    ebf_256BYTES = 5, // 256
    ebf_384BYTES = 6, // 384
    ebf_512BYTES = 7, // 512
  };
  
  // Bit field definition.
  struct {
    /// read-write - Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values.
    eFTQ FTQ : 1;
    /// read-write - Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue.
    eTSF TSF : 1;
    /// read-write - Transmit Queue Enable This field is used to enable/disable the transmit queue 0.
    eTXQEN TXQEN : 2;
    /// read-write - Transmit Threshold Control These bits control the threshold level of the MTL Tx Queue.
    eTTC TTC : 3;
    uint32_t _reserved_0 : 9;
    /// read-write - Transmit Queue Size This field indicates the size of the allocated Transmit queues in blocks of 256 bytes.
    uint32_t TQS : 5;
    uint32_t _reserved_1 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_OPERATION_MODE*>(0x4043CE00); }
};

// Queue 4 Underflow Counter
//
union MTL_TXQ4_UNDERFLOW {
  
  enum class eUFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow not detected for Underflow Packet Counter
    eACTIVE = 1, // Overflow detected for Underflow Packet Counter
  };
  
  // Bit field definition.
  struct {
    /// read-only - Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx Queue Underflow.
    uint32_t UFFRMCNT : 11;
    /// read-only - Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count.
    eUFCNTOVF UFCNTOVF : 1;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_UNDERFLOW() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_UNDERFLOW &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_UNDERFLOW*>(0x4043CE04); }
};

// Queue 4 Transmit Debug
//
union MTL_TXQ4_DEBUG {
  
  enum class eTXQPAUSED : uint32_t {
    eINACTIVE = 0, // Transmit Queue in Pause status is not detected
    eACTIVE = 1, // Transmit Queue in Pause status is detected
  };
  
  enum class eTRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD = 1, // Read state (transferring data to the MAC transmitter)
    eWAIT = 2, // Waiting for pending Tx Status from the MAC transmitter
    eFLUSH = 3, // Flushing the Tx queue because of the Packet Abort request from the MAC
  };
  
  enum class eTWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Write Controller status is not detected
    eACTIVE = 1, // MTL Tx Queue Write Controller status is detected
  };
  
  enum class eTXQSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Queue Not Empty status is not detected
    eACTIVE = 1, // MTL Tx Queue Not Empty status is detected
  };
  
  enum class eTXSTSFSTS : uint32_t {
    eINACTIVE = 0, // MTL Tx Status FIFO Full status is not detected
    eACTIVE = 1, // MTL Tx Status FIFO Full status is detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx Queue is in the Pause condition (in the full-duplex only mode) because of the following: - Reception of the PFC packet for the priorities assigned to the Tx Queue when PFC is enabled - Reception of 802.
    eTXQPAUSED TXQPAUSED : 1;
    /// read-only - MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller:
    eTRCSTS TRCSTS : 2;
    /// read-only - MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx Queue Write Controller is active, and it is transferring the data to the Tx Queue.
    eTWCSTS TWCSTS : 1;
    /// read-only - MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx Queue is not empty and some data is left for transmission.
    eTXQSTS TXQSTS : 1;
    /// read-only - MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full.
    eTXSTSFSTS TXSTSFSTS : 1;
    uint32_t _reserved_0 : 10;
    /// read-only - Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx Queue.
    uint32_t PTXQ : 3;
    uint32_t _reserved_1 : 1;
    /// read-only - Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue.
    uint32_t STXSTSF : 3;
    uint32_t _reserved_2 : 9;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_DEBUG*>(0x4043CE08); }
};

// Queue 4 ETS Control
//
union MTL_TXQ4_ETS_CONTROL {
  
  enum class eAVALG : uint32_t {
    eDISABLE = 0, // CBS Algorithm is disabled
    eENABLE = 1, // CBS Algorithm is enabled
  };
  
  enum class eCC : uint32_t {
    eDISABLE = 0, // Credit Control is disabled
    eENABLE = 1, // Credit Control is enabled
  };
  
  enum class eSLC : uint32_t {
    ebf_1_SLOT = 0, // 1 slot
    ebf_2_SLOT = 1, // 2 slots
    ebf_4_SLOT = 2, // 4 slots
    ebf_8_SLOT = 3, // 8 slots
    ebf_16_SLOT = 4, // 16 slots
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    /// read-write - AV Algorithm When Queue 1 is programmed for AV, this field configures the scheduling algorithm for this queue: This bit when set, indicates credit based shaper algorithm (CBS) is selected for Queue 1 traffic.
    eAVALG AVALG : 1;
    /// read-write - Credit Control When this bit is set, the accumulated credit parameter in the credit-based shaper algorithm logic is not reset to zero when there is positive credit and no packet to transmit in Channel 1.
    eCC CC : 1;
    /// read-write - Slot Count If the credit-based shaper algorithm is enabled, the software can program the number of slots (of duration programmed in DMA_CH[N]_SLOT_INTERVAL register) over which the average transmitted bits per slot, provided in the MTL_TXQ[N]_ETS_STATUS register, need to be computed for Queue.
    eSLC SLC : 3;
    uint32_t _reserved_1 : 25;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_ETS_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_ETS_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_ETS_CONTROL*>(0x4043CE10); }
};

// Queue 4 ETS Status
//
union MTL_TXQ4_ETS_STATUS {
  
  // Bit field definition.
  struct {
    /// read-only - Average Bits per Slot This field contains the average transmitted bits per slot.
    uint32_t ABS : 24;
    uint32_t _reserved_0 : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_ETS_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_ETS_STATUS &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_ETS_STATUS*>(0x4043CE14); }
};

// Queue 4 idleSlopeCredit, Quantum or Weights
//
union MTL_TXQ4_QUANTUM_WEIGHT {
  
  // Bit field definition.
  struct {
    /// read-write - idleSlopeCredit, Quantum or Weights - idleSlopeCredit When AV feature is enabled, this field contains the idleSlopeCredit value required for the credit-based shaper algorithm for Queue 1.
    uint32_t ISCQW : 21;
    uint32_t _reserved_0 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_QUANTUM_WEIGHT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_QUANTUM_WEIGHT &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_QUANTUM_WEIGHT*>(0x4043CE18); }
};

// Queue 4 sendSlopeCredit
//
union MTL_TXQ4_SENDSLOPECREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - sendSlopeCredit Value When AV operation is enabled, this field contains the sendSlopeCredit value required for credit-based shaper algorithm for Queue 1.
    uint32_t SSC : 14;
    uint32_t _reserved_0 : 18;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_SENDSLOPECREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_SENDSLOPECREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_SENDSLOPECREDIT*>(0x4043CE1C); }
};

// Queue 4 hiCredit
//
union MTL_TXQ4_HICREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - hiCredit Value When the AV feature is enabled, this field contains the hiCredit value required for the credit-based shaper algorithm.
    uint32_t HC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_HICREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_HICREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_HICREDIT*>(0x4043CE20); }
};

// Queue 4 loCredit
//
union MTL_TXQ4_LOCREDIT {
  
  // Bit field definition.
  struct {
    /// read-write - loCredit Value When AV operation is enabled, this field contains the loCredit value required for the credit-based shaper algorithm.
    uint32_t LC : 29;
    uint32_t _reserved_0 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_TXQ4_LOCREDIT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_TXQ4_LOCREDIT &Instance() { return *reinterpret_cast<volatile MTL_TXQ4_LOCREDIT*>(0x4043CE24); }
};

// Queue 4 Interrupt Control Status
//
union MTL_Q4_INTERRUPT_CONTROL_STATUS {
  
  enum class eTXUNFIS : uint32_t {
    eINACTIVE = 0, // Transmit Queue Underflow Interrupt Status not detected
    eACTIVE = 1, // Transmit Queue Underflow Interrupt Status detected
  };
  
  enum class eABPSIS : uint32_t {
    eINACTIVE = 0, // Average Bits Per Slot Interrupt Status not detected
    eACTIVE = 1, // Average Bits Per Slot Interrupt Status detected
  };
  
  enum class eTXUIE : uint32_t {
    eDISABLE = 0, // Transmit Queue Underflow Interrupt Status is disabled
    eENABLE = 1, // Transmit Queue Underflow Interrupt Status is enabled
  };
  
  enum class eABPSIE : uint32_t {
    eDISABLE = 0, // Average Bits Per Slot Interrupt is disabled
    eENABLE = 1, // Average Bits Per Slot Interrupt is enabled
  };
  
  enum class eRXOVFIS : uint32_t {
    eINACTIVE = 0, // Receive Queue Overflow Interrupt Status not detected
    eACTIVE = 1, // Receive Queue Overflow Interrupt Status detected
  };
  
  enum class eRXOIE : uint32_t {
    eDISABLE = 0, // Receive Queue Overflow Interrupt is disabled
    eENABLE = 1, // Receive Queue Overflow Interrupt is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet.
    eTXUNFIS TXUNFIS : 1;
    /// read-write - Average Bits Per Slot Interrupt Status When set, this bit indicates that the MAC has updated the ABS value.
    eABPSIS ABPSIS : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled.
    eTXUIE TXUIE : 1;
    /// read-write - Average Bits Per Slot Interrupt Enable When this bit is set, the MAC asserts the sbd_intr_o or mci_intr_o interrupt when the average bits per slot status is updated.
    eABPSIE ABPSIE : 1;
    uint32_t _reserved_1 : 6;
    /// read-write - Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet.
    eRXOVFIS RXOVFIS : 1;
    uint32_t _reserved_2 : 7;
    /// read-write - Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled.
    eRXOIE RXOIE : 1;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_Q4_INTERRUPT_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_Q4_INTERRUPT_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile MTL_Q4_INTERRUPT_CONTROL_STATUS*>(0x4043CE2C); }
};

// Queue 4 Receive Operation Mode
//
union MTL_RXQ4_OPERATION_MODE {
  
  enum class eRTC : uint32_t {
    ebf_64BYTE = 0, // 64
    ebf_32BYTE = 1, // 32
    ebf_96BYTE = 2, // 96
    ebf_128BYTE = 3, // 128
  };
  
  enum class eFUP : uint32_t {
    eDISABLE = 0, // Forward Undersized Good Packets is disabled
    eENABLE = 1, // Forward Undersized Good Packets is enabled
  };
  
  enum class eFEP : uint32_t {
    eDISABLE = 0, // Forward Error Packets is disabled
    eENABLE = 1, // Forward Error Packets is enabled
  };
  
  enum class eRSF : uint32_t {
    eDISABLE = 0, // Receive Queue Store and Forward is disabled
    eENABLE = 1, // Receive Queue Store and Forward is enabled
  };
  
  enum class eDIS_TCP_EF : uint32_t {
    eENABLE = 0, // Dropping of TCP/IP Checksum Error Packets is enabled
    eDISABLE = 1, // Dropping of TCP/IP Checksum Error Packets is disabled
  };
  
  enum class eEHFC : uint32_t {
    eDISABLE = 0, // Hardware Flow Control is disabled
    eENABLE = 1, // Hardware Flow Control is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold.
    eRTC RTC : 2;
    uint32_t _reserved_0 : 1;
    /// read-write - Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC.
    eFUP FUP : 1;
    /// read-write - Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, GMII_ER, watchdog timeout, or overflow).
    eFEP FEP : 1;
    /// read-write - Receive Queue Store and Forward When this bit is set, the DWC_ether_qos reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register.
    eRSF RSF : 1;
    /// read-write - Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine.
    eDIS_TCP_EF DIS_TCP_EF : 1;
    /// read-write - Enable Hardware Flow Control When this bit is set, the flow control signal operation, based on the fill-level of Rx queue, is enabled.
    eEHFC EHFC : 1;
    /// read-write - Threshold for Activating Flow Control (in half-duplex and full-duplex These bits control the threshold (fill-level of Rx queue) at which the flow control is activated: For more information on encoding for this field, see RFD.
    uint32_t RFA : 4;
    uint32_t _reserved_1 : 2;
    /// read-write - Threshold for Deactivating Flow Control (in half-duplex and full-duplex modes) These bits control the threshold (fill-level of Rx queue) at which the flow control is de-asserted after activation: - 0: Full minus 1 KB, that is, FULL 1 KB - 1: Full minus 1.
    uint32_t RFD : 4;
    uint32_t _reserved_2 : 2;
    /// read-write - Receive Queue Size This field indicates the size of the allocated Receive queues in blocks of 256 bytes.
    uint32_t RQS : 5;
    uint32_t _reserved_3 : 7;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ4_OPERATION_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ4_OPERATION_MODE &Instance() { return *reinterpret_cast<volatile MTL_RXQ4_OPERATION_MODE*>(0x4043CE30); }
};

// Queue 4 Missed Packet and Overflow Counter
//
union MTL_RXQ4_MISSED_PACKET_OVERFLOW_CNT {
  
  enum class eOVFCNTOVF : uint32_t {
    eINACTIVE = 0, // Overflow Counter overflow not detected
    eACTIVE = 1, // Overflow Counter overflow detected
  };
  
  enum class eMISCNTOVF : uint32_t {
    eINACTIVE = 0, // Missed Packet Counter overflow not detected
    eACTIVE = 1, // Missed Packet Counter overflow detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - Overflow Packet Counter This field indicates the number of packets discarded by the DWC_ether_qos because of Receive queue overflow.
    uint32_t OVFPKTCNT : 11;
    /// read-only - Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit.
    eOVFCNTOVF OVFCNTOVF : 1;
    uint32_t _reserved_0 : 4;
    /// read-only - Missed Packet Counter This field indicates the number of packets missed by the DWC_ether_qos because the application asserted ari_pkt_flush_i[] for this queue.
    uint32_t MISPKTCNT : 11;
    /// read-only - Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit.
    eMISCNTOVF MISCNTOVF : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ4_MISSED_PACKET_OVERFLOW_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ4_MISSED_PACKET_OVERFLOW_CNT &Instance() { return *reinterpret_cast<volatile MTL_RXQ4_MISSED_PACKET_OVERFLOW_CNT*>(0x4043CE34); }
};

// Queue 4 Receive Debug
//
union MTL_RXQ4_DEBUG {
  
  enum class eRWCSTS : uint32_t {
    eINACTIVE = 0, // MTL Rx Queue Write Controller Active Status not detected
    eACTIVE = 1, // MTL Rx Queue Write Controller Active Status detected
  };
  
  enum class eRRCSTS : uint32_t {
    eIDLE = 0, // Idle state
    eREAD_DATA = 1, // Reading packet data
    eREAD_STS = 2, // Reading packet status (or timestamp)
    eFLUSH = 3, // Flushing the packet data and status
  };
  
  enum class eRXQSTS : uint32_t {
    eEMPTY = 0, // Rx Queue empty
    eBLW_THR = 1, // Rx Queue fill-level below flow-control deactivate threshold
    eABV_THR = 2, // Rx Queue fill-level above flow-control activate threshold
    eFULL = 3, // Rx Queue full
  };
  
  // Bit field definition.
  struct {
    /// read-only - MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx Queue.
    eRWCSTS RWCSTS : 1;
    /// read-only - MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller:
    eRRCSTS RRCSTS : 2;
    uint32_t _reserved_0 : 1;
    /// read-only - MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx Queue:
    eRXQSTS RXQSTS : 2;
    uint32_t _reserved_1 : 10;
    /// read-only - Number of Packets in Receive Queue This field indicates the current number of packets in the Rx Queue.
    uint32_t PRXQ : 14;
    uint32_t _reserved_2 : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ4_DEBUG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ4_DEBUG &Instance() { return *reinterpret_cast<volatile MTL_RXQ4_DEBUG*>(0x4043CE38); }
};

// Queue 4 Receive Control
//
union MTL_RXQ4_CONTROL {
  
  enum class eRXQ_FRM_ARBIT : uint32_t {
    eDISABLE = 0, // Receive Queue Packet Arbitration is disabled
    eENABLE = 1, // Receive Queue Packet Arbitration is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Receive Queue Weight This field indicates the weight assigned to the Rx Queue 0.
    uint32_t RXQ_WEGT : 3;
    /// read-write - Receive Queue Packet Arbitration When this bit is set, the DWC_ether_qos drives the packet data to the ARI interface such that the entire packet data of currently-selected queue is transmitted before switching to other queue.
    eRXQ_FRM_ARBIT RXQ_FRM_ARBIT : 1;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  MTL_RXQ4_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile MTL_RXQ4_CONTROL &Instance() { return *reinterpret_cast<volatile MTL_RXQ4_CONTROL*>(0x4043CE3C); }
};

// DMA Bus Mode
//
union DMA_MODE {
  
  enum class eSWR : uint32_t {
    eDISABLE = 0, // Software Reset is disabled
    eENABLE = 1, // Software Reset is enabled
  };
  
  enum class eDSPW : uint32_t {
    eDISABLE = 0, // Descriptor Posted Write is disabled
    eENABLE = 1, // Descriptor Posted Write is enabled
  };
  
  enum class eINTM : uint32_t {
    eMODE0 = 0, // See above description
    eMODE1 = 1, // See above description
    eMODE2 = 2, // See above description
  };
  
  // Bit field definition.
  struct {
    /// read-write - Software Reset When this bit is set, the MAC and the DMA controller reset the logic and all internal registers of the DMA, MTL, and MAC.
    eSWR SWR : 1;
    uint32_t _reserved_0 : 7;
    /// read-write - Descriptor Posted Write When this bit is set to 0, the descriptor writes are always non-posted.
    eDSPW DSPW : 1;
    uint32_t _reserved_1 : 7;
    /// read-write - Interrupt Mode This field defines the interrupt mode of DWC_ether_qos.
    eINTM INTM : 2;
    uint32_t _reserved_2 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_MODE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_MODE &Instance() { return *reinterpret_cast<volatile DMA_MODE*>(0x4043D000); }
};

// DMA System Bus Mode
//
union DMA_SYSBUS_MODE {
  
  enum class eFB : uint32_t {
    eDISABLE = 0, // Fixed Burst Length is disabled
    eENABLE = 1, // Fixed Burst Length is enabled
  };
  
  enum class eBLEN4 : uint32_t {
    eDISABLE = 0, // No effect
    eENABLE = 1, // AXI Burst Length 4
  };
  
  enum class eBLEN8 : uint32_t {
    eDISABLE = 0, // No effect
    eENABLE = 1, // AXI Burst Length 8
  };
  
  enum class eBLEN16 : uint32_t {
    eDISABLE = 0, // No effect
    eENABLE = 1, // AXI Burst Length 16
  };
  
  enum class eAALE : uint32_t {
    eDISABLE = 0, // Automatic AXI LPI is disabled
    eENABLE = 1, // Automatic AXI LPI is enabled
  };
  
  enum class eAAL : uint32_t {
    eDISABLE = 0, // Address-Aligned Beats is disabled
    eENABLE = 1, // Address-Aligned Beats is enabled
  };
  
  enum class eONEKBBE : uint32_t {
    eDISABLE = 0, // 1 KB Boundary Crossing for the EQOS-AXI Master Beats is disabled
    eENABLE = 1, // 1 KB Boundary Crossing for the EQOS-AXI Master Beats is enabled
  };
  
  enum class eLPI_XIT_PKT : uint32_t {
    eDISABLE = 0, // Unlock on Magic Packet or Remote Wake-Up Packet is disabled
    eENABLE = 1, // Unlock on Magic Packet or Remote Wake-Up Packet is enabled
  };
  
  enum class eEN_LPI : uint32_t {
    eDISABLE = 0, // Low Power Interface (LPI) is disabled
    eENABLE = 1, // Low Power Interface (LPI) is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Fixed Burst Length When this bit is set to 1, the EQOS-AXI master initiates burst transfers of specified lengths as given below.
    eFB FB : 1;
    /// read-write - AXI Burst Length 4 When this bit is set to 1 or the FB bit is set to 0, the EQOS-AXI master can select a burst length of 4 on the AXI interface.
    eBLEN4 BLEN4 : 1;
    /// read-write - AXI Burst Length 8 When this bit is set to 1 or the FB bit is set to 0, the EQOS-AXI master can select a burst length of 8 on the AXI interface.
    eBLEN8 BLEN8 : 1;
    /// read-write - AXI Burst Length 16 When this bit is set to 1 or the FB bit is set to 0, the EQOS-AXI master can select a burst length of 16 on the AXI interface.
    eBLEN16 BLEN16 : 1;
    uint32_t _reserved_0 : 6;
    /// read-write - Automatic AXI LPI enable When set to 1, enables the AXI master to enter into LPI state when there is no activity in the DWC_ether_qos for number of system clock cycles programmed in the LPIEI field of DMA_AXI_LPI_ENTRY_INTERVAL register.
    eAALE AALE : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Address-Aligned Beats When this bit is set to 1, the EQOS-AXI or EQOS-AHB master performs address-aligned burst transfers on Read and Write channels.
    eAAL AAL : 1;
    /// read-write - 1 KB Boundary Crossing Enable for the EQOS-AXI Master When set, the burst transfers performed by the EQOS-AXI master do not cross 1 KB boundary.
    eONEKBBE ONEKBBE : 1;
    uint32_t _reserved_2 : 2;
    /// read-write - AXI Maximum Read Outstanding Request Limit This value limits the maximum outstanding request on the AXI read interface.
    uint32_t RD_OSR_LMT : 4;
    uint32_t _reserved_3 : 4;
    /// read-write - AXI Maximum Write Outstanding Request Limit This value limits the maximum outstanding request on the AXI write interface.
    uint32_t WR_OSR_LMT : 4;
    uint32_t _reserved_4 : 2;
    /// read-write - Unlock on Magic Packet or Remote Wake-Up Packet When set to 1, this bit enables the AXI master to come out of the LPI mode only when the magic packet or remote wake-up packet is received.
    eLPI_XIT_PKT LPI_XIT_PKT : 1;
    /// read-write - Enable Low Power Interface (LPI) When set to 1, this bit enables the LPI mode supported by the EQOS-AXI configuration and accepts the LPI request from the AXI System Clock controller.
    eEN_LPI EN_LPI : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_SYSBUS_MODE() = delete;
  inline void Reset() volatile { this->value = 0x01010000; }
  static inline volatile DMA_SYSBUS_MODE &Instance() { return *reinterpret_cast<volatile DMA_SYSBUS_MODE*>(0x4043D004); }
};

// DMA Interrupt Status
//
union DMA_INTERRUPT_STATUS {
  
  enum class eDC0IS : uint32_t {
    eINACTIVE = 0, // DMA Channel 0 Interrupt Status not detected
    eACTIVE = 1, // DMA Channel 0 Interrupt Status detected
  };
  
  enum class eDC1IS : uint32_t {
    eINACTIVE = 0, // DMA Channel 1 Interrupt Status not detected
    eACTIVE = 1, // DMA Channel 1 Interrupt Status detected
  };
  
  enum class eDC2IS : uint32_t {
    eINACTIVE = 0, // DMA Channel 2 Interrupt Status not detected
    eACTIVE = 1, // DMA Channel 2 Interrupt Status detected
  };
  
  enum class eDC3IS : uint32_t {
    eINACTIVE = 0, // DMA Channel 3 Interrupt Status not detected
    eACTIVE = 1, // DMA Channel 3 Interrupt Status detected
  };
  
  enum class eDC4IS : uint32_t {
    eINACTIVE = 0, // DMA Channel 4 Interrupt Status not detected
    eACTIVE = 1, // DMA Channel 4 Interrupt Status detected
  };
  
  enum class eMTLIS : uint32_t {
    eINACTIVE = 0, // MTL Interrupt Status not detected
    eACTIVE = 1, // MTL Interrupt Status detected
  };
  
  enum class eMACIS : uint32_t {
    eINACTIVE = 0, // MAC Interrupt Status not detected
    eACTIVE = 1, // MAC Interrupt Status detected
  };
  
  // Bit field definition.
  struct {
    /// read-only - DMA Channel 0 Interrupt Status This bit indicates an interrupt event in DMA Channel 0.
    eDC0IS DC0IS : 1;
    /// read-only - DMA Channel 1 Interrupt Status This bit indicates an interrupt event in DMA Channel 1.
    eDC1IS DC1IS : 1;
    /// read-only - DMA Channel 2 Interrupt Status This bit indicates an interrupt event in DMA Channel 2.
    eDC2IS DC2IS : 1;
    /// read-only - DMA Channel 3 Interrupt Status This bit indicates an interrupt event in DMA Channel 3.
    eDC3IS DC3IS : 1;
    /// read-only - DMA Channel 4 Interrupt Status This bit indicates an interrupt event in DMA Channel 4.
    eDC4IS DC4IS : 1;
    uint32_t _reserved_0 : 11;
    /// read-only - MTL Interrupt Status This bit indicates an interrupt event in the MTL.
    eMTLIS MTLIS : 1;
    /// read-only - MAC Interrupt Status This bit indicates an interrupt event in the MAC.
    eMACIS MACIS : 1;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_INTERRUPT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_INTERRUPT_STATUS &Instance() { return *reinterpret_cast<volatile DMA_INTERRUPT_STATUS*>(0x4043D008); }
};

// DMA Debug Status 0
//
union DMA_DEBUG_STATUS0 {
  
  enum class eAXWHSTS : uint32_t {
    eINACTIVE = 0, // AXI Master Write Channel or AHB Master Status not detected
    eACTIVE = 1, // AXI Master Write Channel or AHB Master Status detected
  };
  
  enum class eAXRHSTS : uint32_t {
    eINACTIVE = 0, // AXI Master Read Channel Status not detected
    eACTIVE = 1, // AXI Master Read Channel Status detected
  };
  
  enum class eRPS0 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Receive Command issued)
    eRUN_FRTD = 1, // Running (Fetching Rx Transfer Descriptor)
    eRUN_WRP = 3, // Running (Waiting for Rx packet)
    eSUSPND = 4, // Suspended (Rx Descriptor Unavailable)
    eRUN_CRD = 5, // Running (Closing the Rx Descriptor)
    eTSTMP = 6, // Timestamp write state
    eRUN_TRP = 7, // Running (Transferring the received packet data from the Rx buffer to the system memory)
  };
  
  enum class eTPS0 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Transmit Command issued)
    eRUN_FTTD = 1, // Running (Fetching Tx Transfer Descriptor)
    eRUN_WS = 2, // Running (Waiting for status)
    eRUN_RDS = 3, // Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO))
    eTSTMP_WS = 4, // Timestamp write state
    eSUSPND = 6, // Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow)
    eRUN_CTD = 7, // Running (Closing Tx Descriptor)
  };
  
  enum class eRPS1 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Receive Command issued)
    eRUN_FRTD = 1, // Running (Fetching Rx Transfer Descriptor)
    eRUN_WRP = 3, // Running (Waiting for Rx packet)
    eSUSPND = 4, // Suspended (Rx Descriptor Unavailable)
    eRUN_CRD = 5, // Running (Closing the Rx Descriptor)
    eTSTMP = 6, // Timestamp write state
    eRUN_TRP = 7, // Running (Transferring the received packet data from the Rx buffer to the system memory)
  };
  
  enum class eTPS1 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Transmit Command issued)
    eRUN_FTTD = 1, // Running (Fetching Tx Transfer Descriptor)
    eRUN_WS = 2, // Running (Waiting for status)
    eRUN_RDS = 3, // Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO))
    eTSTMP_WS = 4, // Timestamp write state
    eSUSPND = 6, // Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow)
    eRUN_CTD = 7, // Running (Closing Tx Descriptor)
  };
  
  enum class eRPS2 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Receive Command issued)
    eRUN_FRTD = 1, // Running (Fetching Rx Transfer Descriptor)
    eRUN_WRP = 3, // Running (Waiting for Rx packet)
    eSUSPND = 4, // Suspended (Rx Descriptor Unavailable)
    eRUN_CRD = 5, // Running (Closing the Rx Descriptor)
    eTSTMP = 6, // Timestamp write state
    eRUN_TRP = 7, // Running (Transferring the received packet data from the Rx buffer to the system memory)
  };
  
  enum class eTPS2 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Transmit Command issued)
    eRUN_FTTD = 1, // Running (Fetching Tx Transfer Descriptor)
    eRUN_WS = 2, // Running (Waiting for status)
    eRUN_RDS = 3, // Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO))
    eTSTMP_WS = 4, // Timestamp write state
    eSUSPND = 6, // Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow)
    eRUN_CTD = 7, // Running (Closing Tx Descriptor)
  };
  
  // Bit field definition.
  struct {
    /// read-only - AXI Master Write Channel When high, this bit indicates that the write channel of the AXI master is active, and it is transferring data.
    eAXWHSTS AXWHSTS : 1;
    /// read-only - AXI Master Read Channel Status When high, this bit indicates that the read channel of the AXI master is active, and it is transferring the data.
    eAXRHSTS AXRHSTS : 1;
    uint32_t _reserved_0 : 6;
    /// read-only - DMA Channel 0 Receive Process State This field indicates the Rx DMA FSM state for Channel 0.
    eRPS0 RPS0 : 4;
    /// read-only - DMA Channel 0 Transmit Process State This field indicates the Tx DMA FSM state for Channel 0.
    eTPS0 TPS0 : 4;
    /// read-only - DMA Channel 1 Receive Process State This field indicates the Rx DMA FSM state for Channel 1.
    eRPS1 RPS1 : 4;
    /// read-only - DMA Channel 1 Transmit Process State This field indicates the Tx DMA FSM state for Channel 1.
    eTPS1 TPS1 : 4;
    /// read-only - DMA Channel 2 Receive Process State This field indicates the Rx DMA FSM state for Channel 2.
    eRPS2 RPS2 : 4;
    /// read-only - DMA Channel 2 Transmit Process State This field indicates the Tx DMA FSM state for Channel 2.
    eTPS2 TPS2 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_DEBUG_STATUS0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_DEBUG_STATUS0 &Instance() { return *reinterpret_cast<volatile DMA_DEBUG_STATUS0*>(0x4043D00C); }
};

// DMA Debug Status 1
//
union DMA_DEBUG_STATUS1 {
  
  enum class eRPS3 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Receive Command issued)
    eRUN_FRTD = 1, // Running (Fetching Rx Transfer Descriptor)
    eRUN_WRP = 3, // Running (Waiting for Rx packet)
    eSUSPND = 4, // Suspended (Rx Descriptor Unavailable)
    eRUN_CRD = 5, // Running (Closing the Rx Descriptor)
    eTSTMP = 6, // Timestamp write state
    eRUN_TRP = 7, // Running (Transferring the received packet data from the Rx buffer to the system memory)
  };
  
  enum class eTPS3 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Transmit Command issued)
    eRUN_FTTD = 1, // Running (Fetching Tx Transfer Descriptor)
    eRUN_WS = 2, // Running (Waiting for status)
    eRUN_RDS = 3, // Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO))
    eTSTMP_WS = 4, // Timestamp write state
    eSUSPND = 6, // Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow)
    eRUN_CTD = 7, // Running (Closing Tx Descriptor)
  };
  
  enum class eRPS4 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Receive Command issued)
    eRUN_FRTD = 1, // Running (Fetching Rx Transfer Descriptor)
    eRUN_WRP = 3, // Running (Waiting for Rx packet)
    eSUSPND = 4, // Suspended (Rx Descriptor Unavailable)
    eRUN_CRD = 5, // Running (Closing the Rx Descriptor)
    eTSTMP = 6, // Timestamp write state
    eRUN_TRP = 7, // Running (Transferring the received packet data from the Rx buffer to the system memory)
  };
  
  enum class eTPS4 : uint32_t {
    eSTOP = 0, // Stopped (Reset or Stop Transmit Command issued)
    eRUN_FTTD = 1, // Running (Fetching Tx Transfer Descriptor)
    eRUN_WS = 2, // Running (Waiting for status)
    eRUN_RDS = 3, // Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO))
    eTSTMP_WS = 4, // Timestamp write state
    eSUSPND = 6, // Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow)
    eRUN_CTD = 7, // Running (Closing Tx Descriptor)
  };
  
  // Bit field definition.
  struct {
    /// read-only - DMA Channel 3 Receive Process State This field indicates the Rx DMA FSM state for Channel 3.
    eRPS3 RPS3 : 4;
    /// read-only - DMA Channel 3 Transmit Process State This field indicates the Tx DMA FSM state for Channel 3.
    eTPS3 TPS3 : 4;
    /// read-only - DMA Channel 4 Receive Process State This field indicates the Rx DMA FSM state for Channel 4.
    eRPS4 RPS4 : 4;
    /// read-only - DMA Channel 4 Transmit Process State This field indicates the Tx DMA FSM state for Channel 4.
    eTPS4 TPS4 : 4;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_DEBUG_STATUS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_DEBUG_STATUS1 &Instance() { return *reinterpret_cast<volatile DMA_DEBUG_STATUS1*>(0x4043D010); }
};

// AXI LPI Entry Interval Control
//
union DMA_AXI_LPI_ENTRY_INTERVAL {
  
  // Bit field definition.
  struct {
    /// read-write - LPI Entry Interval Contains the number of system clock cycles, multiplied by 64, to wait for an activity in the DWC_ether_qos to enter into the AXI low power state 0 indicates 64 clock cycles
    uint32_t LPIEI : 4;
    uint32_t _reserved_0 : 28;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_AXI_LPI_ENTRY_INTERVAL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_AXI_LPI_ENTRY_INTERVAL &Instance() { return *reinterpret_cast<volatile DMA_AXI_LPI_ENTRY_INTERVAL*>(0x4043D040); }
};

// TBS Control
//
union DMA_TBS_CTRL {
  
  enum class eFTOV : uint32_t {
    eINVALID = 0, // Fetch Time Offset is invalid
    eVALID = 1, // Fetch Time Offset is valid
  };
  
  // Bit field definition.
  struct {
    /// read-write - Fetch Time Offset Valid When set indicates the FTOS field is valid.
    eFTOV FTOV : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Fetch GSN Offset The number GSN slots that must be deducted from the Launch GSN to compute the Fetch GSN.
    uint32_t FGOS : 3;
    uint32_t _reserved_1 : 1;
    /// read-write - Fetch Time Offset The value in units of 256 nanoseconds, that has to be deducted from the Launch time to compute the Fetch Time.
    uint32_t FTOS : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_TBS_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_TBS_CTRL &Instance() { return *reinterpret_cast<volatile DMA_TBS_CTRL*>(0x4043D050); }
};

// DMA Channel 0 Control
//
union DMA_CH0_CONTROL {
  
  enum class ePBLx8 : uint32_t {
    eDISABLE = 0, // 8xPBL mode is disabled
    eENABLE = 1, // 8xPBL mode is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    /// read-write - 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in DMA_CH0_TX_CONTROL and Bits[21:16] in DMA_CH0_RX_CONTROL is multiplied by eight times.
    ePBLx8 PBLx8 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Descriptor Skip Length This bit specifies the Word, Dword, or Lword number (depending on the 32-bit, 64-bit, or 128-bit bus) to skip between two unchained descriptors.
    uint32_t DSL : 3;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH0_CONTROL*>(0x4043D100); }
};

// DMA Channel 0 Transmit Control
//
union DMA_CH0_TX_CONTROL {
  
  enum class eST : uint32_t {
    eSTOP = 0, // Stop Transmission Command
    eSTART = 1, // Start Transmission Command
  };
  
  enum class eOSF : uint32_t {
    eDISABLE = 0, // Operate on Second Packet disabled
    eENABLE = 1, // Operate on Second Packet enabled
  };
  
  enum class eIPBL : uint32_t {
    eDISABLE = 0, // Ignore PBL Requirement is disabled
    eENABLE = 1, // Ignore PBL Requirement is enabled
  };
  
  enum class eEDSE : uint32_t {
    eDISABLE = 0, // Enhanced Descriptor is disabled
    eENABLE = 1, // Enhanced Descriptor is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state.
    eST ST : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained.
    eOSF OSF : 1;
    uint32_t _reserved_1 : 10;
    /// read-write - Ignore PBL Requirement When this bit is set, the DMA does not check for PBL number of locations in the MTL before initiating a transfer.
    eIPBL IPBL : 1;
    /// read-write - Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t TxPBL : 6;
    uint32_t _reserved_2 : 6;
    /// read-write - Enhanced Descriptor Enable When this bit is set, the corresponding channel uses Enhanced Descriptors that are 32 Bytes for both Normal and Context Descriptors.
    eEDSE EDSE : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_TX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_TX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH0_TX_CONTROL*>(0x4043D104); }
};

// DMA Channel 0 Receive Control
//
union DMA_CH0_RX_CONTROL {
  
  enum class eSR : uint32_t {
    eSTOP = 0, // Stop Receive
    eSTART = 1, // Start Receive
  };
  
  enum class eRPF : uint32_t {
    eDISABLE = 0, // Rx Packet Flush is disabled
    eENABLE = 1, // Rx Packet Flush is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets.
    eSR SR : 1;
    /// read-only - Receive Buffer size Low RBSZ[13:0] is split into two fields RBSZ_13_y and RBSZ_x_0.
    uint32_t RBSZ_x_0 : 3;
    /// read-write - Receive Buffer size High RBSZ[13:0] is split into two fields higher RBSZ_13_y and lower RBSZ_x_0.
    uint32_t RBSZ_13_y : 11;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t RxPBL : 6;
    uint32_t _reserved_1 : 9;
    /// read-write - Rx Packet Flush.
    eRPF RPF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH0_RX_CONTROL*>(0x4043D108); }
};

// Channel 0 Tx Descriptor List Address register
//
union DMA_CH0_TXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list.
    uint32_t TDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_TXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_TXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH0_TXDESC_LIST_ADDRESS*>(0x4043D114); }
};

// Channel 0 Rx Descriptor List Address register
//
union DMA_CH0_RXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list.
    uint32_t RDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH0_RXDESC_LIST_ADDRESS*>(0x4043D11C); }
};

// Channel 0 Tx Descriptor Tail Pointer
//
union DMA_CH0_TXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring.
    uint32_t TDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_TXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_TXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH0_TXDESC_TAIL_POINTER*>(0x4043D120); }
};

// Channel 0 Rx Descriptor Tail Pointer
//
union DMA_CH0_RXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring.
    uint32_t RDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH0_RXDESC_TAIL_POINTER*>(0x4043D128); }
};

// Channel 0 Tx Descriptor Ring Length
//
union DMA_CH0_TXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring.
    uint32_t TDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_TXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_TXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH0_TXDESC_RING_LENGTH*>(0x4043D12C); }
};

// Channel 0 Rx Descriptor Ring Length
//
union DMA_CH0_RXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring.
    uint32_t RDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH0_RXDESC_RING_LENGTH*>(0x4043D130); }
};

// Channel 0 Interrupt Enable
//
union DMA_CH0_INTERRUPT_ENABLE {
  
  enum class eTIE : uint32_t {
    eDISABLE = 0, // Transmit Interrupt is disabled
    eENABLE = 1, // Transmit Interrupt is enabled
  };
  
  enum class eTXSE : uint32_t {
    eDISABLE = 0, // Transmit Stopped is disabled
    eENABLE = 1, // Transmit Stopped is enabled
  };
  
  enum class eTBUE : uint32_t {
    eDISABLE = 0, // Transmit Buffer Unavailable is disabled
    eENABLE = 1, // Transmit Buffer Unavailable is enabled
  };
  
  enum class eRIE : uint32_t {
    eDISABLE = 0, // Receive Interrupt is disabled
    eENABLE = 1, // Receive Interrupt is enabled
  };
  
  enum class eRBUE : uint32_t {
    eDISABLE = 0, // Receive Buffer Unavailable is disabled
    eENABLE = 1, // Receive Buffer Unavailable is enabled
  };
  
  enum class eRSE : uint32_t {
    eDISABLE = 0, // Receive Stopped is disabled
    eENABLE = 1, // Receive Stopped is enabled
  };
  
  enum class eRWTE : uint32_t {
    eDISABLE = 0, // Receive Watchdog Timeout is disabled
    eENABLE = 1, // Receive Watchdog Timeout is enabled
  };
  
  enum class eETIE : uint32_t {
    eDISABLE = 0, // Early Transmit Interrupt is disabled
    eENABLE = 1, // Early Transmit Interrupt is enabled
  };
  
  enum class eERIE : uint32_t {
    eDISABLE = 0, // Early Receive Interrupt is disabled
    eENABLE = 1, // Early Receive Interrupt is enabled
  };
  
  enum class eFBEE : uint32_t {
    eDISABLE = 0, // Fatal Bus Error is disabled
    eENABLE = 1, // Fatal Bus Error is enabled
  };
  
  enum class eCDEE : uint32_t {
    eDISABLE = 0, // Context Descriptor Error is disabled
    eENABLE = 1, // Context Descriptor Error is enabled
  };
  
  enum class eAIE : uint32_t {
    eDISABLE = 0, // Abnormal Interrupt Summary is disabled
    eENABLE = 1, // Abnormal Interrupt Summary is enabled
  };
  
  enum class eNIE : uint32_t {
    eDISABLE = 0, // Normal Interrupt Summary is disabled
    eENABLE = 1, // Normal Interrupt Summary is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled.
    eTIE TIE : 1;
    /// read-write - Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled.
    eTXSE TXSE : 1;
    /// read-write - Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled.
    eTBUE TBUE : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled.
    eRIE RIE : 1;
    /// read-write - Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled.
    eRBUE RBUE : 1;
    /// read-write - Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled.
    eRSE RSE : 1;
    /// read-write - Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled.
    eRWTE RWTE : 1;
    /// read-write - Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled.
    eETIE ETIE : 1;
    /// read-write - Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled.
    eERIE ERIE : 1;
    /// read-write - Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled.
    eFBEE FBEE : 1;
    /// read-write - Context Descriptor Error Enable When this bit is set along with the AIE bit, the Descriptor error interrupt is enabled.
    eCDEE CDEE : 1;
    /// read-write - Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled.
    eAIE AIE : 1;
    /// read-write - Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled.
    eNIE NIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile DMA_CH0_INTERRUPT_ENABLE*>(0x4043D134); }
};

// Channel 0 Receive Interrupt Watchdog Timer
//
union DMA_CH0_RX_INTERRUPT_WATCHDOG_TIMER {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set.
    uint32_t RWT : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Receive Interrupt Watchdog Timer Count Units This fields indicates the number of system clock cycles corresponding to one unit in RWT field.
    uint32_t RWTU : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RX_INTERRUPT_WATCHDOG_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RX_INTERRUPT_WATCHDOG_TIMER &Instance() { return *reinterpret_cast<volatile DMA_CH0_RX_INTERRUPT_WATCHDOG_TIMER*>(0x4043D138); }
};

// Channel 0 Slot Function Control and Status
//
union DMA_CH0_SLOT_FUNCTION_CONTROL_STATUS {
  
  enum class eESC : uint32_t {
    eDISABLE = 0, // Slot Comparison is disabled
    eENABLE = 1, // Slot Comparison is enabled
  };
  
  enum class eASC : uint32_t {
    eDISABLE = 0, // Advance Slot Check is disabled
    eENABLE = 1, // Advance Slot Check is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Slot Comparison When set, this bit enables the checking of the slot numbers programmed in the Tx descriptor with the current reference given in the RSN field.
    eESC ESC : 1;
    /// read-write - Advance Slot Check When set, this bit enables the DMA to fetch the data from the buffer when the slot number (SLOTNUM) programmed in the Tx descriptor is - equal to the reference slot number given in the RSN field or - ahead of the reference slot number by up to two slots This bit is applicable only when the ESC bit is set.
    eASC ASC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Slot Interval Value This field controls the period of the slot interval in which the TxDMA fetches the scheduled packets.
    uint32_t SIV : 12;
    /// read-only - Reference Slot Number This field gives the current value of the reference slot number in the DMA.
    uint32_t RSN : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_SLOT_FUNCTION_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000007C0; }
  static inline volatile DMA_CH0_SLOT_FUNCTION_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH0_SLOT_FUNCTION_CONTROL_STATUS*>(0x4043D13C); }
};

// Channel 0 Current Application Transmit Descriptor
//
union DMA_CH0_CURRENT_APP_TXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_CURRENT_APP_TXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_CURRENT_APP_TXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH0_CURRENT_APP_TXDESC*>(0x4043D144); }
};

// Channel 0 Current Application Receive Descriptor
//
union DMA_CH0_CURRENT_APP_RXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_CURRENT_APP_RXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_CURRENT_APP_RXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH0_CURRENT_APP_RXDESC*>(0x4043D14C); }
};

// Channel 0 Current Application Transmit Buffer Address
//
union DMA_CH0_CURRENT_APP_TXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_CURRENT_APP_TXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_CURRENT_APP_TXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH0_CURRENT_APP_TXBUFFER*>(0x4043D154); }
};

// Channel 0 Current Application Receive Buffer Address
//
union DMA_CH0_CURRENT_APP_RXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_CURRENT_APP_RXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_CURRENT_APP_RXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH0_CURRENT_APP_RXBUFFER*>(0x4043D15C); }
};

// DMA Channel 0 Status
//
union DMA_CH0_STATUS {
  
  enum class eTI : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not detected
    eACTIVE = 1, // Transmit Interrupt status detected
  };
  
  enum class eTPS : uint32_t {
    eINACTIVE = 0, // Transmit Process Stopped status not detected
    eACTIVE = 1, // Transmit Process Stopped status detected
  };
  
  enum class eTBU : uint32_t {
    eINACTIVE = 0, // Transmit Buffer Unavailable status not detected
    eACTIVE = 1, // Transmit Buffer Unavailable status detected
  };
  
  enum class eRI : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not detected
    eACTIVE = 1, // Receive Interrupt status detected
  };
  
  enum class eRBU : uint32_t {
    eINACTIVE = 0, // Receive Buffer Unavailable status not detected
    eACTIVE = 1, // Receive Buffer Unavailable status detected
  };
  
  enum class eRPS : uint32_t {
    eINACTIVE = 0, // Receive Process Stopped status not detected
    eACTIVE = 1, // Receive Process Stopped status detected
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // Receive Watchdog Timeout status not detected
    eACTIVE = 1, // Receive Watchdog Timeout status detected
  };
  
  enum class eETI : uint32_t {
    eINACTIVE = 0, // Early Transmit Interrupt status not detected
    eACTIVE = 1, // Early Transmit Interrupt status detected
  };
  
  enum class eERI : uint32_t {
    eINACTIVE = 0, // Early Receive Interrupt status not detected
    eACTIVE = 1, // Early Receive Interrupt status detected
  };
  
  enum class eFBE : uint32_t {
    eINACTIVE = 0, // Fatal Bus Error status not detected
    eACTIVE = 1, // Fatal Bus Error status detected
  };
  
  enum class eCDE : uint32_t {
    eINACTIVE = 0, // Context Descriptor Error status not detected
    eACTIVE = 1, // Context Descriptor Error status detected
  };
  
  enum class eAIS : uint32_t {
    eINACTIVE = 0, // Abnormal Interrupt Summary status not detected
    eACTIVE = 1, // Abnormal Interrupt Summary status detected
  };
  
  enum class eNIS : uint32_t {
    eINACTIVE = 0, // Normal Interrupt Summary status not detected
    eACTIVE = 1, // Normal Interrupt Summary status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt This bit indicates that the packet transmission is complete.
    eTI TI : 1;
    /// read-write - Transmit Process Stopped This bit is set when the transmission is stopped.
    eTPS TPS : 1;
    /// read-write - Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it.
    eTBU TBU : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt This bit indicates that the packet reception is complete.
    eRI RI : 1;
    /// read-write - Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it.
    eRBU RBU : 1;
    /// read-write - Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state.
    eRPS RPS : 1;
    /// read-write - Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received.
    eRWT RWT : 1;
    /// read-write - Early Transmit Interrupt This bit when set indicates that the TxDMA has completed the transfer of packet data to the MTL TXFIFO memory.
    eETI ETI : 1;
    /// read-write - Early Receive Interrupt This bit when set indicates that the RxDMA has completed the transfer of packet data to the memory.
    eERI ERI : 1;
    /// read-write - Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field).
    eFBE FBE : 1;
    /// read-write - Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow (intermediate descriptor) or all ones descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid.
    eCDE CDE : 1;
    /// read-write - Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 1: Transmit Process Stopped - Bit 7: Receive Buffer Unavailable - Bit 8: Receive Process Stopped - Bit 10: Early Transmit Interrupt - Bit 12: Fatal Bus Error - Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit.
    eAIS AIS : 1;
    /// read-write - Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the DMA_CH0_INTERRUPT_ENABLE register: - Bit 0: Transmit Interrupt - Bit 2: Transmit Buffer Unavailable - Bit 6: Receive Interrupt - Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in INTERRUPT_ENABLE register) affect the Normal Interrupt Summary bit.
    eNIS NIS : 1;
    /// read-only - Tx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t TEB : 3;
    /// read-only - Rx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t REB : 3;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH0_STATUS*>(0x4043D160); }
};

// Channel 0 Missed Frame Counter
//
union DMA_CH0_MISS_FRAME_CNT {
  
  enum class eMFCO : uint32_t {
    eINACTIVE = 0, // Miss Frame Counter overflow not occurred
    eACTIVE = 1, // Miss Frame Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programming RPF field in DMA_CH0_RX_CONTROL register.
    uint32_t MFC : 11;
    uint32_t _reserved_0 : 4;
    /// read-only - Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further.
    eMFCO MFCO : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_MISS_FRAME_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_MISS_FRAME_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH0_MISS_FRAME_CNT*>(0x4043D164); }
};

// Channel 0 RXP Frames Accepted Counter
//
union DMA_CH0_RXP_ACCEPT_CNT {
  
  enum class eRXPACOF : uint32_t {
    eINACTIVE = 0, // Rx Parser Accept Counter overflow not occurred
    eACTIVE = 1, // Rx Parser Accept Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Accept Counter This 31-bit counter is implemented whenever a Rx Parser Accept a packet due to AF =1.
    uint32_t RXPAC : 31;
    /// read-only - Rx Parser Accept Counter Overflow Bit When set, this bit indicates that the RXPAC Counter field crossed the maximum limit.
    eRXPACOF RXPACOF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RXP_ACCEPT_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RXP_ACCEPT_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH0_RXP_ACCEPT_CNT*>(0x4043D168); }
};

// Channel 0 Receive ERI Counter
//
union DMA_CH0_RX_ERI_CNT {
  
  // Bit field definition.
  struct {
    /// read-only - ERI Counter When ERIC bit of RX_CONTROL register is set, this counter increments for burst transfer completed by the Rx DMA from the start of packet transfer.
    uint32_t ECNT : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH0_RX_ERI_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH0_RX_ERI_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH0_RX_ERI_CNT*>(0x4043D16C); }
};

// DMA Channel 1 Control
//
union DMA_CH1_CONTROL {
  
  enum class ePBLx8 : uint32_t {
    eDISABLE = 0, // 8xPBL mode is disabled
    eENABLE = 1, // 8xPBL mode is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    /// read-write - 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in TX_CONTROL and Bits[21:16] in DMA_CH1_RX_CONTROL is multiplied by eight times.
    ePBLx8 PBLx8 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Descriptor Skip Length This bit specifies the Word, Dword, or Lword number (depending on the 32-bit, 64-bit, or 128-bit bus) to skip between two unchained descriptors.
    uint32_t DSL : 3;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH1_CONTROL*>(0x4043D180); }
};

// DMA Channel 1 Transmit Control
//
union DMA_CH1_TX_CONTROL {
  
  enum class eST : uint32_t {
    eSTOP = 0, // Stop Transmission Command
    eSTART = 1, // Start Transmission Command
  };
  
  enum class eOSF : uint32_t {
    eDISABLE = 0, // Operate on Second Packet disabled
    eENABLE = 1, // Operate on Second Packet enabled
  };
  
  enum class eIPBL : uint32_t {
    eDISABLE = 0, // Ignore PBL Requirement is disabled
    eENABLE = 1, // Ignore PBL Requirement is enabled
  };
  
  enum class eEDSE : uint32_t {
    eDISABLE = 0, // Enhanced Descriptor is disabled
    eENABLE = 1, // Enhanced Descriptor is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state.
    eST ST : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained.
    eOSF OSF : 1;
    uint32_t _reserved_1 : 10;
    /// read-write - Ignore PBL Requirement When this bit is set, the DMA does not check for PBL number of locations in the MTL before initiating a transfer.
    eIPBL IPBL : 1;
    /// read-write - Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t TxPBL : 6;
    uint32_t _reserved_2 : 6;
    /// read-write - Enhanced Descriptor Enable When this bit is set, the corresponding channel uses Enhanced Descriptors that are 32 Bytes for both Normal and Context Descriptors.
    eEDSE EDSE : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_TX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_TX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH1_TX_CONTROL*>(0x4043D184); }
};

// DMA Channel 1 Receive Control
//
union DMA_CH1_RX_CONTROL {
  
  enum class eSR : uint32_t {
    eSTOP = 0, // Stop Receive
    eSTART = 1, // Start Receive
  };
  
  enum class eRPF : uint32_t {
    eDISABLE = 0, // Rx Packet Flush is disabled
    eENABLE = 1, // Rx Packet Flush is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets.
    eSR SR : 1;
    /// read-only - Receive Buffer size Low RBSZ[13:0] is split into two fields RBSZ_13_y and RBSZ_x_0.
    uint32_t RBSZ_x_0 : 3;
    /// read-write - Receive Buffer size High RBSZ[13:0] is split into two fields higher RBSZ_13_y and lower RBSZ_x_0.
    uint32_t RBSZ_13_y : 11;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t RxPBL : 6;
    uint32_t _reserved_1 : 9;
    /// read-write - Rx Packet Flush.
    eRPF RPF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH1_RX_CONTROL*>(0x4043D188); }
};

// Channel 1 Tx Descriptor List Address
//
union DMA_CH1_TXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list.
    uint32_t TDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_TXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_TXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH1_TXDESC_LIST_ADDRESS*>(0x4043D194); }
};

// Channel 1 Rx Descriptor List Address
//
union DMA_CH1_RXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list.
    uint32_t RDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH1_RXDESC_LIST_ADDRESS*>(0x4043D19C); }
};

// Channel 1 Tx Descriptor Tail Pointer
//
union DMA_CH1_TXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring.
    uint32_t TDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_TXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_TXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH1_TXDESC_TAIL_POINTER*>(0x4043D1A0); }
};

// Channel 1 Rx Descriptor Tail Pointer
//
union DMA_CH1_RXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring.
    uint32_t RDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH1_RXDESC_TAIL_POINTER*>(0x4043D1A8); }
};

// Channel 1 Tx Descriptor Ring Length
//
union DMA_CH1_TXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring.
    uint32_t TDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_TXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_TXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH1_TXDESC_RING_LENGTH*>(0x4043D1AC); }
};

// Channel 1 Rx Descriptor Ring Length
//
union DMA_CH1_RXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring.
    uint32_t RDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH1_RXDESC_RING_LENGTH*>(0x4043D1B0); }
};

// Channel 1 Interrupt Enable
//
union DMA_CH1_INTERRUPT_ENABLE {
  
  enum class eTIE : uint32_t {
    eDISABLE = 0, // Transmit Interrupt is disabled
    eENABLE = 1, // Transmit Interrupt is enabled
  };
  
  enum class eTXSE : uint32_t {
    eDISABLE = 0, // Transmit Stopped is disabled
    eENABLE = 1, // Transmit Stopped is enabled
  };
  
  enum class eTBUE : uint32_t {
    eDISABLE = 0, // Transmit Buffer Unavailable is disabled
    eENABLE = 1, // Transmit Buffer Unavailable is enabled
  };
  
  enum class eRIE : uint32_t {
    eDISABLE = 0, // Receive Interrupt is disabled
    eENABLE = 1, // Receive Interrupt is enabled
  };
  
  enum class eRBUE : uint32_t {
    eDISABLE = 0, // Receive Buffer Unavailable is disabled
    eENABLE = 1, // Receive Buffer Unavailable is enabled
  };
  
  enum class eRSE : uint32_t {
    eDISABLE = 0, // Receive Stopped is disabled
    eENABLE = 1, // Receive Stopped is enabled
  };
  
  enum class eRWTE : uint32_t {
    eDISABLE = 0, // Receive Watchdog Timeout is disabled
    eENABLE = 1, // Receive Watchdog Timeout is enabled
  };
  
  enum class eETIE : uint32_t {
    eDISABLE = 0, // Early Transmit Interrupt is disabled
    eENABLE = 1, // Early Transmit Interrupt is enabled
  };
  
  enum class eERIE : uint32_t {
    eDISABLE = 0, // Early Receive Interrupt is disabled
    eENABLE = 1, // Early Receive Interrupt is enabled
  };
  
  enum class eFBEE : uint32_t {
    eDISABLE = 0, // Fatal Bus Error is disabled
    eENABLE = 1, // Fatal Bus Error is enabled
  };
  
  enum class eCDEE : uint32_t {
    eDISABLE = 0, // Context Descriptor Error is disabled
    eENABLE = 1, // Context Descriptor Error is enabled
  };
  
  enum class eAIE : uint32_t {
    eDISABLE = 0, // Abnormal Interrupt Summary is disabled
    eENABLE = 1, // Abnormal Interrupt Summary is enabled
  };
  
  enum class eNIE : uint32_t {
    eDISABLE = 0, // Normal Interrupt Summary is disabled
    eENABLE = 1, // Normal Interrupt Summary is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled.
    eTIE TIE : 1;
    /// read-write - Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled.
    eTXSE TXSE : 1;
    /// read-write - Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled.
    eTBUE TBUE : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled.
    eRIE RIE : 1;
    /// read-write - Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled.
    eRBUE RBUE : 1;
    /// read-write - Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled.
    eRSE RSE : 1;
    /// read-write - Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled.
    eRWTE RWTE : 1;
    /// read-write - Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled.
    eETIE ETIE : 1;
    /// read-write - Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled.
    eERIE ERIE : 1;
    /// read-write - Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled.
    eFBEE FBEE : 1;
    /// read-write - Context Descriptor Error Enable When this bit is set along with the AIE bit, the Descriptor error interrupt is enabled.
    eCDEE CDEE : 1;
    /// read-write - Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled.
    eAIE AIE : 1;
    /// read-write - Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled.
    eNIE NIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile DMA_CH1_INTERRUPT_ENABLE*>(0x4043D1B4); }
};

// Channel 1 Receive Interrupt Watchdog Timer
//
union DMA_CH1_RX_INTERRUPT_WATCHDOG_TIMER {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set.
    uint32_t RWT : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Receive Interrupt Watchdog Timer Count Units This fields indicates the number of system clock cycles corresponding to one unit in RWT field.
    uint32_t RWTU : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RX_INTERRUPT_WATCHDOG_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RX_INTERRUPT_WATCHDOG_TIMER &Instance() { return *reinterpret_cast<volatile DMA_CH1_RX_INTERRUPT_WATCHDOG_TIMER*>(0x4043D1B8); }
};

// Channel 1 Slot Function Control and Status
//
union DMA_CH1_SLOT_FUNCTION_CONTROL_STATUS {
  
  enum class eESC : uint32_t {
    eDISABLE = 0, // Slot Comparison is disabled
    eENABLE = 1, // Slot Comparison is enabled
  };
  
  enum class eASC : uint32_t {
    eDISABLE = 0, // Advance Slot Check is disabled
    eENABLE = 1, // Advance Slot Check is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Slot Comparison When set, this bit enables the checking of the slot numbers programmed in the Tx descriptor with the current reference given in the RSN field.
    eESC ESC : 1;
    /// read-write - Advance Slot Check When set, this bit enables the DMA to fetch the data from the buffer when the slot number (SLOTNUM) programmed in the Tx descriptor is - equal to the reference slot number given in the RSN field or - ahead of the reference slot number by up to two slots This bit is applicable only when the ESC bit is set.
    eASC ASC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Slot Interval Value This field controls the period of the slot interval in which the TxDMA fetches the scheduled packets.
    uint32_t SIV : 12;
    /// read-only - Reference Slot Number This field gives the current value of the reference slot number in the DMA.
    uint32_t RSN : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_SLOT_FUNCTION_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000007C0; }
  static inline volatile DMA_CH1_SLOT_FUNCTION_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH1_SLOT_FUNCTION_CONTROL_STATUS*>(0x4043D1BC); }
};

// Channel 1 Current Application Transmit Descriptor
//
union DMA_CH1_CURRENT_APP_TXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_CURRENT_APP_TXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_CURRENT_APP_TXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH1_CURRENT_APP_TXDESC*>(0x4043D1C4); }
};

// Channel 1 Current Application Receive Descriptor
//
union DMA_CH1_CURRENT_APP_RXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_CURRENT_APP_RXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_CURRENT_APP_RXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH1_CURRENT_APP_RXDESC*>(0x4043D1CC); }
};

// Channel 1 Current Application Transmit Buffer Address
//
union DMA_CH1_CURRENT_APP_TXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_CURRENT_APP_TXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_CURRENT_APP_TXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH1_CURRENT_APP_TXBUFFER*>(0x4043D1D4); }
};

// Channel 1 Current Application Receive Buffer Address
//
union DMA_CH1_CURRENT_APP_RXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_CURRENT_APP_RXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_CURRENT_APP_RXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH1_CURRENT_APP_RXBUFFER*>(0x4043D1DC); }
};

// DMA Channel 1 Status
//
union DMA_CH1_STATUS {
  
  enum class eTI : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not detected
    eACTIVE = 1, // Transmit Interrupt status detected
  };
  
  enum class eTPS : uint32_t {
    eINACTIVE = 0, // Transmit Process Stopped status not detected
    eACTIVE = 1, // Transmit Process Stopped status detected
  };
  
  enum class eTBU : uint32_t {
    eINACTIVE = 0, // Transmit Buffer Unavailable status not detected
    eACTIVE = 1, // Transmit Buffer Unavailable status detected
  };
  
  enum class eRI : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not detected
    eACTIVE = 1, // Receive Interrupt status detected
  };
  
  enum class eRBU : uint32_t {
    eINACTIVE = 0, // Receive Buffer Unavailable status not detected
    eACTIVE = 1, // Receive Buffer Unavailable status detected
  };
  
  enum class eRPS : uint32_t {
    eINACTIVE = 0, // Receive Process Stopped status not detected
    eACTIVE = 1, // Receive Process Stopped status detected
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // Receive Watchdog Timeout status not detected
    eACTIVE = 1, // Receive Watchdog Timeout status detected
  };
  
  enum class eETI : uint32_t {
    eINACTIVE = 0, // Early Transmit Interrupt status not detected
    eACTIVE = 1, // Early Transmit Interrupt status detected
  };
  
  enum class eERI : uint32_t {
    eINACTIVE = 0, // Early Receive Interrupt status not detected
    eACTIVE = 1, // Early Receive Interrupt status detected
  };
  
  enum class eFBE : uint32_t {
    eINACTIVE = 0, // Fatal Bus Error status not detected
    eACTIVE = 1, // Fatal Bus Error status detected
  };
  
  enum class eCDE : uint32_t {
    eINACTIVE = 0, // Context Descriptor Error status not detected
    eACTIVE = 1, // Context Descriptor Error status detected
  };
  
  enum class eAIS : uint32_t {
    eINACTIVE = 0, // Abnormal Interrupt Summary status not detected
    eACTIVE = 1, // Abnormal Interrupt Summary status detected
  };
  
  enum class eNIS : uint32_t {
    eINACTIVE = 0, // Normal Interrupt Summary status not detected
    eACTIVE = 1, // Normal Interrupt Summary status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt This bit indicates that the packet transmission is complete.
    eTI TI : 1;
    /// read-write - Transmit Process Stopped This bit is set when the transmission is stopped.
    eTPS TPS : 1;
    /// read-write - Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it.
    eTBU TBU : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt This bit indicates that the packet reception is complete.
    eRI RI : 1;
    /// read-write - Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it.
    eRBU RBU : 1;
    /// read-write - Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state.
    eRPS RPS : 1;
    /// read-write - Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received.
    eRWT RWT : 1;
    /// read-write - Early Transmit Interrupt This bit when set indicates that the TxDMA has completed the transfer of packet data to the MTL TXFIFO memory.
    eETI ETI : 1;
    /// read-write - Early Receive Interrupt This bit when set indicates that the RxDMA has completed the transfer of packet data to the memory.
    eERI ERI : 1;
    /// read-write - Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field).
    eFBE FBE : 1;
    /// read-write - Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow ( intermediate descriptor) or all one's descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid.
    eCDE CDE : 1;
    /// read-write - Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 1: Transmit Process Stopped - Bit 7: Receive Buffer Unavailable - Bit 8: Receive Process Stopped - Bit 10: Early Transmit Interrupt - Bit 12: Fatal Bus Error - Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit.
    eAIS AIS : 1;
    /// read-write - Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 0: Transmit Interrupt - Bit 2: Transmit Buffer Unavailable - Bit 6: Receive Interrupt - Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in INTERRUPT_ENABLE register) affect the Normal Interrupt Summary bit.
    eNIS NIS : 1;
    /// read-only - Tx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t TEB : 3;
    /// read-only - Rx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t REB : 3;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH1_STATUS*>(0x4043D1E0); }
};

// Channel 1 Missed Frame Counter
//
union DMA_CH1_MISS_FRAME_CNT {
  
  enum class eMFCO : uint32_t {
    eINACTIVE = 0, // Miss Frame Counter overflow not occurred
    eACTIVE = 1, // Miss Frame Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programming RPF field in RX_CONTROL register.
    uint32_t MFC : 11;
    uint32_t _reserved_0 : 4;
    /// read-only - Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further.
    eMFCO MFCO : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_MISS_FRAME_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_MISS_FRAME_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH1_MISS_FRAME_CNT*>(0x4043D1E4); }
};

// Channel 1 RXP Frames Accepted Counter
//
union DMA_CH1_RXP_ACCEPT_CNT {
  
  enum class eRXPACOF : uint32_t {
    eINACTIVE = 0, // Rx Parser Accept Counter overflow not occurred
    eACTIVE = 1, // Rx Parser Accept Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Accept Counter This 31-bit counter is implemented whenever a Rx Parser Accept a packet due to AF =1.
    uint32_t RXPAC : 31;
    /// read-only - Rx Parser Accept Counter Overflow Bit When set, this bit indicates that the RXPAC Counter field crossed the maximum limit.
    eRXPACOF RXPACOF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RXP_ACCEPT_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RXP_ACCEPT_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH1_RXP_ACCEPT_CNT*>(0x4043D1E8); }
};

// Channel 1 Receive ERI Counter
//
union DMA_CH1_RX_ERI_CNT {
  
  // Bit field definition.
  struct {
    /// read-only - ERI Counter When ERIC bit of RX_CONTROL register is set, this counter increments for burst transfer completed by the Rx DMA from the start of packet transfer.
    uint32_t ECNT : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH1_RX_ERI_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH1_RX_ERI_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH1_RX_ERI_CNT*>(0x4043D1EC); }
};

// DMA Channel 2 Control
//
union DMA_CH2_CONTROL {
  
  enum class ePBLx8 : uint32_t {
    eDISABLE = 0, // 8xPBL mode is disabled
    eENABLE = 1, // 8xPBL mode is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    /// read-write - 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in DMA_CH2_TX_CONTROL and Bits[21:16] in DMA_CH2_RX_CONTROL is multiplied by eight times.
    ePBLx8 PBLx8 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Descriptor Skip Length This bit specifies the Word, Dword, or Lword number (depending on the 32-bit, 64-bit, or 128-bit bus) to skip between two unchained descriptors.
    uint32_t DSL : 3;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH2_CONTROL*>(0x4043D200); }
};

// DMA Channel 2 Transmit Control
//
union DMA_CH2_TX_CONTROL {
  
  enum class eST : uint32_t {
    eSTOP = 0, // Stop Transmission Command
    eSTART = 1, // Start Transmission Command
  };
  
  enum class eOSF : uint32_t {
    eDISABLE = 0, // Operate on Second Packet disabled
    eENABLE = 1, // Operate on Second Packet enabled
  };
  
  enum class eIPBL : uint32_t {
    eDISABLE = 0, // Ignore PBL Requirement is disabled
    eENABLE = 1, // Ignore PBL Requirement is enabled
  };
  
  enum class eEDSE : uint32_t {
    eDISABLE = 0, // Enhanced Descriptor is disabled
    eENABLE = 1, // Enhanced Descriptor is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state.
    eST ST : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained.
    eOSF OSF : 1;
    uint32_t _reserved_1 : 10;
    /// read-write - Ignore PBL Requirement When this bit is set, the DMA does not check for PBL number of locations in the MTL before initiating a transfer.
    eIPBL IPBL : 1;
    /// read-write - Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t TxPBL : 6;
    uint32_t _reserved_2 : 6;
    /// read-write - Enhanced Descriptor Enable When this bit is set, the corresponding channel uses Enhanced Descriptors that are 32 Bytes for both Normal and Context Descriptors.
    eEDSE EDSE : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_TX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_TX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH2_TX_CONTROL*>(0x4043D204); }
};

// DMA Channel 2 Receive Control
//
union DMA_CH2_RX_CONTROL {
  
  enum class eSR : uint32_t {
    eSTOP = 0, // Stop Receive
    eSTART = 1, // Start Receive
  };
  
  enum class eRPF : uint32_t {
    eDISABLE = 0, // Rx Packet Flush is disabled
    eENABLE = 1, // Rx Packet Flush is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets.
    eSR SR : 1;
    /// read-only - Receive Buffer size Low RBSZ[13:0] is split into two fields RBSZ_13_y and RBSZ_x_0.
    uint32_t RBSZ_x_0 : 3;
    /// read-write - Receive Buffer size High RBSZ[13:0] is split into two fields higher RBSZ_13_y and lower RBSZ_x_0.
    uint32_t RBSZ_13_y : 11;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t RxPBL : 6;
    uint32_t _reserved_1 : 9;
    /// read-write - Rx Packet Flush.
    eRPF RPF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH2_RX_CONTROL*>(0x4043D208); }
};

// Channel 2 Tx Descriptor List Address
//
union DMA_CH2_TXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list.
    uint32_t TDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_TXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_TXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH2_TXDESC_LIST_ADDRESS*>(0x4043D214); }
};

// Channel 2 Rx Descriptor List Address
//
union DMA_CH2_RXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list.
    uint32_t RDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH2_RXDESC_LIST_ADDRESS*>(0x4043D21C); }
};

// Channel 2 Tx Descriptor Tail Pointer
//
union DMA_CH2_TXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring.
    uint32_t TDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_TXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_TXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH2_TXDESC_TAIL_POINTER*>(0x4043D220); }
};

// Channel 2 Rx Descriptor Tail Pointer
//
union DMA_CH2_RXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring.
    uint32_t RDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH2_RXDESC_TAIL_POINTER*>(0x4043D228); }
};

// Channel 2 Tx Descriptor Ring Length
//
union DMA_CH2_TXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring.
    uint32_t TDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_TXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_TXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH2_TXDESC_RING_LENGTH*>(0x4043D22C); }
};

// Channel 2 Rx Descriptor Ring Length
//
union DMA_CH2_RXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring.
    uint32_t RDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH2_RXDESC_RING_LENGTH*>(0x4043D230); }
};

// Channel 2 Interrupt Enable
//
union DMA_CH2_INTERRUPT_ENABLE {
  
  enum class eTIE : uint32_t {
    eDISABLE = 0, // Transmit Interrupt is disabled
    eENABLE = 1, // Transmit Interrupt is enabled
  };
  
  enum class eTXSE : uint32_t {
    eDISABLE = 0, // Transmit Stopped is disabled
    eENABLE = 1, // Transmit Stopped is enabled
  };
  
  enum class eTBUE : uint32_t {
    eDISABLE = 0, // Transmit Buffer Unavailable is disabled
    eENABLE = 1, // Transmit Buffer Unavailable is enabled
  };
  
  enum class eRIE : uint32_t {
    eDISABLE = 0, // Receive Interrupt is disabled
    eENABLE = 1, // Receive Interrupt is enabled
  };
  
  enum class eRBUE : uint32_t {
    eDISABLE = 0, // Receive Buffer Unavailable is disabled
    eENABLE = 1, // Receive Buffer Unavailable is enabled
  };
  
  enum class eRSE : uint32_t {
    eDISABLE = 0, // Receive Stopped is disabled
    eENABLE = 1, // Receive Stopped is enabled
  };
  
  enum class eRWTE : uint32_t {
    eDISABLE = 0, // Receive Watchdog Timeout is disabled
    eENABLE = 1, // Receive Watchdog Timeout is enabled
  };
  
  enum class eETIE : uint32_t {
    eDISABLE = 0, // Early Transmit Interrupt is disabled
    eENABLE = 1, // Early Transmit Interrupt is enabled
  };
  
  enum class eERIE : uint32_t {
    eDISABLE = 0, // Early Receive Interrupt is disabled
    eENABLE = 1, // Early Receive Interrupt is enabled
  };
  
  enum class eFBEE : uint32_t {
    eDISABLE = 0, // Fatal Bus Error is disabled
    eENABLE = 1, // Fatal Bus Error is enabled
  };
  
  enum class eCDEE : uint32_t {
    eDISABLE = 0, // Context Descriptor Error is disabled
    eENABLE = 1, // Context Descriptor Error is enabled
  };
  
  enum class eAIE : uint32_t {
    eDISABLE = 0, // Abnormal Interrupt Summary is disabled
    eENABLE = 1, // Abnormal Interrupt Summary is enabled
  };
  
  enum class eNIE : uint32_t {
    eDISABLE = 0, // Normal Interrupt Summary is disabled
    eENABLE = 1, // Normal Interrupt Summary is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled.
    eTIE TIE : 1;
    /// read-write - Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled.
    eTXSE TXSE : 1;
    /// read-write - Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled.
    eTBUE TBUE : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled.
    eRIE RIE : 1;
    /// read-write - Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled.
    eRBUE RBUE : 1;
    /// read-write - Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled.
    eRSE RSE : 1;
    /// read-write - Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled.
    eRWTE RWTE : 1;
    /// read-write - Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled.
    eETIE ETIE : 1;
    /// read-write - Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled.
    eERIE ERIE : 1;
    /// read-write - Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled.
    eFBEE FBEE : 1;
    /// read-write - Context Descriptor Error Enable When this bit is set along with the AIE bit, the Descriptor error interrupt is enabled.
    eCDEE CDEE : 1;
    /// read-write - Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled.
    eAIE AIE : 1;
    /// read-write - Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled.
    eNIE NIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile DMA_CH2_INTERRUPT_ENABLE*>(0x4043D234); }
};

// Channel 2 Receive Interrupt Watchdog Timer
//
union DMA_CH2_RX_INTERRUPT_WATCHDOG_TIMER {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set.
    uint32_t RWT : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Receive Interrupt Watchdog Timer Count Units This fields indicates the number of system clock cycles corresponding to one unit in RWT field.
    uint32_t RWTU : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RX_INTERRUPT_WATCHDOG_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RX_INTERRUPT_WATCHDOG_TIMER &Instance() { return *reinterpret_cast<volatile DMA_CH2_RX_INTERRUPT_WATCHDOG_TIMER*>(0x4043D238); }
};

// Channel 2 Slot Function Control and Status
//
union DMA_CH2_SLOT_FUNCTION_CONTROL_STATUS {
  
  enum class eESC : uint32_t {
    eDISABLE = 0, // Slot Comparison is disabled
    eENABLE = 1, // Slot Comparison is enabled
  };
  
  enum class eASC : uint32_t {
    eDISABLE = 0, // Advance Slot Check is disabled
    eENABLE = 1, // Advance Slot Check is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Slot Comparison When set, this bit enables the checking of the slot numbers programmed in the Tx descriptor with the current reference given in the RSN field.
    eESC ESC : 1;
    /// read-write - Advance Slot Check When set, this bit enables the DMA to fetch the data from the buffer when the slot number (SLOTNUM) programmed in the Tx descriptor is - equal to the reference slot number given in the RSN field or - ahead of the reference slot number by up to two slots This bit is applicable only when the ESC bit is set.
    eASC ASC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Slot Interval Value This field controls the period of the slot interval in which the TxDMA fetches the scheduled packets.
    uint32_t SIV : 12;
    /// read-only - Reference Slot Number This field gives the current value of the reference slot number in the DMA.
    uint32_t RSN : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_SLOT_FUNCTION_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000007C0; }
  static inline volatile DMA_CH2_SLOT_FUNCTION_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH2_SLOT_FUNCTION_CONTROL_STATUS*>(0x4043D23C); }
};

// Channel 2 Current Application Transmit Descriptor
//
union DMA_CH2_CURRENT_APP_TXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_CURRENT_APP_TXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_CURRENT_APP_TXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH2_CURRENT_APP_TXDESC*>(0x4043D244); }
};

// Channel 2 Current Application Receive Descriptor
//
union DMA_CH2_CURRENT_APP_RXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_CURRENT_APP_RXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_CURRENT_APP_RXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH2_CURRENT_APP_RXDESC*>(0x4043D24C); }
};

// Channel 2 Current Application Transmit Buffer Address
//
union DMA_CH2_CURRENT_APP_TXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_CURRENT_APP_TXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_CURRENT_APP_TXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH2_CURRENT_APP_TXBUFFER*>(0x4043D254); }
};

// Channel 2 Current Application Receive Buffer Address
//
union DMA_CH2_CURRENT_APP_RXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_CURRENT_APP_RXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_CURRENT_APP_RXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH2_CURRENT_APP_RXBUFFER*>(0x4043D25C); }
};

// DMA Channel 2 Status
//
union DMA_CH2_STATUS {
  
  enum class eTI : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not detected
    eACTIVE = 1, // Transmit Interrupt status detected
  };
  
  enum class eTPS : uint32_t {
    eINACTIVE = 0, // Transmit Process Stopped status not detected
    eACTIVE = 1, // Transmit Process Stopped status detected
  };
  
  enum class eTBU : uint32_t {
    eINACTIVE = 0, // Transmit Buffer Unavailable status not detected
    eACTIVE = 1, // Transmit Buffer Unavailable status detected
  };
  
  enum class eRI : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not detected
    eACTIVE = 1, // Receive Interrupt status detected
  };
  
  enum class eRBU : uint32_t {
    eINACTIVE = 0, // Receive Buffer Unavailable status not detected
    eACTIVE = 1, // Receive Buffer Unavailable status detected
  };
  
  enum class eRPS : uint32_t {
    eINACTIVE = 0, // Receive Process Stopped status not detected
    eACTIVE = 1, // Receive Process Stopped status detected
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // Receive Watchdog Timeout status not detected
    eACTIVE = 1, // Receive Watchdog Timeout status detected
  };
  
  enum class eETI : uint32_t {
    eINACTIVE = 0, // Early Transmit Interrupt status not detected
    eACTIVE = 1, // Early Transmit Interrupt status detected
  };
  
  enum class eERI : uint32_t {
    eINACTIVE = 0, // Early Receive Interrupt status not detected
    eACTIVE = 1, // Early Receive Interrupt status detected
  };
  
  enum class eFBE : uint32_t {
    eINACTIVE = 0, // Fatal Bus Error status not detected
    eACTIVE = 1, // Fatal Bus Error status detected
  };
  
  enum class eCDE : uint32_t {
    eINACTIVE = 0, // Context Descriptor Error status not detected
    eACTIVE = 1, // Context Descriptor Error status detected
  };
  
  enum class eAIS : uint32_t {
    eINACTIVE = 0, // Abnormal Interrupt Summary status not detected
    eACTIVE = 1, // Abnormal Interrupt Summary status detected
  };
  
  enum class eNIS : uint32_t {
    eINACTIVE = 0, // Normal Interrupt Summary status not detected
    eACTIVE = 1, // Normal Interrupt Summary status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt This bit indicates that the packet transmission is complete.
    eTI TI : 1;
    /// read-write - Transmit Process Stopped This bit is set when the transmission is stopped.
    eTPS TPS : 1;
    /// read-write - Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it.
    eTBU TBU : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt This bit indicates that the packet reception is complete.
    eRI RI : 1;
    /// read-write - Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it.
    eRBU RBU : 1;
    /// read-write - Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state.
    eRPS RPS : 1;
    /// read-write - Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received.
    eRWT RWT : 1;
    /// read-write - Early Transmit Interrupt This bit when set indicates that the TxDMA has completed the transfer of packet data to the MTL TXFIFO memory.
    eETI ETI : 1;
    /// read-write - Early Receive Interrupt This bit when set indicates that the RxDMA has completed the transfer of packet data to the memory.
    eERI ERI : 1;
    /// read-write - Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field).
    eFBE FBE : 1;
    /// read-write - Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow ( intermediate descriptor) or all one's descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid.
    eCDE CDE : 1;
    /// read-write - Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the DMA_CH2_INTERRUPT_ENABLE register: - Bit 1: Transmit Process Stopped - Bit 7: Receive Buffer Unavailable - Bit 8: Receive Process Stopped - Bit 10: Early Transmit Interrupt - Bit 12: Fatal Bus Error - Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit.
    eAIS AIS : 1;
    /// read-write - Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 0: Transmit Interrupt - Bit 2: Transmit Buffer Unavailable - Bit 6: Receive Interrupt - Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in DMA_CH2_INTERRUPT_ENABLE register) affect the Normal Interrupt Summary bit.
    eNIS NIS : 1;
    /// read-only - Tx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t TEB : 3;
    /// read-only - Rx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t REB : 3;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH2_STATUS*>(0x4043D260); }
};

// Channel 2 Missed Frame Counter
//
union DMA_CH2_MISS_FRAME_CNT {
  
  enum class eMFCO : uint32_t {
    eINACTIVE = 0, // Miss Frame Counter overflow not occurred
    eACTIVE = 1, // Miss Frame Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programming RPF field in DMA_CH2_RX_CONTROL register.
    uint32_t MFC : 11;
    uint32_t _reserved_0 : 4;
    /// read-only - Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further.
    eMFCO MFCO : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_MISS_FRAME_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_MISS_FRAME_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH2_MISS_FRAME_CNT*>(0x4043D264); }
};

// Channel 2 RXP Frames Accepted Counter
//
union DMA_CH2_RXP_ACCEPT_CNT {
  
  enum class eRXPACOF : uint32_t {
    eINACTIVE = 0, // Rx Parser Accept Counter overflow not occurred
    eACTIVE = 1, // Rx Parser Accept Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Accept Counter This 31-bit counter is implemented whenever a Rx Parser Accept a packet due to AF =1.
    uint32_t RXPAC : 31;
    /// read-only - Rx Parser Accept Counter Overflow Bit When set, this bit indicates that the RXPAC Counter field crossed the maximum limit.
    eRXPACOF RXPACOF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RXP_ACCEPT_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RXP_ACCEPT_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH2_RXP_ACCEPT_CNT*>(0x4043D268); }
};

// Channel 2 Receive ERI Counter
//
union DMA_CH2_RX_ERI_CNT {
  
  // Bit field definition.
  struct {
    /// read-only - ERI Counter When ERIC bit of DMA_CH2_RX_CONTROL register is set, this counter increments for burst transfer completed by the Rx DMA from the start of packet transfer.
    uint32_t ECNT : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH2_RX_ERI_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH2_RX_ERI_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH2_RX_ERI_CNT*>(0x4043D26C); }
};

// DMA Channel 3 Control
//
union DMA_CH3_CONTROL {
  
  enum class ePBLx8 : uint32_t {
    eDISABLE = 0, // 8xPBL mode is disabled
    eENABLE = 1, // 8xPBL mode is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    /// read-write - 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in DMA_CH3_TX_CONTROL and Bits[21:16] in DMA_CH3_RX_CONTROL is multiplied by eight times.
    ePBLx8 PBLx8 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Descriptor Skip Length This bit specifies the Word, Dword, or Lword number (depending on the 32-bit, 64-bit, or 128-bit bus) to skip between two unchained descriptors.
    uint32_t DSL : 3;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH3_CONTROL*>(0x4043D280); }
};

// DMA Channel 3 Transmit Control
//
union DMA_CH3_TX_CONTROL {
  
  enum class eST : uint32_t {
    eSTOP = 0, // Stop Transmission Command
    eSTART = 1, // Start Transmission Command
  };
  
  enum class eOSF : uint32_t {
    eDISABLE = 0, // Operate on Second Packet disabled
    eENABLE = 1, // Operate on Second Packet enabled
  };
  
  enum class eIPBL : uint32_t {
    eDISABLE = 0, // Ignore PBL Requirement is disabled
    eENABLE = 1, // Ignore PBL Requirement is enabled
  };
  
  enum class eEDSE : uint32_t {
    eDISABLE = 0, // Enhanced Descriptor is disabled
    eENABLE = 1, // Enhanced Descriptor is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state.
    eST ST : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained.
    eOSF OSF : 1;
    uint32_t _reserved_1 : 10;
    /// read-write - Ignore PBL Requirement When this bit is set, the DMA does not check for PBL number of locations in the MTL before initiating a transfer.
    eIPBL IPBL : 1;
    /// read-write - Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t TxPBL : 6;
    uint32_t _reserved_2 : 6;
    /// read-write - Enhanced Descriptor Enable When this bit is set, the corresponding channel uses Enhanced Descriptors that are 32 Bytes for both Normal and Context Descriptors.
    eEDSE EDSE : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_TX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_TX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH3_TX_CONTROL*>(0x4043D284); }
};

// DMA Channel 3 Receive Control
//
union DMA_CH3_RX_CONTROL {
  
  enum class eSR : uint32_t {
    eSTOP = 0, // Stop Receive
    eSTART = 1, // Start Receive
  };
  
  enum class eRPF : uint32_t {
    eDISABLE = 0, // Rx Packet Flush is disabled
    eENABLE = 1, // Rx Packet Flush is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets.
    eSR SR : 1;
    /// read-only - Receive Buffer size Low RBSZ[13:0] is split into two fields RBSZ_13_y and RBSZ_x_0.
    uint32_t RBSZ_x_0 : 3;
    /// read-write - Receive Buffer size High RBSZ[13:0] is split into two fields higher RBSZ_13_y and lower RBSZ_x_0.
    uint32_t RBSZ_13_y : 11;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t RxPBL : 6;
    uint32_t _reserved_1 : 9;
    /// read-write - Rx Packet Flush.
    eRPF RPF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH3_RX_CONTROL*>(0x4043D288); }
};

// Channel 3 Tx Descriptor List Address
//
union DMA_CH3_TXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list.
    uint32_t TDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_TXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_TXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH3_TXDESC_LIST_ADDRESS*>(0x4043D294); }
};

// Channel 3 Rx Descriptor List Address
//
union DMA_CH3_RXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list.
    uint32_t RDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH3_RXDESC_LIST_ADDRESS*>(0x4043D29C); }
};

// Channel 3 Tx Descriptor Tail Pointer
//
union DMA_CH3_TXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring.
    uint32_t TDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_TXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_TXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH3_TXDESC_TAIL_POINTER*>(0x4043D2A0); }
};

// Channel 3 Rx Descriptor Tail Pointer
//
union DMA_CH3_RXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring.
    uint32_t RDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH3_RXDESC_TAIL_POINTER*>(0x4043D2A8); }
};

// Channel 3 Tx Descriptor Ring Length
//
union DMA_CH3_TXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring.
    uint32_t TDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_TXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_TXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH3_TXDESC_RING_LENGTH*>(0x4043D2AC); }
};

// Channel 3 Rx Descriptor Ring Length
//
union DMA_CH3_RXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring.
    uint32_t RDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH3_RXDESC_RING_LENGTH*>(0x4043D2B0); }
};

// Channel 3 Interrupt Enable
//
union DMA_CH3_INTERRUPT_ENABLE {
  
  enum class eTIE : uint32_t {
    eDISABLE = 0, // Transmit Interrupt is disabled
    eENABLE = 1, // Transmit Interrupt is enabled
  };
  
  enum class eTXSE : uint32_t {
    eDISABLE = 0, // Transmit Stopped is disabled
    eENABLE = 1, // Transmit Stopped is enabled
  };
  
  enum class eTBUE : uint32_t {
    eDISABLE = 0, // Transmit Buffer Unavailable is disabled
    eENABLE = 1, // Transmit Buffer Unavailable is enabled
  };
  
  enum class eRIE : uint32_t {
    eDISABLE = 0, // Receive Interrupt is disabled
    eENABLE = 1, // Receive Interrupt is enabled
  };
  
  enum class eRBUE : uint32_t {
    eDISABLE = 0, // Receive Buffer Unavailable is disabled
    eENABLE = 1, // Receive Buffer Unavailable is enabled
  };
  
  enum class eRSE : uint32_t {
    eDISABLE = 0, // Receive Stopped is disabled
    eENABLE = 1, // Receive Stopped is enabled
  };
  
  enum class eRWTE : uint32_t {
    eDISABLE = 0, // Receive Watchdog Timeout is disabled
    eENABLE = 1, // Receive Watchdog Timeout is enabled
  };
  
  enum class eETIE : uint32_t {
    eDISABLE = 0, // Early Transmit Interrupt is disabled
    eENABLE = 1, // Early Transmit Interrupt is enabled
  };
  
  enum class eERIE : uint32_t {
    eDISABLE = 0, // Early Receive Interrupt is disabled
    eENABLE = 1, // Early Receive Interrupt is enabled
  };
  
  enum class eFBEE : uint32_t {
    eDISABLE = 0, // Fatal Bus Error is disabled
    eENABLE = 1, // Fatal Bus Error is enabled
  };
  
  enum class eCDEE : uint32_t {
    eDISABLE = 0, // Context Descriptor Error is disabled
    eENABLE = 1, // Context Descriptor Error is enabled
  };
  
  enum class eAIE : uint32_t {
    eDISABLE = 0, // Abnormal Interrupt Summary is disabled
    eENABLE = 1, // Abnormal Interrupt Summary is enabled
  };
  
  enum class eNIE : uint32_t {
    eDISABLE = 0, // Normal Interrupt Summary is disabled
    eENABLE = 1, // Normal Interrupt Summary is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled.
    eTIE TIE : 1;
    /// read-write - Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled.
    eTXSE TXSE : 1;
    /// read-write - Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled.
    eTBUE TBUE : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled.
    eRIE RIE : 1;
    /// read-write - Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled.
    eRBUE RBUE : 1;
    /// read-write - Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled.
    eRSE RSE : 1;
    /// read-write - Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled.
    eRWTE RWTE : 1;
    /// read-write - Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled.
    eETIE ETIE : 1;
    /// read-write - Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled.
    eERIE ERIE : 1;
    /// read-write - Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled.
    eFBEE FBEE : 1;
    /// read-write - Context Descriptor Error Enable When this bit is set along with the AIE bit, the Descriptor error interrupt is enabled.
    eCDEE CDEE : 1;
    /// read-write - Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled.
    eAIE AIE : 1;
    /// read-write - Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled.
    eNIE NIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile DMA_CH3_INTERRUPT_ENABLE*>(0x4043D2B4); }
};

// Channel 3 Receive Interrupt Watchdog Time
//
union DMA_CH3_RX_INTERRUPT_WATCHDOG_TIMER {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set.
    uint32_t RWT : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Receive Interrupt Watchdog Timer Count Units This fields indicates the number of system clock cycles corresponding to one unit in RWT field.
    uint32_t RWTU : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RX_INTERRUPT_WATCHDOG_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RX_INTERRUPT_WATCHDOG_TIMER &Instance() { return *reinterpret_cast<volatile DMA_CH3_RX_INTERRUPT_WATCHDOG_TIMER*>(0x4043D2B8); }
};

// Channel 3 Slot Function Control and Status
//
union DMA_CH3_SLOT_FUNCTION_CONTROL_STATUS {
  
  enum class eESC : uint32_t {
    eDISABLE = 0, // Slot Comparison is disabled
    eENABLE = 1, // Slot Comparison is enabled
  };
  
  enum class eASC : uint32_t {
    eDISABLE = 0, // Advance Slot Check is disabled
    eENABLE = 1, // Advance Slot Check is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Slot Comparison When set, this bit enables the checking of the slot numbers programmed in the Tx descriptor with the current reference given in the RSN field.
    eESC ESC : 1;
    /// read-write - Advance Slot Check When set, this bit enables the DMA to fetch the data from the buffer when the slot number (SLOTNUM) programmed in the Tx descriptor is - equal to the reference slot number given in the RSN field or - ahead of the reference slot number by up to two slots This bit is applicable only when the ESC bit is set.
    eASC ASC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Slot Interval Value This field controls the period of the slot interval in which the TxDMA fetches the scheduled packets.
    uint32_t SIV : 12;
    /// read-only - Reference Slot Number This field gives the current value of the reference slot number in the DMA.
    uint32_t RSN : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_SLOT_FUNCTION_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000007C0; }
  static inline volatile DMA_CH3_SLOT_FUNCTION_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH3_SLOT_FUNCTION_CONTROL_STATUS*>(0x4043D2BC); }
};

// Channel 3 Current Application Transmit Descriptor
//
union DMA_CH3_CURRENT_APP_TXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_CURRENT_APP_TXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_CURRENT_APP_TXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH3_CURRENT_APP_TXDESC*>(0x4043D2C4); }
};

// Channel 3 Current Application Receive Descriptor
//
union DMA_CH3_CURRENT_APP_RXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_CURRENT_APP_RXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_CURRENT_APP_RXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH3_CURRENT_APP_RXDESC*>(0x4043D2CC); }
};

// Channel 3 Current Application Transmit Buffer Address
//
union DMA_CH3_CURRENT_APP_TXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_CURRENT_APP_TXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_CURRENT_APP_TXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH3_CURRENT_APP_TXBUFFER*>(0x4043D2D4); }
};

// Channel 3 Current Application Receive Buffer Address
//
union DMA_CH3_CURRENT_APP_RXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_CURRENT_APP_RXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_CURRENT_APP_RXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH3_CURRENT_APP_RXBUFFER*>(0x4043D2DC); }
};

// DMA Channel 3 Status
//
union DMA_CH3_STATUS {
  
  enum class eTI : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not detected
    eACTIVE = 1, // Transmit Interrupt status detected
  };
  
  enum class eTPS : uint32_t {
    eINACTIVE = 0, // Transmit Process Stopped status not detected
    eACTIVE = 1, // Transmit Process Stopped status detected
  };
  
  enum class eTBU : uint32_t {
    eINACTIVE = 0, // Transmit Buffer Unavailable status not detected
    eACTIVE = 1, // Transmit Buffer Unavailable status detected
  };
  
  enum class eRI : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not detected
    eACTIVE = 1, // Receive Interrupt status detected
  };
  
  enum class eRBU : uint32_t {
    eINACTIVE = 0, // Receive Buffer Unavailable status not detected
    eACTIVE = 1, // Receive Buffer Unavailable status detected
  };
  
  enum class eRPS : uint32_t {
    eINACTIVE = 0, // Receive Process Stopped status not detected
    eACTIVE = 1, // Receive Process Stopped status detected
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // Receive Watchdog Timeout status not detected
    eACTIVE = 1, // Receive Watchdog Timeout status detected
  };
  
  enum class eETI : uint32_t {
    eINACTIVE = 0, // Early Transmit Interrupt status not detected
    eACTIVE = 1, // Early Transmit Interrupt status detected
  };
  
  enum class eERI : uint32_t {
    eINACTIVE = 0, // Early Receive Interrupt status not detected
    eACTIVE = 1, // Early Receive Interrupt status detected
  };
  
  enum class eFBE : uint32_t {
    eINACTIVE = 0, // Fatal Bus Error status not detected
    eACTIVE = 1, // Fatal Bus Error status detected
  };
  
  enum class eCDE : uint32_t {
    eINACTIVE = 0, // Context Descriptor Error status not detected
    eACTIVE = 1, // Context Descriptor Error status detected
  };
  
  enum class eAIS : uint32_t {
    eINACTIVE = 0, // Abnormal Interrupt Summary status not detected
    eACTIVE = 1, // Abnormal Interrupt Summary status detected
  };
  
  enum class eNIS : uint32_t {
    eINACTIVE = 0, // Normal Interrupt Summary status not detected
    eACTIVE = 1, // Normal Interrupt Summary status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt This bit indicates that the packet transmission is complete.
    eTI TI : 1;
    /// read-write - Transmit Process Stopped This bit is set when the transmission is stopped.
    eTPS TPS : 1;
    /// read-write - Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it.
    eTBU TBU : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt This bit indicates that the packet reception is complete.
    eRI RI : 1;
    /// read-write - Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it.
    eRBU RBU : 1;
    /// read-write - Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state.
    eRPS RPS : 1;
    /// read-write - Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received.
    eRWT RWT : 1;
    /// read-write - Early Transmit Interrupt This bit when set indicates that the TxDMA has completed the transfer of packet data to the MTL TXFIFO memory.
    eETI ETI : 1;
    /// read-write - Early Receive Interrupt This bit when set indicates that the RxDMA has completed the transfer of packet data to the memory.
    eERI ERI : 1;
    /// read-write - Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field).
    eFBE FBE : 1;
    /// read-write - Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow ( intermediate descriptor) or all one's descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid.
    eCDE CDE : 1;
    /// read-write - Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the DMA_CH3_INTERRUPT_ENABLE register: - Bit 1: Transmit Process Stopped - Bit 7: Receive Buffer Unavailable - Bit 8: Receive Process Stopped - Bit 10: Early Transmit Interrupt - Bit 12: Fatal Bus Error - Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit.
    eAIS AIS : 1;
    /// read-write - Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the DMA_CH3_INTERRUPT_ENABLE register: - Bit 0: Transmit Interrupt - Bit 2: Transmit Buffer Unavailable - Bit 6: Receive Interrupt - Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in DMA_CH3_INTERRUPT_ENABLE register) affect the Normal Interrupt Summary bit.
    eNIS NIS : 1;
    /// read-only - Tx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t TEB : 3;
    /// read-only - Rx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t REB : 3;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH3_STATUS*>(0x4043D2E0); }
};

// Channel 3 Missed Frame Counter
//
union DMA_CH3_MISS_FRAME_CNT {
  
  enum class eMFCO : uint32_t {
    eINACTIVE = 0, // Miss Frame Counter overflow not occurred
    eACTIVE = 1, // Miss Frame Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programming RPF field in RX_CONTROL register.
    uint32_t MFC : 11;
    uint32_t _reserved_0 : 4;
    /// read-only - Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further.
    eMFCO MFCO : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_MISS_FRAME_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_MISS_FRAME_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH3_MISS_FRAME_CNT*>(0x4043D2E4); }
};

// Channel 3 RXP Frames Accepted Counter
//
union DMA_CH3_RXP_ACCEPT_CNT {
  
  enum class eRXPACOF : uint32_t {
    eINACTIVE = 0, // Rx Parser Accept Counter overflow not occurred
    eACTIVE = 1, // Rx Parser Accept Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Accept Counter This 31-bit counter is implemented whenever a Rx Parser Accept a packet due to AF =1.
    uint32_t RXPAC : 31;
    /// read-only - Rx Parser Accept Counter Overflow Bit When set, this bit indicates that the RXPAC Counter field crossed the maximum limit.
    eRXPACOF RXPACOF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RXP_ACCEPT_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RXP_ACCEPT_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH3_RXP_ACCEPT_CNT*>(0x4043D2E8); }
};

// Channel 3 Receive ERI Counter
//
union DMA_CH3_RX_ERI_CNT {
  
  // Bit field definition.
  struct {
    /// read-only - ERI Counter When ERIC bit of DMA_CH3_RX_CONTROL register is set, this counter increments for burst transfer completed by the Rx DMA from the start of packet transfer.
    uint32_t ECNT : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH3_RX_ERI_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH3_RX_ERI_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH3_RX_ERI_CNT*>(0x4043D2EC); }
};

// DMA Channel 4 Control
//
union DMA_CH4_CONTROL {
  
  enum class ePBLx8 : uint32_t {
    eDISABLE = 0, // 8xPBL mode is disabled
    eENABLE = 1, // 8xPBL mode is enabled
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 16;
    /// read-write - 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in DMA_CH4_TX_CONTROL and Bits[21:16] in DMA_CH4_RX_CONTROL is multiplied by eight times.
    ePBLx8 PBLx8 : 1;
    uint32_t _reserved_1 : 1;
    /// read-write - Descriptor Skip Length This bit specifies the Word, Dword, or Lword number (depending on the 32-bit, 64-bit, or 128-bit bus) to skip between two unchained descriptors.
    uint32_t DSL : 3;
    uint32_t _reserved_2 : 11;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH4_CONTROL*>(0x4043D300); }
};

// DMA Channel 4 Transmit Control
//
union DMA_CH4_TX_CONTROL {
  
  enum class eST : uint32_t {
    eSTOP = 0, // Stop Transmission Command
    eSTART = 1, // Start Transmission Command
  };
  
  enum class eOSF : uint32_t {
    eDISABLE = 0, // Operate on Second Packet disabled
    eENABLE = 1, // Operate on Second Packet enabled
  };
  
  enum class eIPBL : uint32_t {
    eDISABLE = 0, // Ignore PBL Requirement is disabled
    eENABLE = 1, // Ignore PBL Requirement is enabled
  };
  
  enum class eEDSE : uint32_t {
    eDISABLE = 0, // Enhanced Descriptor is disabled
    eENABLE = 1, // Enhanced Descriptor is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state.
    eST ST : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained.
    eOSF OSF : 1;
    uint32_t _reserved_1 : 10;
    /// read-write - Ignore PBL Requirement When this bit is set, the DMA does not check for PBL number of locations in the MTL before initiating a transfer.
    eIPBL IPBL : 1;
    /// read-write - Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t TxPBL : 6;
    uint32_t _reserved_2 : 6;
    /// read-write - Enhanced Descriptor Enable When this bit is set, the corresponding channel uses Enhanced Descriptors that are 32 Bytes for both Normal and Context Descriptors.
    eEDSE EDSE : 1;
    uint32_t _reserved_3 : 3;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_TX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_TX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH4_TX_CONTROL*>(0x4043D304); }
};

// DMA Channel 4 Receive Control
//
union DMA_CH4_RX_CONTROL {
  
  enum class eSR : uint32_t {
    eSTOP = 0, // Stop Receive
    eSTART = 1, // Start Receive
  };
  
  enum class eRPF : uint32_t {
    eDISABLE = 0, // Rx Packet Flush is disabled
    eENABLE = 1, // Rx Packet Flush is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets.
    eSR SR : 1;
    /// read-only - Receive Buffer size Low RBSZ[13:0] is split into two fields RBSZ_13_y and RBSZ_x_0.
    uint32_t RBSZ_x_0 : 3;
    /// read-write - Receive Buffer size High RBSZ[13:0] is split into two fields higher RBSZ_13_y and lower RBSZ_x_0.
    uint32_t RBSZ_13_y : 11;
    uint32_t _reserved_0 : 1;
    /// read-write - Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA block data transfer.
    uint32_t RxPBL : 6;
    uint32_t _reserved_1 : 9;
    /// read-write - Rx Packet Flush.
    eRPF RPF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RX_CONTROL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RX_CONTROL &Instance() { return *reinterpret_cast<volatile DMA_CH4_RX_CONTROL*>(0x4043D308); }
};

// Channel 4 Tx Descriptor List Address
//
union DMA_CH4_TXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list.
    uint32_t TDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_TXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_TXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH4_TXDESC_LIST_ADDRESS*>(0x4043D314); }
};

// Channel 4 Rx Descriptor List Address
//
union DMA_CH4_RXDESC_LIST_ADDRESS {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list.
    uint32_t RDESLA : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RXDESC_LIST_ADDRESS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RXDESC_LIST_ADDRESS &Instance() { return *reinterpret_cast<volatile DMA_CH4_RXDESC_LIST_ADDRESS*>(0x4043D31C); }
};

// Channel 4 Tx Descriptor Tail Pointer
//
union DMA_CH4_TXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring.
    uint32_t TDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_TXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_TXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH4_TXDESC_TAIL_POINTER*>(0x4043D320); }
};

// Channel 4 Rx Descriptor Tail Pointer
//
union DMA_CH4_RXDESC_TAIL_POINTER {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring.
    uint32_t RDTP : 29;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RXDESC_TAIL_POINTER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RXDESC_TAIL_POINTER &Instance() { return *reinterpret_cast<volatile DMA_CH4_RXDESC_TAIL_POINTER*>(0x4043D328); }
};

// Channel 4 Tx Descriptor Ring Length
//
union DMA_CH4_TXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring.
    uint32_t TDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_TXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_TXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH4_TXDESC_RING_LENGTH*>(0x4043D32C); }
};

// Channel 4 Rx Descriptor Ring Length
//
union DMA_CH4_RXDESC_RING_LENGTH {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring.
    uint32_t RDRL : 10;
    uint32_t _reserved_0 : 22;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RXDESC_RING_LENGTH() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RXDESC_RING_LENGTH &Instance() { return *reinterpret_cast<volatile DMA_CH4_RXDESC_RING_LENGTH*>(0x4043D330); }
};

// Channel 4 Interrupt Enable
//
union DMA_CH4_INTERRUPT_ENABLE {
  
  enum class eTIE : uint32_t {
    eDISABLE = 0, // Transmit Interrupt is disabled
    eENABLE = 1, // Transmit Interrupt is enabled
  };
  
  enum class eTXSE : uint32_t {
    eDISABLE = 0, // Transmit Stopped is disabled
    eENABLE = 1, // Transmit Stopped is enabled
  };
  
  enum class eTBUE : uint32_t {
    eDISABLE = 0, // Transmit Buffer Unavailable is disabled
    eENABLE = 1, // Transmit Buffer Unavailable is enabled
  };
  
  enum class eRIE : uint32_t {
    eDISABLE = 0, // Receive Interrupt is disabled
    eENABLE = 1, // Receive Interrupt is enabled
  };
  
  enum class eRBUE : uint32_t {
    eDISABLE = 0, // Receive Buffer Unavailable is disabled
    eENABLE = 1, // Receive Buffer Unavailable is enabled
  };
  
  enum class eRSE : uint32_t {
    eDISABLE = 0, // Receive Stopped is disabled
    eENABLE = 1, // Receive Stopped is enabled
  };
  
  enum class eRWTE : uint32_t {
    eDISABLE = 0, // Receive Watchdog Timeout is disabled
    eENABLE = 1, // Receive Watchdog Timeout is enabled
  };
  
  enum class eETIE : uint32_t {
    eDISABLE = 0, // Early Transmit Interrupt is disabled
    eENABLE = 1, // Early Transmit Interrupt is enabled
  };
  
  enum class eERIE : uint32_t {
    eDISABLE = 0, // Early Receive Interrupt is disabled
    eENABLE = 1, // Early Receive Interrupt is enabled
  };
  
  enum class eFBEE : uint32_t {
    eDISABLE = 0, // Fatal Bus Error is disabled
    eENABLE = 1, // Fatal Bus Error is enabled
  };
  
  enum class eCDEE : uint32_t {
    eDISABLE = 0, // Context Descriptor Error is disabled
    eENABLE = 1, // Context Descriptor Error is enabled
  };
  
  enum class eAIE : uint32_t {
    eDISABLE = 0, // Abnormal Interrupt Summary is disabled
    eENABLE = 1, // Abnormal Interrupt Summary is enabled
  };
  
  enum class eNIE : uint32_t {
    eDISABLE = 0, // Normal Interrupt Summary is disabled
    eENABLE = 1, // Normal Interrupt Summary is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled.
    eTIE TIE : 1;
    /// read-write - Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled.
    eTXSE TXSE : 1;
    /// read-write - Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled.
    eTBUE TBUE : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled.
    eRIE RIE : 1;
    /// read-write - Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled.
    eRBUE RBUE : 1;
    /// read-write - Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled.
    eRSE RSE : 1;
    /// read-write - Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled.
    eRWTE RWTE : 1;
    /// read-write - Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled.
    eETIE ETIE : 1;
    /// read-write - Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled.
    eERIE ERIE : 1;
    /// read-write - Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled.
    eFBEE FBEE : 1;
    /// read-write - Context Descriptor Error Enable When this bit is set along with the AIE bit, the Descriptor error interrupt is enabled.
    eCDEE CDEE : 1;
    /// read-write - Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled.
    eAIE AIE : 1;
    /// read-write - Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled.
    eNIE NIE : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_INTERRUPT_ENABLE() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_INTERRUPT_ENABLE &Instance() { return *reinterpret_cast<volatile DMA_CH4_INTERRUPT_ENABLE*>(0x4043D334); }
};

// Channel 4 Receive Interrupt Watchdog Timer
//
union DMA_CH4_RX_INTERRUPT_WATCHDOG_TIMER {
  
  // Bit field definition.
  struct {
    /// read-write - Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set.
    uint32_t RWT : 8;
    uint32_t _reserved_0 : 8;
    /// read-write - Receive Interrupt Watchdog Timer Count Units This fields indicates the number of system clock cycles corresponding to one unit in RWT field.
    uint32_t RWTU : 2;
    uint32_t _reserved_1 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RX_INTERRUPT_WATCHDOG_TIMER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RX_INTERRUPT_WATCHDOG_TIMER &Instance() { return *reinterpret_cast<volatile DMA_CH4_RX_INTERRUPT_WATCHDOG_TIMER*>(0x4043D338); }
};

// Channel 4 Slot Function Control and Status
//
union DMA_CH4_SLOT_FUNCTION_CONTROL_STATUS {
  
  enum class eESC : uint32_t {
    eDISABLE = 0, // Slot Comparison is disabled
    eENABLE = 1, // Slot Comparison is enabled
  };
  
  enum class eASC : uint32_t {
    eDISABLE = 0, // Advance Slot Check is disabled
    eENABLE = 1, // Advance Slot Check is enabled
  };
  
  // Bit field definition.
  struct {
    /// read-write - Enable Slot Comparison When set, this bit enables the checking of the slot numbers programmed in the Tx descriptor with the current reference given in the RSN field.
    eESC ESC : 1;
    /// read-write - Advance Slot Check When set, this bit enables the DMA to fetch the data from the buffer when the slot number (SLOTNUM) programmed in the Tx descriptor is - equal to the reference slot number given in the RSN field or - ahead of the reference slot number by up to two slots This bit is applicable only when the ESC bit is set.
    eASC ASC : 1;
    uint32_t _reserved_0 : 2;
    /// read-write - Slot Interval Value This field controls the period of the slot interval in which the TxDMA fetches the scheduled packets.
    uint32_t SIV : 12;
    /// read-only - Reference Slot Number This field gives the current value of the reference slot number in the DMA.
    uint32_t RSN : 4;
    uint32_t _reserved_1 : 12;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_SLOT_FUNCTION_CONTROL_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x000007C0; }
  static inline volatile DMA_CH4_SLOT_FUNCTION_CONTROL_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH4_SLOT_FUNCTION_CONTROL_STATUS*>(0x4043D33C); }
};

// Channel 4 Current Application Transmit Descriptor
//
union DMA_CH4_CURRENT_APP_TXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_CURRENT_APP_TXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_CURRENT_APP_TXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH4_CURRENT_APP_TXDESC*>(0x4043D344); }
};

// Channel 4 Current Application Receive Descriptor
//
union DMA_CH4_CURRENT_APP_RXDESC {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRDESAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_CURRENT_APP_RXDESC() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_CURRENT_APP_RXDESC &Instance() { return *reinterpret_cast<volatile DMA_CH4_CURRENT_APP_RXDESC*>(0x4043D34C); }
};

// Channel 4 Current Application Transmit Buffer Address
//
union DMA_CH4_CURRENT_APP_TXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation.
    uint32_t CURTBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_CURRENT_APP_TXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_CURRENT_APP_TXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH4_CURRENT_APP_TXBUFFER*>(0x4043D354); }
};

// Channel 4 Current Application Receive Buffer Address
//
union DMA_CH4_CURRENT_APP_RXBUFFER {
  
  // Bit field definition.
  struct {
    /// read-only - Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation.
    uint32_t CURRBUFAPTR : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_CURRENT_APP_RXBUFFER() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_CURRENT_APP_RXBUFFER &Instance() { return *reinterpret_cast<volatile DMA_CH4_CURRENT_APP_RXBUFFER*>(0x4043D35C); }
};

// DMA Channel 4 Status
//
union DMA_CH4_STATUS {
  
  enum class eTI : uint32_t {
    eINACTIVE = 0, // Transmit Interrupt status not detected
    eACTIVE = 1, // Transmit Interrupt status detected
  };
  
  enum class eTPS : uint32_t {
    eINACTIVE = 0, // Transmit Process Stopped status not detected
    eACTIVE = 1, // Transmit Process Stopped status detected
  };
  
  enum class eTBU : uint32_t {
    eINACTIVE = 0, // Transmit Buffer Unavailable status not detected
    eACTIVE = 1, // Transmit Buffer Unavailable status detected
  };
  
  enum class eRI : uint32_t {
    eINACTIVE = 0, // Receive Interrupt status not detected
    eACTIVE = 1, // Receive Interrupt status detected
  };
  
  enum class eRBU : uint32_t {
    eINACTIVE = 0, // Receive Buffer Unavailable status not detected
    eACTIVE = 1, // Receive Buffer Unavailable status detected
  };
  
  enum class eRPS : uint32_t {
    eINACTIVE = 0, // Receive Process Stopped status not detected
    eACTIVE = 1, // Receive Process Stopped status detected
  };
  
  enum class eRWT : uint32_t {
    eINACTIVE = 0, // Receive Watchdog Timeout status not detected
    eACTIVE = 1, // Receive Watchdog Timeout status detected
  };
  
  enum class eETI : uint32_t {
    eINACTIVE = 0, // Early Transmit Interrupt status not detected
    eACTIVE = 1, // Early Transmit Interrupt status detected
  };
  
  enum class eERI : uint32_t {
    eINACTIVE = 0, // Early Receive Interrupt status not detected
    eACTIVE = 1, // Early Receive Interrupt status detected
  };
  
  enum class eFBE : uint32_t {
    eINACTIVE = 0, // Fatal Bus Error status not detected
    eACTIVE = 1, // Fatal Bus Error status detected
  };
  
  enum class eCDE : uint32_t {
    eINACTIVE = 0, // Context Descriptor Error status not detected
    eACTIVE = 1, // Context Descriptor Error status detected
  };
  
  enum class eAIS : uint32_t {
    eINACTIVE = 0, // Abnormal Interrupt Summary status not detected
    eACTIVE = 1, // Abnormal Interrupt Summary status detected
  };
  
  enum class eNIS : uint32_t {
    eINACTIVE = 0, // Normal Interrupt Summary status not detected
    eACTIVE = 1, // Normal Interrupt Summary status detected
  };
  
  // Bit field definition.
  struct {
    /// read-write - Transmit Interrupt This bit indicates that the packet transmission is complete.
    eTI TI : 1;
    /// read-write - Transmit Process Stopped This bit is set when the transmission is stopped.
    eTPS TPS : 1;
    /// read-write - Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it.
    eTBU TBU : 1;
    uint32_t _reserved_0 : 3;
    /// read-write - Receive Interrupt This bit indicates that the packet reception is complete.
    eRI RI : 1;
    /// read-write - Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it.
    eRBU RBU : 1;
    /// read-write - Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state.
    eRPS RPS : 1;
    /// read-write - Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received.
    eRWT RWT : 1;
    /// read-write - Early Transmit Interrupt This bit when set indicates that the TxDMA has completed the transfer of packet data to the MTL TXFIFO memory.
    eETI ETI : 1;
    /// read-write - Early Receive Interrupt This bit when set indicates that the RxDMA has completed the transfer of packet data to the memory.
    eERI ERI : 1;
    /// read-write - Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field).
    eFBE FBE : 1;
    /// read-write - Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow ( intermediate descriptor) or all one's descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid.
    eCDE CDE : 1;
    /// read-write - Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 1: Transmit Process Stopped - Bit 7: Receive Buffer Unavailable - Bit 8: Receive Process Stopped - Bit 10: Early Transmit Interrupt - Bit 12: Fatal Bus Error - Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit.
    eAIS AIS : 1;
    /// read-write - Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the INTERRUPT_ENABLE register: - Bit 0: Transmit Interrupt - Bit 2: Transmit Buffer Unavailable - Bit 6: Receive Interrupt - Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in INTERRUPT_ENABLE register) affect the Normal Interrupt Summary bit.
    eNIS NIS : 1;
    /// read-only - Tx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t TEB : 3;
    /// read-only - Rx DMA Error Bits This field indicates the type of error that caused a Bus Error.
    uint32_t REB : 3;
    uint32_t _reserved_1 : 10;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_STATUS &Instance() { return *reinterpret_cast<volatile DMA_CH4_STATUS*>(0x4043D360); }
};

// Channel 4 Missed Frame Counter
//
union DMA_CH4_MISS_FRAME_CNT {
  
  enum class eMFCO : uint32_t {
    eINACTIVE = 0, // Miss Frame Counter overflow not occurred
    eACTIVE = 1, // Miss Frame Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programming RPF field in RX_CONTROL register.
    uint32_t MFC : 11;
    uint32_t _reserved_0 : 4;
    /// read-only - Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further.
    eMFCO MFCO : 1;
    uint32_t _reserved_1 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_MISS_FRAME_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_MISS_FRAME_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH4_MISS_FRAME_CNT*>(0x4043D364); }
};

// Channel 4 RXP Frames Accepted Counter
//
union DMA_CH4_RXP_ACCEPT_CNT {
  
  enum class eRXPACOF : uint32_t {
    eINACTIVE = 0, // Rx Parser Accept Counter overflow not occurred
    eACTIVE = 1, // Rx Parser Accept Counter overflow occurred
  };
  
  // Bit field definition.
  struct {
    /// read-only - Rx Parser Accept Counter This 31-bit counter is implemented whenever a Rx Parser Accept a packet due to AF =1.
    uint32_t RXPAC : 31;
    /// read-only - Rx Parser Accept Counter Overflow Bit When set, this bit indicates that the RXPAC Counter field crossed the maximum limit.
    eRXPACOF RXPACOF : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RXP_ACCEPT_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RXP_ACCEPT_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH4_RXP_ACCEPT_CNT*>(0x4043D368); }
};

// Channel 4 Receive ERI Counter
//
union DMA_CH4_RX_ERI_CNT {
  
  // Bit field definition.
  struct {
    /// read-only - ERI Counter When ERIC bit of DMA_CH4_RX_CONTROL register is set, this counter increments for burst transfer completed by the Rx DMA from the start of packet transfer.
    uint32_t ECNT : 12;
    uint32_t _reserved_0 : 20;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DMA_CH4_RX_ERI_CNT() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DMA_CH4_RX_ERI_CNT &Instance() { return *reinterpret_cast<volatile DMA_CH4_RX_ERI_CNT*>(0x4043D36C); }
};


} // namespace nENET_QOS
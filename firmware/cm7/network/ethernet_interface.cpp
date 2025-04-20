#include "network/ethernet_interface.hpp"

#include "nx_api.h"

EthernetInterface::EthernetInterface()
{
  nx_system_initialize();
}

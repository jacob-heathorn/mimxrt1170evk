#include "network/gigabit_ethernet.hpp"

#include "nx_api.h"

GigabitEthernet::GigabitEthernet()
{
  nx_system_initialize();
}

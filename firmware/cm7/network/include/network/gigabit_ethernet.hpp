#pragma once

#include "ftl/singleton.hpp"
#include "nx_api.h" // todo remove

class GigabitEthernet : public ftl::Singleton<GigabitEthernet>
{
  friend class ftl::Singleton<GigabitEthernet>;
private:
  GigabitEthernet();

public:
  // TODO remove
  NX_IP *Ip0();
  NX_PACKET_POOL *Pool0();
};

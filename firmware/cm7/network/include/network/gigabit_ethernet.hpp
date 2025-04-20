#pragma once

#include "ftl/singleton.hpp"


class GigabitEthernet : public ftl::Singleton<GigabitEthernet>
{
  friend class ftl::Singleton<GigabitEthernet>;
private:
  GigabitEthernet();
};

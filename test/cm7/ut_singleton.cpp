#include "gtest/gtest.h"
#include "forge/singleton.hpp"
#include <cstdio>

// class MySingleton : public StaticSingleton<MySingleton> {
//   // Grant StaticSingleton access to MySingleton's private constructor.
//   friend class StaticSingleton<MySingleton>;

// public:
//   int data;

//   // Non-default constructor.
//   MySingleton(int d) : data(d) {
//       //std::cout << "MySingleton constructed with data = " << data << "\n";
//   }

//   void show() const {
//       printf("Data is: %d\n", data);
//   }
// };

// TEST(SimpleTest, ExpectBool) {
  
//   // Create the singleton in static storage.
//   MySingleton::create(42);

//   // Access the singleton instance.
//   MySingleton& inst = MySingleton::instance();
//   inst.show();

//   // Optionally, destroy the singleton.
//   MySingleton::destroy();
  
//   // EXPECT_TRUE(false);
// }

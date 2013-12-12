#if 0
#include "alib.h"

#include "core.h"
#include "debug.h"
#include "factory.h"
#include "graphics.h"
#include "math.h"
#include "meta.h"
#include "system.h"


#endif
#include <iostream>
#include "test.h"
namespace alib 
{
  namespace test 
  {
    void test_func() 
    {
      //std::cout << "test test" << std::endl;
    }
  }
}
int main(void)
{
#if 0
  alib::test_func();
  alib::core::test_func();
  alib::debug::test_func();
  alib::factory::test_func();
  alib::graphics::test_func();
  alib::math::test_func();
  alib::meta::test_func();
  alib::system::test_func();
#endif
  alib::test::test_func();
  return 0;
}
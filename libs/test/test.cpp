#include "alib/alib.h"

#include "core/core.h"
#include "debug/debug.h"
#include "containers/containers.h"
#include "factory/factory.h"
#include "graphics/graphics.h"
#include "math/math.h"
#include "meta/meta.h"
#include "system/system.h"
#include "test.h"

#include <iostream>
namespace alib 
{
  namespace test 
  {
    void test_func() 
    {
      std::cout << "test test" << std::endl;
    }
  }
}
int main(void)
{
  alib::test_func();
  alib::core::test_func();
  alib::debug::test_func();
  alib::containers::test_func();
  alib::factory::test_func();
  alib::graphics::test_func();
  alib::math::test_func();
  alib::meta::test_func();
  alib::system::test_func();
  alib::test::test_func();
  alib::containers::test_func();
  return 0;
}
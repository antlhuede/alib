#include "alib/source/alib.h"

#include "core/source/core.h"
#include "debug/source/debug.h"
#include "factory/source/factory.h"
#include "graphics/source/graphics.h"
#include "math/source/math.h"
#include "meta/source/meta.h"
#include "system/source/system.h"
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
  alib::factory::test_func();
  alib::graphics::test_func();
  alib::math::test_func();
  alib::meta::test_func();
  alib::system::test_func();
  alib::test::test_func();
  return 0;
}
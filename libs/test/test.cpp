#include "test\test.h"


using TF = decltype(&alib::test::run);
TF tests[] = { alib::test::core::run,
               alib::test::debug::run,
               alib::test::containers::run,
               alib::test::factory::run,
               alib::test::graphics::run,
               alib::test::math::run,
               alib::test::meta::run,
               alib::test::system::run,
               alib::test::alib::run };

int main(void)
{
  if(alib::test::run() == false)
    return -1;
  return 0;
}


#include <iostream>
namespace alib
{
  namespace test
  {
    bool run()
    {
      std::cout << "running tests..." << std::endl;

      size num_tests = sizeof(tests) / sizeof(TF);
      for(size i = 0; i < num_tests; ++i)
      {
        if(tests[i]() == false)
        {
          std::cout << "test[" << i << "] failed." << std::endl;
          return false;
        }
      }
    }
  }
}
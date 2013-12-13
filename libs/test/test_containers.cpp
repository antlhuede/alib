#include "test\test_containers.h"
#include <iostream>

namespace alib
{
namespace test
{
namespace containers
{
  using namespace alib::containers;
  bool test_string();
  bool run()
  {
    test_func();
    if (test_string() == false)
      return false;
    return true;
  }

  bool test_string()
  {
    byte* strings[] = { "hello", "world", "these", "are", "strings", "i", "want", "to", "test so fuck you" };
    size num_strings = sizeof(strings) / sizeof(byte*);

    for (size i = 0; i < num_strings; ++i)
    {
      string_fnv fnv(strings[i]);
      string_sum sum(strings[i]);
      string_x65599 x65599(strings[i]);
      std::cout << strings[i] << ":" << std::endl;
      std::cout << "  FNV: " << fnv.hash << std::endl;
      std::cout << "  sum: " << sum.hash << std::endl;
      std::cout << "  x65599: " << x65599.hash << std::endl;
      std::cout << std::endl;
    }

    return true;
  }
}
}
}
#include "hash_algorithms.h"
#include <iostream>

namespace alib 
{
namespace core
{
namespace hash_algorithms 
{
  stringhash x65599::generate_hash(const byte* str)
  {
    stringhash hash = do_hash(str, 0);
    return hash ^ (hash >> 16);
  }
  stringhash x65599::do_hash(const byte* str, stringhash hash)
  {
    return (*str == 0) ? hash : do_hash(str + 1, *str + hash * 65599);
  }

  stringhash FNV::generate_hash(const byte* str)
  {
    return 0;
  }

  stringhash sum::generate_hash(const byte* str)
  {
    return (*str == 0) ? 0 : (*str + generate_hash(str + 1));
  }
}
}
}
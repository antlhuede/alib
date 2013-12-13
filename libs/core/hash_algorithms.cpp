#include "hash_algorithms.h"
#include "fnv.h"
#include <iostream>

namespace alib 
{
namespace core
{
namespace hash_algorithms 
{
  auto x65599::generate_hash(const byte* str)-> hashtype
  {
    hashtype hash = do_hash(str, 0);
    return hash ^ (hash >> 16);
  }
  auto x65599::do_hash(const byte* str, hashtype hash)-> hashtype
  {
    return (*str == 0) ? hash : do_hash(str + 1, *str + hash * 65599);
  }

  auto FNV::generate_hash(const byte* str)-> hashtype
  {
    return fnv_32a_str(str);
  }

  auto sum::generate_hash(const byte* str)-> hashtype
  {
    return (*str == 0) ? 0 : (*str + generate_hash(str + 1));
  }
}
}
}
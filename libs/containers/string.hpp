#include "string.h"

namespace alib
{
  namespace containers
  {
    template <typename H>
    string<H>::string(const byte* str) 
      : hash(HashAlgorithm::generate_hash(str))
    {
    }
  }
}
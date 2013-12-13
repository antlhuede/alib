#include "string.h"

namespace alib
{
  namespace containers
  {
    template <typename H>
    string<H>::string(const byte* str)
    {
      m_hash = HashAlgorithm::generate_hash(str);
    }
  }
}
#pragma once
#include "core\core.h"

namespace alib
{
  namespace containers
  {
    template <class H>
    class string 
    {
      public:
        using HashAlgorithm = H;
        string(const byte* str);
        const typename HashAlgorithm::hashtype hash;
    };

    typedef string<alib::core::hash_algorithms::FNV> string_fnv;
    typedef string<alib::core::hash_algorithms::sum> string_sum;
    typedef string<alib::core::hash_algorithms::x65599> string_x65599;
  }
}

#include "containers\string.hpp"
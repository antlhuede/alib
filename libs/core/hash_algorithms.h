#pragma once

#include "core\types.h"

namespace alib
{
  namespace core
  {
    namespace hash_algorithms
    {
      class x65599
      {
      public:
        static stringhash generate_hash(const byte* str);

      private:
        static stringhash do_hash(const byte* str, stringhash hash);
      };

      class FNV
      {
      public:
        static stringhash generate_hash(const byte* str);
      };

      class sum
      {
      public:
        static stringhash generate_hash(const byte* str);
      };
    }
  }
}

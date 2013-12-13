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
        typedef stringhash hashtype;
        static hashtype generate_hash(const byte* str);

      private:
        static hashtype do_hash(const byte* str, hashtype hash);
      };

      class FNV
      {
      public:
        typedef stringhash hashtype;
        static hashtype generate_hash(const byte* str);
      };

      class sum
      {
      public:
        typedef stringhash hashtype;
        static hashtype generate_hash(const byte* str);
      };
    }
  }
}

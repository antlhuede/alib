#pragma once

//basic types
typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;
typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;

typedef float float32;
typedef double float64;

typedef size_t size;

typedef char byte;
typedef unsigned char ubyte;

namespace alib { 
  namespace core { namespace hash_algorithms { class FNV; } }
  namespace containers { template <class T> class string; }
}

using default_hash_algorithm = alib::core::hash_algorithms::FNV;
using string = alib::containers::string<default_hash_algorithm>;

typedef uint32 stringhash;
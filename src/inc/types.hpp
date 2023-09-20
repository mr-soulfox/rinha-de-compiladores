#ifndef RINHA_TYPES
#define RINHA_TYPES
#pragma once

#include <array>
#include <string>
#include <cstdint>

class Types
{
  public:
    enum class Int : int { };
    enum class Char : unsigned char { };
    enum class Bool : bool { };

    static const int Void = 0;

    template<int str_len>
    struct Str: std::array<Char, str_len> { };
};

#endif

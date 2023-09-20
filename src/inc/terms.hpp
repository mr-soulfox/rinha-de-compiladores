#ifndef RINHA_TERM
#define RINHA_TERM
#pragma once

#include <string>
#include <cstdint>
#include <memory>

class Term
{
  public:
    struct Int
    {
      std::int32_t value;
    };

    struct Str
    {
      std::string value;
    };

    struct Print
    {
      std::shared_ptr<Term> value;
    };
};

#endif

#pragma once

#include "word/main/properties/base.hpp"


namespace MINIDOCX_NAMESPACE
{
  struct SimpleFieldProperties
  {

    FieldCode code_;
    std::optional<bool> lock_;
    std::optional<bool> dirty_;

  };

}
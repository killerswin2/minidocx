#pragma once

#include "word/main/properties/base.hpp"


namespace MINIDOCX_NAMESPACE
{
  struct SimpleFieldProperties
  {
    //TODO: simple fields/ fields can take inputs, need to handle that
    FieldCode code_;
    std::optional<bool> lock_;
    std::optional<bool> dirty_;

  };

}
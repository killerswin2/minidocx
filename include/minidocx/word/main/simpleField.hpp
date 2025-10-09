#pragma once

#include "word/main/base.hpp"
#include "word/main/properties/simpleField.hpp"
#include "utils/file.hpp"


#include <memory>
#include <list>




namespace MINIDOCX_NAMESPACE
{
  class RichText;
  using RunPointer = std::shared_ptr<Run>;
  using RichTextPointer = std::shared_ptr<RichText>;

  class MINIDOCX_API SimpleField : public Run
  {
  public:
    SimpleField() : Run(RunType::SimpleField){}
    ~SimpleField() override = default;

    SimpleFieldProperties prop_;

  private:
    //RunPointer run_;

  public:
  };
}

#pragma once

#include "word/main/container.hpp"
#include "packaging/relationship.hpp"
#include "packaging/part.hpp"


namespace MINIDOCX_NAMESPACE
{
  class MINIDOCX_API Header : public Container
  {
  public:
    Header(const RelationshipId id, const PartName name): id_{id}, name_{name} {}
    RelationshipId id_;
    PartName name_;
  };
}
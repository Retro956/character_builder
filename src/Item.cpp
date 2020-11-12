#include "Item.hpp"

Item::Item(std::string name, std::string description)
  : m_name(name), m_description(description)
{
}

Item::Item() : m_name("NONE")
{
}

Item::~Item()
{
}

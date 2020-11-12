#include "Armor.hpp"

Armor::Armor(std::string name, std::string desc, int def_bonus)
  : Item(name, desc)
  , m_bonus(def_bonus)
{
}

int Armor::get_defense() const { return m_bonus; }

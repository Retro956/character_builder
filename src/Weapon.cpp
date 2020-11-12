#include "Weapon.hpp"

Weapon::Weapon(std::string name, std::string desc, int dice, int bonus)
  : Item(name, desc)
  , m_dice(dice)
  , m_bonus(bonus)
{
}

int Weapon::get_damage() const { return (rand() % m_dice + 1) + m_bonus; }

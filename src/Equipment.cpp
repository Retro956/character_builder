#include "Equipment.hpp"

Equipment::Equipment()
  : m_weapon()
  , m_armor()
{
}

Equipment::~Equipment()
{
}

void Equipment::equip_weapon(std::shared_ptr<Weapon>& weapon_id)
{
  this->m_weapon = weapon_id;
}

void Equipment::equip_armor(std::shared_ptr<Armor>& armor)
{
  this->m_armor = armor;
}

Weapon* Equipment::get_weapon() const { return m_weapon.get(); }

#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include "Weapon.hpp"
#include "Armor.hpp"
#include <memory>

class Equipment {
  private:
    std::shared_ptr<Weapon> m_weapon;
    std::shared_ptr<Armor> m_armor;
  public:
    Equipment();
    ~Equipment();

    void equip_weapon(std::shared_ptr<Weapon>& weapon);
    void equip_armor(std::shared_ptr<Armor>& armor);

    Weapon* get_weapon() const;

};

#endif // EQUIPMENT_HPP

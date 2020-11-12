#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Item.hpp"

class Weapon : public Item {
  private:
    int m_dice;
    int m_bonus;
  public:
    Weapon(std::string name, std::string desc, int dice, int bonus);

    int get_damage();

};

#endif // WEAPON_HPP

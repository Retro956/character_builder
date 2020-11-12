#ifndef ARMOR_HPP
#define ARMOR_HPP

#include "Item.hpp"

class Armor : public Item {
  private:
    int m_bonus;
  public:
    Armor(std::string name, std::string desc, int def_bonus);

    int get_defense() const;
};

#endif // ARMOR_HPP

#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>

class Item
{
  protected:
    std::string m_name;
    std::string m_description;

  public:
    Item();
    Item(std::string name, std::string description);
    virtual ~Item();

    inline std::string debug_print() const { return this->m_name; }

};

#endif // ITEM_HPP

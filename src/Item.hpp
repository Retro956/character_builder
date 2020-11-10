#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>

class Item
{
  public:
    Item();
    virtual ~Item();

    inline std::string debug_print() const
    {
      return this->m_name;
    }

  private:
    std::string m_name;
};

#endif // ITEM_HPP

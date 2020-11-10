#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"

class Inventory
{
  private:
    int m_capacity;
    int m_num_of_items;
    Item** m_item_arr;
    void expand();
    void initialize(const int start);
  public:
    Inventory();
    ~Inventory();
    void add_item(const Item& item);
    void remove_item(int index);
    
    inline void debug_print() const
    {
      for(size_t i = 0; i < this->m_num_of_items; i++)
        std::cout << this->m_item_arr[i]->debug_print() << std::endl;
    }
};

#endif // INVENTORY_HPP

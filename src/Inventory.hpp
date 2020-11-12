#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Item.hpp"
#include <memory>

class Inventory
{
  private:
    int m_capacity;
    int m_num_of_items;
    std::shared_ptr<std::shared_ptr<Item>[]> m_item_arr;
    void expand();
    void initialize(const int start);
  public:
    Inventory();
    ~Inventory();
    void add_item(const Item& item);
    std::shared_ptr<Item> get_item(int index);
    void remove_item(int index);
    
    inline void debug_print() const
    {
      for(size_t i = 0; i < this->m_num_of_items; i++)
        std::cout << this->m_item_arr.get()[i]->debug_print() << std::endl;
    }

    inline int get_num_of_items() { return m_num_of_items; }
};

#endif // INVENTORY_HPP

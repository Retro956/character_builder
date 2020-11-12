#include "Inventory.hpp"

Inventory::Inventory()
  : m_capacity(10)
  , m_num_of_items(0)
  , m_item_arr(new std::shared_ptr<Item>[10])
{
}

Inventory::~Inventory()
{
}

void Inventory::add_item(const Item& item)
{
  if(m_num_of_items >= m_capacity) {
    std::cout << "Too Many Items in Inventory.\n";
    return;
  }
  this->m_item_arr[this->m_num_of_items++] = std::make_shared<Item>(Item(item));
}

void Inventory::remove_item(int index)
{
}

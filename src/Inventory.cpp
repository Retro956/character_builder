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

void Inventory::expand()
{
  this->m_capacity *= 2;
  std::shared_ptr<std::shared_ptr<Item>[]> temp(new std::shared_ptr<Item>[m_capacity]);

  for(size_t i = 0; i < m_num_of_items; i++)
    temp[i] = m_item_arr[i];

  this->m_item_arr = temp;
}

void Inventory::add_item(const Item& item)
{
  if(this->m_num_of_items >= this->m_capacity)
    expand();
  this->m_item_arr[this->m_num_of_items++] = std::make_shared<Item>(Item(item));
}

void Inventory::remove_item(int index)
{
}

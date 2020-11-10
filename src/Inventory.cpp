#include "Inventory.hpp"

Inventory::Inventory()
  : m_capacity(10)
  , m_num_of_items(0)
  , m_item_arr(new Item*[m_capacity])
{
}

Inventory::~Inventory()
{
  for(size_t i = 0; i < this->m_num_of_items; i++)
    delete this->m_item_arr[i];
  delete[] m_item_arr;
}

void Inventory::expand()
{
  this->m_capacity *= 2;
  Item** temp_arr = new Item*[m_capacity];

  for(size_t i = 0; i < m_num_of_items; i++)
    temp_arr[i] = new Item(*m_item_arr[i]);

  for(size_t i = 0; i < m_num_of_items; i++)
    delete this->m_item_arr[i];
  delete[] this->m_item_arr;

  this->m_item_arr = temp_arr;

  this->initialize(this->m_num_of_items);
}

void Inventory::initialize(const int start)
{
  for(size_t i = start; i < m_capacity; i++)
    this->m_item_arr[i] = nullptr;
}

void Inventory::add_item(const Item& item)
{
  if(this->m_num_of_items >= this->m_capacity)
    expand();

  this->m_item_arr[this->m_num_of_items++] = new Item(item);
}

void Inventory::remove_item(int index)
{
}

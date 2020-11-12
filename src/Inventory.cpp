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

std::shared_ptr<Item> Inventory::get_item(int index)
{
  return this->m_item_arr[index];
}

void Inventory::remove_item(int index)
{
}

void Inventory::inv_to_string() {
  std::cout << "===== Inventory =====\n";
  for(size_t i = 0; i < this->m_num_of_items; i++)
    std::cout << i+1 << ". " << this->m_item_arr.get()[i]->debug_print() << '\n';
  std::cout << "=====================\n";
}


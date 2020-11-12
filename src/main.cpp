#include "Character.hpp"

int main()
{

  auto Hero = Character::CharacterFactory::NewOrc(new BaseFighterStats());

  Hero.display_stats();

  Inventory inv;

  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());
  inv.add_item(Item());

  inv.debug_print();

  std::cout << inv.get_num_of_items() << '\n';

  return 0;
}

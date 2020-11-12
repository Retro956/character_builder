#include "Character.hpp"
#include "Weapon.hpp"

int main()
{

  auto Hero = Character::CharacterFactory::NewOrc(new BaseFighterStats());

  Hero.display_stats();

  Hero.inventory()->add_item(Weapon("Long Sword", "A Standard Fighting Weapon.", 7, 0));
  Hero.inventory()->add_item(Item());
  Hero.inventory()->add_item(Item());

  Hero.inventory()->debug_print();

  return 0;
}

#include "Character.hpp"
#include "Weapon.hpp"

int main()
{

  auto Hero = Character::CharacterFactory::NewOrc(new BaseFighterStats());

  std::shared_ptr<Weapon> test = std::make_shared<Weapon>("Long Sword", "A Standard Fighting Weapon.", 7, 0);

  Hero.display_stats();

  Hero.inventory()->add_item(*test.get());
  Hero.inventory()->add_item(Item());
  Hero.inventory()->add_item(Item());

  Hero.equipment()->equip_weapon(test);

  std::cout << Hero.attack() << '\n';

  return 0;
}

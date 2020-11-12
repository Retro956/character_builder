#include "Character.hpp"

int main()
{

  auto Hero = Character::CharacterFactory::NewOrc(new BaseFighterStats());

  std::shared_ptr<Weapon> test = std::make_shared<Weapon>("Longsword", "A Standard Longsword.", 8, 0);
  std::shared_ptr<Weapon> test2 = std::make_shared<Weapon>("Shortsword", "A Standard Shortsword.", 6, 0);
  std::shared_ptr<Armor> test3 = std::make_shared<Armor>("Bronze Chestpiece", "A Standard Chestpiece.", 1);

  Hero.display_stats();

  Hero.inventory()->add_item(*test.get());
  Hero.inventory()->add_item(*test2.get());
  Hero.inventory()->add_item(*test3.get());

  Hero.equipment()->equip_weapon(test);

  Hero.inventory()->inv_to_string();

  return 0;
}

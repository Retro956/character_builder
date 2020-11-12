#include "Game.hpp"

int main()
{

  Game game;
  int choice;

  auto Hero = Character::CharacterFactory::NewHuman(new BaseFighterStats());

  std::shared_ptr<Weapon> test = std::make_shared<Weapon>("Longsword", "A Standard Longsword.", 8, 0);
  std::shared_ptr<Weapon> test2 = std::make_shared<Weapon>("Shortsword", "A Standard Shortsword.", 6, 0);
  std::shared_ptr<Armor> test3 = std::make_shared<Armor>("Bronze Chestpiece", "A Standard Chestpiece.", 1);

  do {
    game.main_menu();

    std::cout << "Choice: ";

    std::cin >> choice;

    switch(choice) {
      case 1:
        Hero.display_stats();
        break;

      case 2:
        Hero.inventory()->inv_to_string();
        break;

      case 3:
        break;

      case 0:
        game.exit();
        break;
    };

  } while(game.running());

  return 0;
}

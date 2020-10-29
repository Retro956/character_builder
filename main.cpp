#include "Character.hpp"
#include <iostream>

int main() {

  auto Hero = Character::CharacterFactory::NewGnome(BaseFighterStats());

  Hero.display_stats();

  return 0;
}

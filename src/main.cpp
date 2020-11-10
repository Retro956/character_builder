#include "Character.hpp"

int main() {

  auto Hero = Character::CharacterFactory::NewOrc(new BaseFighterStats());

  Hero.display_stats();

  return 0;
}

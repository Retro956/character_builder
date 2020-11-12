#include "Character.hpp"

Character::Character(Race* race, Stats* stats)
  : m_race(race)
  , m_stats(stats)
{
  this->m_max_health = 
    this->stats().hit_die() +
    this->stats().con_mod() + 
    this->race().con_bonus();

  this->m_cur_health = this->m_max_health;
}

Character::Character(Stats* stats) : Character(new Human(), stats) {}

Character::Character(Race* race) : Character(race, new Stats()) {}

Character::Character() : Character(new Human(), new Stats()) {}

Stats& Character::stats() { return *m_stats; }

Race& Character::race() { return *m_race; }

int Character::attack() { return 1; }

int Character::health() { return m_cur_health; }

int Character::max_health() { return m_max_health; }

int Character::strength() { return stats().str_mod() + race().str_bonus(); }

int Character::dexterity() { return stats().dex_mod() + race().dex_bonus(); }

int Character::constitution() { return stats().con_mod() + race().con_bonus(); }

int Character::wisdom() { return stats().wis_mod() + race().wis_bonus(); }

int Character::intelligence() { return stats().int_mod() + race().int_bonus(); }

int Character::hit_die() { return stats().hit_die(); }

void Character::display_stats()
{
  std::cout << "HEALTH: " << this->health() << "/" << this->max_health() << '\n';
  std::cout << "HIT_DIE: " << this->hit_die() << '\n';
  std::cout << "STR: " << this->strength() << '\n';
  std::cout << "DEX: " << this->dexterity() << '\n';
  std::cout << "CON: " << this->constitution() << '\n';
  std::cout << "WIS: " << this->wisdom() << '\n';
  std::cout << "INT: " << this->intelligence() << '\n';
}

Character Character::CharacterFactory::NewDwarf(Stats* stats)
{
  return { new Dwarf(), stats };
}

Character Character::CharacterFactory::NewElf(Stats* stats)
{
  return { new Elf(), stats };
}

Character Character::CharacterFactory::NewGnome(Stats* stats)
{
  return { new Gnome(), stats };
}

Character Character::CharacterFactory::NewGoblin(Stats* stats)
{
  return { new Goblin(), stats };
}

Character Character::CharacterFactory::NewHalfling(Stats* stats)
{
  return { new Halfling(), stats };
}

Character Character::CharacterFactory::NewHuman(Stats* stats)
{
  return { new Human(), stats };
}

Character Character::CharacterFactory::NewOrc(Stats* stats)
{
  return { new Orc(), stats };
}

Character Character::CharacterFactory::NewFighter()
{
  return { new BaseFighterStats() };
}

Character Character::CharacterFactory::NewMage()
{
  return { new BaseMagicStats() };
}

Character Character::CharacterFactory::NewSkill()
{
  return { new BaseSkillStats() };
}

Character Character::CharacterFactory::NewCharacter()
{
  return { };
}

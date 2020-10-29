#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Stats.hpp"
#include "Race.hpp"

#include <iostream>

class Character {
  private:
    Character(Race race, Stats stats) : m_race(race), m_stats(stats) {
      this->m_max_health = this->stats().hit_die() + 
        this->stats().con_mod() + this->race().con_bonus();
      this->m_cur_health = this->m_max_health;
    }

    Character(Stats stats) : Character(Human(), stats) {}

    Character(Race race) : Character(race, Stats()) {}

    Character() : Character(Human(), Stats()) {}

    Stats m_stats;

    Race m_race;

    int m_max_health;

    int m_cur_health;
  public:
    Stats& stats() { return m_stats; }

    Race& race() { return m_race; }

    int attack();

    int health() { return m_cur_health; }

    int max_health() { return m_max_health; }

    int strength() { return stats().str_mod() + race().str_bonus(); }

    int dexterity() { return stats().dex_mod() + race().dex_bonus(); }

    int constitution() { return stats().con_mod() + race().con_bonus(); }

    int wisdom() { return stats().wis_mod() + race().wis_bonus(); }

    int intelligence() { return stats().int_mod() + race().int_bonus(); }

    int hit_die() { return stats().hit_die(); }

    // Will eventually move this function to a "display" module of 
    // some sort but it will be fine here for now.
    void display_stats() {
      std::cout << "HEALTH: " << this->health() << "/" << this->max_health() << '\n';
      std::cout << "HIT_DIE: " << this->hit_die() << '\n';
      std::cout << "STR: " << this->strength() << '\n';
      std::cout << "DEX: " << this->dexterity() << '\n';
      std::cout << "CON: " << this->constitution() << '\n';
      std::cout << "WIS: " << this->wisdom() << '\n';
      std::cout << "INT: " << this->intelligence() << '\n';
    }

    class CharacterFactory {
      public:
        CharacterFactory() {}

        static Character NewDwarf(Stats stats) {
          return { Dwarf(), stats };
        }

        static Character NewElf(Stats stats) {
          return { Elf(), stats };
        }

        static Character NewGnome(Stats stats) {
          return { Gnome(), stats };
        }

        static Character NewGoblin(Stats stats) {
          return { Goblin(), stats };
        }

        static Character NewHalfling(Stats stats) {
          return { Halfling(), stats };
        }

        static Character NewHuman(Stats stats) {
          return { Human(), stats };
        }

        static Character NewOrc(Stats stats) {
          return { Orc(), stats };
        }

        // These will be used for random race generation with 
        // specified class
        static Character NewFighter() {
          return { BaseFighterStats() };
        }

        static Character NewMage() {
          return { BaseMagicStats() };
        }

        static Character NewSkill() {
          return { BaseSkillStats() };
        }

        // This will be used for random everything
        static Character NewCharacter() {
          return { };
        }
    };
};

#endif // CHARACTER_HPP

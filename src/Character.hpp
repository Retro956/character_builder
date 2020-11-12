#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Stats.hpp"
#include "Race.hpp"
#include "Inventory.hpp"
#include "Equipment.hpp"

class Character
{
  private:
    Character(Race* race, Stats* stats);

    Character(Stats* stats);

    Character(Race* race);

    Character();

    std::unique_ptr<Stats> m_stats;

    std::shared_ptr<Race> m_race;

    std::shared_ptr<Inventory> m_inventory;

    std::shared_ptr<Equipment> m_equipment;

    int m_max_health;

    int m_cur_health;

  public:
    Stats& stats();

    Race& race();

    int attack();

    int health();

    int max_health();

    int strength();

    int dexterity();

    int constitution();

    int wisdom();

    int intelligence();

    int hit_die();

    std::shared_ptr<Inventory> inventory();

    std::shared_ptr<Equipment> equipment();

    void display_stats();

    class CharacterFactory
    {
      public:
        CharacterFactory() {}

        static Character NewDwarf(Stats* stats);

        static Character NewElf(Stats* stats);

        static Character NewGnome(Stats* stats);

        static Character NewGoblin(Stats* stats);

        static Character NewHalfling(Stats* stats);

        static Character NewHuman(Stats* stats);

        static Character NewOrc(Stats* stats);

        // These will be used for random race generation with 
        // specified class
        static Character NewFighter();

        static Character NewMage();

        static Character NewSkill();

        // This will be used for random everything
        static Character NewCharacter();
    };
};

#endif // CHARACTER_HPP

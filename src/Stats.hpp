#ifndef STATS_HPP
#define STATS_HPP

#include <cmath>

class Stats {
  protected:
    int m_strength;
    int m_dexterity;
    int m_constitution;
    int m_wisdom;
    int m_intelligence;
    int m_hit_die;

  public:
    Stats(int str, int dex, int con, int wis, int intel, int hd);
    Stats();

    int strength();
    int dexterity();
    int constitution();
    int wisdom();
    int intelligence();
    int hit_die();

    int str_mod();
    int dex_mod();
    int con_mod();
    int wis_mod();
    int int_mod();

};

struct BaseFighterStats : public Stats { BaseFighterStats(); };
struct BaseMagicStats : public Stats { BaseMagicStats(); };
struct BaseSkillStats : public Stats { BaseSkillStats(); };

#endif // STATS_HPP

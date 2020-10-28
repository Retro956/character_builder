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
    Stats(int str, int dex, int con, int wis, int intel, int hd)
      : m_strength(str), m_dexterity(dex), m_constitution(con),
      m_wisdom(wis), m_intelligence(intel), m_hit_die(hd) {}

    Stats() : Stats(0,0,0,0,0,0) {}

    int strength() { return m_strength; }
    int dexterity() { return m_dexterity; }
    int constitution() { return m_constitution; }
    int wisdom() { return m_wisdom; }
    int intelligence() { return m_intelligence; }
    int hit_die() { return m_hit_die; }

    int str_mod() { return (std::floor((m_strength - 10) / 2)); }
    int dex_mod() { return (std::floor((m_dexterity - 10) / 2)); }
    int con_mod() { return (std::floor((m_constitution - 10) / 2)); }
    int wis_mod() { return (std::floor((m_wisdom - 10) / 2)); }
    int int_mod() { return (std::floor((m_intelligence - 10) / 2)); }
};

class BaseFighterStats : public Stats {
  public:
    BaseFighterStats() : Stats(18, 14, 14, 10, 12, 10) {}
};

class BaseMagicStats : public Stats {
  public:
    BaseMagicStats() : Stats(10, 16, 10, 18, 16, 6) {}
};

class BaseSkillStats : public Stats {
  public:
    BaseSkillStats() : Stats(16, 18, 12, 10, 18, 8) {}
};

#endif // STATS_HPP

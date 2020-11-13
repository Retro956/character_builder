#include "Stats.hpp"

Stats::Stats(int str, int dex, int con, int wis, int intel, int hd)
  : m_strength(str)
  , m_dexterity(dex)
  , m_constitution(con)
  , m_wisdom(wis)
  , m_intelligence(intel)
  , m_hit_die(hd)
{
}

Stats::Stats() : Stats(0,0,0,0,0,0) {}

int Stats::strength() { return m_strength; }
int Stats::dexterity() { return m_dexterity; }
int Stats::constitution() { return m_constitution; }
int Stats::wisdom() { return m_wisdom; }
int Stats::intelligence() { return m_intelligence; }
int Stats::hit_die() { return m_hit_die; }

int Stats::str_mod() { return (std::floor((m_strength - 10) / 2)); }
int Stats::dex_mod() { return (std::floor((m_dexterity - 10) / 2)); }
int Stats::con_mod() { return (std::floor((m_constitution - 10) / 2)); }
int Stats::wis_mod() { return (std::floor((m_wisdom - 10) / 2)); }
int Stats::int_mod() { return (std::floor((m_intelligence - 10) / 2)); }

BaseFighterStats::BaseFighterStats()
  : Stats(18, 14, 14, 10, 12, 10)
{
}

BaseMagicStats::BaseMagicStats()
  : Stats(10, 16, 10, 18, 16, 6)
{
}

BaseSkillStats::BaseSkillStats()
  : Stats(16, 18, 12, 10, 18, 8)
{
}

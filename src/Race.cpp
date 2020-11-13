#include "Race.hpp"

Race::Race(int str, int dex, int con, int wis, int intel)
  : m_str_bonus(str)
  , m_dex_bonus(dex)
  , m_con_bonus(con)
  , m_wis_bonus(wis)
  , m_int_bonus(intel)
{
}

Race::Race() : Race(0,0,0,0,0)
{
}

int Race::str_bonus() { return m_str_bonus; }
int Race::dex_bonus() { return m_dex_bonus; }
int Race::con_bonus() { return m_con_bonus; }
int Race::wis_bonus() { return m_wis_bonus; }
int Race::int_bonus() { return m_int_bonus; }

Dwarf::Dwarf() : Race(2, -1, 2, 0, 0)
{
}

Elf::Elf() : Race(0, 2, -2, 1, 1)
{
}

Gnome::Gnome() : Race(-1, 2, -1, 2, 2)
{
}

Goblin::Goblin() : Race(-1, 2, -1, 0, 2)
{
}

Halfling::Halfling() : Race(-1, 2, 0, 2, 2)
{
}

Human::Human() : Race(1, 0, 0, 1, 1)
{
}

Orc::Orc() : Race(2, -1, 2, -2, 0)
{
}

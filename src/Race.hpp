#ifndef RACE_HPP
#define RACE_HPP

class Race
{
  protected:
    int m_str_bonus;

    int m_dex_bonus;

    int m_con_bonus;

    int m_wis_bonus;

    int m_int_bonus;
  public:
    Race(int str, int dex, int con, int wis, int intel);

    Race();

    int str_bonus();

    int dex_bonus();

    int con_bonus();

    int wis_bonus();

    int int_bonus();

};

class Dwarf : public Race
{
  public:
    Dwarf();
};

class Elf : public Race
{
  public:
    Elf();
};

class Gnome : public Race
{
  public:
    Gnome();
};

class Goblin : public Race
{
  public:
    Goblin();
};

class Halfling : public Race
{
  public:
    Halfling();
};

class Human : public Race
{
  public:
    Human();
};

class Orc : public Race
{
  public:
    Orc();
};

#endif // RACE_HPP

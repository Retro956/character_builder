#ifndef RACE_HPP
#define RACE_HPP

class Race {
  protected:
    int m_str_bonus;

    int m_dex_bonus;

    int m_con_bonus;

    int m_wis_bonus;

    int m_int_bonus;
  public:
    Race(int str, int dex, int con, int wis, int intel)
      : m_str_bonus(str), m_dex_bonus(dex), m_con_bonus(con),
      m_wis_bonus(wis), m_int_bonus(intel) {}

    Race() : Race(0,0,0,0,0) {}

    int str_bonus() { return m_str_bonus; }

    int dex_bonus() { return m_dex_bonus; }

    int con_bonus() { return m_con_bonus; }

    int wis_bonus() { return m_wis_bonus; }

    int int_bonus() { return m_int_bonus; }

};

class Human : public Race {
  public:
    Human() : Race(1, 0, 0, 1, 1) {}
};

class Orc : public Race {
  public:
    Orc() : Race(2, -1, 2, -2, 0) {}
};

class Elf : public Race {
  public:
    Elf() : Race(0, 2, -2, 1, 1) {}
};

class Goblin : public Race {
  public:
    Goblin() : Race(-1, 2, -1, 0, 2) {}
};

#endif // RACE_HPP

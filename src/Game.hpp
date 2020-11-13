#ifndef GAME_HPP
#define GAME_HPP

#include "Character.hpp"

class Game {
  private:
    bool m_running;
    int m_choice;
  public:
    Game();

    bool running();
    void exit();

    void main_menu();
};

#endif // GAME_HPP

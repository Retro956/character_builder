#include "Game.hpp"

Game::Game()
  : m_running(true)
{
}

bool Game::running() { return m_running; }

void Game::exit() { this->m_running = false; }

int Game::choice() { return m_choice; }

void Game::main_menu()
{
  std::cout << "====== Main Menu =====\n";
  std::cout << "1. Display Stats\n";
  std::cout << "2. Display Inventory\n";
  std::cout << "3. Display Equipment\n";
  std::cout << "0. Quit\n";
}

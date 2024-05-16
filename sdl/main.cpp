#include <SDL2/SDL.h>
#include <iostream>
#include "Game.hpp"

Game *game = nullptr;

int main(int argv, char** args) {

  game = new Game();
  // while(game is unning) {
  //   handle any use input
  //   update all objects (e.g. positions, etc)
  //   render changes to the display
  // }

  return 0;
}
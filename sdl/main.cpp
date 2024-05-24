#include <SDL.h>
#include <iostream>
#include "Game.hpp"

Game *game = nullptr;

int main(int argv, char** args) {

  const int FPS = 60;
  const int frameDelay = 1000/FPS;

  Uint32 frameStart;
  int frameTime;

  game = new Game();

  game->init("BirchEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
  
  while (game->running()) {

    frameStart = SDL_GetTicks();

    game->handleEvent();
    game->update();
    game->render();

    frameTime = SDL_GetTicks() - frameStart;

    if (frameDelay > frameTime) {
      SDL_Delay(frameDelay - frameTime);
    }
  };

  game->clean();

  return 0;
}
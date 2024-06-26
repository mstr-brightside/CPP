#ifndef Game_hpp
#define Game_hpp

#include <SDL.h>
#include <stdio.h>
#include <SDL_image.h>

class Game {
  public:
    Game();
    ~Game();

    void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvent();
    void update();
    void render();
    void clean();

    bool running() { return isRunning; }

    static SDL_Renderer *renderer;
  
  private:
    int cnt = 0;
    bool isRunning;
    SDL_Window *window;
};

#endif /* Game_hpp */

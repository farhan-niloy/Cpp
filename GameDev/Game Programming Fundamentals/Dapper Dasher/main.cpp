#include "../include/raylib.h"

int main() {

  // Window Dimensions
  const int WindowHeight{700};
  const int WindowWidth{1400};

  //Initialize the Window
  InitWindow(WindowWidth, WindowHeight, "Dapper Dasher");

  // Rectangle Dimensions
  const int width{50};
  const int height{80};

  int posY{WindowHeight - height};
  int velocity{0};

  SetTargetFPS(60);
  while (!WindowShouldClose()) {

    // Start Drawing
    BeginDrawing();
    ClearBackground(WHITE);

    if (IsKeyPressed(KEY_SPACE)) {
        velocity -= 1;
    }

    posY += velocity;

    DrawRectangle(WindowWidth/2, posY, width, height, BLUE);

    //Stop Drawing
    EndDrawing();

  }

  return 0;
}

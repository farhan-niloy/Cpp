#include "../include/raylib.h"

int main() {

  // Window Dimensions
  const int WindowHeight{700};
  const int WindowWidth{1400};

  //Initialize the Window
  InitWindow(WindowWidth, WindowHeight, "Dapper Dasher");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    // Start Drawing
    BeginDrawing();
    ClearBackground(WHITE);

    //Stop Drawing
    EndDrawing();

  }


  return 0;
}

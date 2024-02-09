#include "../include/raylib.h"

int main() {
  int width{768};
  int height{1280};
  Color darkGreen = {0, 100, 0, 255};


  InitWindow(width, height, "Farhan's Window");

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(darkGreen);
    DrawCircle(static_cast<int>(width/2), static_cast<int>(height/2), 100, RED);
    EndDrawing();
  }

}



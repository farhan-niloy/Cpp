#include "../include/raylib.h"

int main() {

  // Window Dimensions
  const int WindowHeight{700};
  const int WindowWidth{1400};

  //Initialize the Window
  InitWindow(WindowWidth, WindowHeight, "Dapper Dasher");

  int velocity{0};

  // Gravity (Pixels/s)/s
  const int Gravity{1000};
  const int jumpVal{-1000};

  Texture2D scarfy = LoadTexture("textures/scarfy.png");
  Rectangle scarfyRec;
  scarfyRec.width = scarfy.width/6;
  scarfyRec.height = scarfy.height;
  scarfyRec.x = 0;
  scarfyRec.y = 0;
  Vector2 scarfyPos;
  scarfyPos.x = WindowWidth/2 - scarfyRec.width/2;
  scarfyPos.y = WindowHeight - scarfyRec.height;


  bool isInAir{};

  SetTargetFPS(60);
  while (!WindowShouldClose()) {

    // Start Drawing
    BeginDrawing();
    ClearBackground(WHITE);

    // Delta Time (time since last frame)
    float dT { GetFrameTime() };


    // Ground Check
    if (scarfyPos.y >= WindowHeight - scarfyRec.height) {
      // Rectangle is On The Ground
      isInAir = false;
      velocity = 0;
    } else {
       // Apply Gravity
       velocity += Gravity * dT;
       isInAir = true;
    }
    
    // Check for Jumping
    if (IsKeyPressed(KEY_SPACE) && !isInAir) {
        velocity += jumpVal;
    }

    // Update Position
    scarfyPos.y += velocity * dT;

    DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);


    //Stop Drawing
    EndDrawing();

  }

  UnloadTexture(scarfy);

  CloseWindow();

  return 0;
}

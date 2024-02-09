#include "raylib.h"

int main(void) {
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib on M1 Mac");

    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose()) {
        // Update
        // TODO: Update your variables and game state here

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // TODO: Draw everything here
        DrawText("Congrats! You've successfully used raylib on M1 Mac!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();        // Close window and OpenGL context
    return 0;
}

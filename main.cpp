#include <raylib.h>
#include "imgui.h"
#include "rlImGui.h"

int main()
{
	const int width = 800;
	const int height = 900;

	InitWindow(width, height, "Title");

	rlImGuiSetup(true);
	
	float rec_width = 400, rec_height = 200;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		DrawRectangle(300, 300, rec_width, rec_height, RED);

		rlImGuiBegin();
		
		ImGui::Begin("HELLO", NULL);
		ImGui::Text("HELLO, WORLD!");
		ImGui::SliderFloat("width", &rec_width, 50, 400);
		ImGui::SliderFloat("height", &rec_height, 50, 400);
		ImGui::End();

		rlImGuiEnd();

		EndDrawing();
	}
	CloseWindow();

	return 0;
}
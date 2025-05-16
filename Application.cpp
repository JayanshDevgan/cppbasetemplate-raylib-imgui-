
#include <raylib.h>

#include "imgui.h"
#include "rlImGui.h"

#include "Application.h"
#include "uni.h"

void Application::Run()
{
	const int width = 900;
	const int height = 800;

	InitWindow(width, height, "PROJECT-NAME");
	SetWindowState(FLAG_WINDOW_RESIZABLE);

	rlImGuiSetup(true);

	while (!WindowShouldClose())
	{
#pragma region RAY_RENDERER
		BeginDrawing();
		ClearBackground(BLACK);
#pragma endregion

#pragma region IMGUI_RENDERER
		rlImGuiBegin();
		UNI_UI::ToolBarMenu();
		rlImGuiEnd();
#pragma endregion


		EndDrawing();
	}
	CloseWindow();
}

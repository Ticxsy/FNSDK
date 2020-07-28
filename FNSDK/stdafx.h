#pragma once
#define _CRT_SECURE_NO_WARNINGs
#include <stdio.h>
#include <Windows.h>
#include <psapi.h>
#include <intrin.h>
#include <string>
#include <vector>

#include "minhook/MinHook.h"
#pragma comment(lib, "minhook.lib")

#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_internal.h"

#include "Render.h"

ImGuiWindow& BeginScene();
VOID EndScene(ImGuiWindow& window);
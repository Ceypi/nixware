#pragma once
#include <string>

#include "../settings.h"
#include "../imgui/imgui.h"
#include "../imgui/imgui_internal.h"
#include "../imgui/backends/imgui_impl_glfw.h"
#include "../imgui/backends/imgui_impl_opengl3.h"
#include "../imgui/freetype/imgui_freetype.h"

using namespace ImGui;

namespace menu
{
    const ImGuiColorEditFlags color_edit4_flags = ImGuiColorEditFlags_NoBorder | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_AlphaPreview;

    void render();

    void watermark();

    namespace custom
    {
        void hotkey(const char* label, hotkey_t* hotkey);

        const char* const key_names[] =
        {
            "UNK",
            "MOUSE_L",
            "MOUSE_R",
            "CANCEL",
            "MOUSE_3",
            "MOUSE_4",
            "MOUSE_5",
            "UNK",
            "BACK",
            "TAB",
            "UNK",
            "UNK",
            "CLEAR",
            "RETURN",
            "UNK",
            "UNK",
            "SHIFT",
            "CONTROL",
            "MENU",
            "PAUSE",
            "CAPITAL",
            "KANA",
            "UNK",
            "JUNJA",
            "FINAL",
            "KANJI",
            "UNK",
            "ESCAPE",
            "CONVERT",
            "NONCONVERT",
            "ACCEPT",
            "MODECHANGE",
            "SPACE",
            "PRIOR",
            "NEXT",
            "END",
            "HOME",
            "LEFT",
            "UP",
            "RIGHT",
            "DOWN",
            "SELECT",
            "PRINT",
            "EXECUTE",
            "SNAPSHOT",
            "INSERT",
            "DELETE",
            "HELP",
            "0",
            "1",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "A",
            "B",
            "C",
            "D",
            "E",
            "F",
            "G",
            "H",
            "I",
            "J",
            "K",
            "L",
            "M",
            "N",
            "O",
            "P",
            "Q",
            "R",
            "S",
            "T",
            "U",
            "V",
            "W",
            "X",
            "Y",
            "Z",
            "LWIN",
            "RWIN",
            "APPS",
            "UNK",
            "SLEEP",
            "0",
            "1",
            "2",
            "3",
            "4",
            "5",
            "6",
            "7",
            "8",
            "9",
            "MULTIPLY",
            "ADD",
            "SEPARATOR",
            "SUBTRACT",
            "DECIMAL",
            "DIVIDE",
            "F1",
            "F2",
            "F3",
            "F4",
            "F5",
            "F6",
            "F7",
            "F8",
            "F9",
            "F10",
            "F11",
            "F12",
            "F13",
            "F14",
            "F15",
            "F16",
            "F17",
            "F18",
            "F19",
            "F20",
            "F21",
            "F22",
            "F23",
            "F24",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "NUMLOCK",
            "SCROLL",
            "OEM_NEC_EQUAL",
            "OEM_FJ_MASSHOU",
            "OEM_FJ_TOUROKU",
            "OEM_FJ_LOYA",
            "OEM_FJ_ROYA",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "UNK",
            "LSHIFT",
            "RSHIFT",
            "LCONTROL",
            "RCONTROL",
            "LMENU",
            "RMENU"
        };
    }
}
#pragma once

#include <string>

namespace TerminalUI {

    enum class Color {
        RED = 31,
        GREEN = 32,
        BLUE = 34,
        YELLOW = 33,
        CYAN = 36,
        MAGENTA = 35,
        WHITE = 37,
        DEFAULT = 39
    };

    bool initialize();

    void setCursorPosition(int x, int y);
    void setColor(Color color);
    void resetColor();
    void resetScreen();

    void drawText(const std::string& text, int x, int y, Color color);

}
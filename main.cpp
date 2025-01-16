#include "menu/contextMenu.h"

void setColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main() {
    setColor(5, 0);
    std::cout << "\tSTAMINA GAME!" << std::endl;
    setColor(7, 0);
    contextMenu Menu;
    Menu.startMenu();
    std::cin.get();
}
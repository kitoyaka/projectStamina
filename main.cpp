#include "writingWork.h"
#include "menu/contextMenu.h"

int main() {
    std::cout << "\tSTAMINA GAME!" << std::endl;
    writingWork Task;
    contextMenu Menu;
    Menu.startMenu();
    std::cin.get();
}
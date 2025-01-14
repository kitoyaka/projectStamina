#include "writingWork.h"
#include "menu/contextMenu.h"


void writingWork::writeTask() {
    std::cout << std::endl << "You need to rewrite this text: ";
    std::cin.ignore();
    std::getline(std::cin, m_text);
    contextMenu contextMenu;
    if(m_text == task) {
        std::cout << "Nice! Correct" << std::endl;
        contextMenu.startMenu();
    }
    else {
        std::cout << "Wrong!" << std::endl;
        contextMenu.startMenu();
    }
}

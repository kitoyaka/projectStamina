#include "menu/contextMenu.h"


void writingWork::writeTask() {
    std::cout << std::endl << "You need to rewrite this text: ";
    writingWork example;
    std::cin.ignore();
    std::getline(std::cin, m_text);
    if(m_text == task) {
        setColor(2, 0);
        std::cout << "Nice! Correct" << std::endl;
    }
    else {
        setColor(4, 0);
        std::cout << "Wrong!" << std::endl;
    }
    setColor(7, 0);
}

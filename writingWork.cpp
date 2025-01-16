#include "menu/contextMenu.h"


void writingWork::writeTask() {
    std::cout << std::endl << "You need to rewrite this text: ";

    std::cin.ignore();
    std::getline(std::cin, m_text);


    if(m_text == task) {
        setColor(2, 0);
        std::cout << "Nice! Correct" << std::endl;
        std::cout << "Press ENTER to continue" << std::endl;
    }
    else {
        setColor(4, 0);
        std::cout << "Wrong!" << std::endl;
        std::cout << "Press ENTER to continue" << std::endl;


    }
    setColor(7, 0);
}

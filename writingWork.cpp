//
// Created by rigry on 14.01.2025.
//

#include "writingWork.h"


void writingWork::writeTask() {
    std::cout << std::endl << "You need to rewrite this text: ";
    std::cin.ignore();
    std::getline(std::cin, m_text);
    if(m_text == task) {
        std::cout << "Nice! Correct" << std::endl;
    }
    else {
        std::cout << "Wrong!" << std::endl;
    }
}
#include <iostream>
#include <string>
#include "writingWork.h"


int contextMenu(writingWork &Task) {
    int number;
    while(true) {
        std::cout << std::endl;
        std::cout << "[1] - play" << std::endl;
        std::cout << "[2] - settings" << std::endl;
        std::cout << "[3] - exit" << std::endl;
        std::cout<< std::endl << "Write the relevant number: ";
        std::cin >> number;
        switch(number) {
            case 1: {
                std::cout << Task.getTask() << std::endl;
                Task.writeTask();
                break;
            }
            case 2: {
                std::string newTask;
                std::cout << "Write the new text you want to practice: ";
                std::cin.ignore();
                std::getline(std::cin, newTask);
                Task.setTask(newTask);
                break;
            }
            case 3:
                std::cout << "Program is closing!" << std::endl;
                return 0;
            default:
                std::cout << "Error number!" << std::endl;
                break;
        }
    }
}

int main() {
    writingWork Task;
    contextMenu(Task);
}
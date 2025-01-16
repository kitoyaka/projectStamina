#include "contextMenu.h"

int contextMenu::startMenu() {
    while (true) {
        std::cout << std::endl;
        std::cout << "[1] - play" << std::endl;
        std::cout << "[2] - settings" << std::endl;
        std::cout << "[3] - exit" << std::endl;
        std::cout << std::endl << "Write the relevant number: ";

        if (!(std::cin >> number)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number." << std::endl;
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищення буфера вводу

        switch (number) {
            case 1: {
                std::cout << example.getTask() << std::endl;
                example.writeTask();
                break;
            }
            case 2: {
                std::cout << "Write the new text you want to practice: ";
                std::getline(std::cin, newTask); // Зчитування рядка з пробілами
                example.setTask(newTask);
                break;
            }
            case 3: {
                std::cout << "Program is closing!" << std::endl;
                return 0;
            }
            default: {
                std::cout << "Invalid choice! Please select 1, 2, or 3." << std::endl;
                break;
            }
        }
    }
}

#include "menu/contextMenu.h"

void writingWork::writeTask() {
    std::cout << std::endl << "Write: ";

    // Очищення буфера перед зчитуванням введеного рядка
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, m_text); // Зчитуємо рядок

    // Очищаємо пробіли на початку і в кінці введеного рядка
    m_text.erase(0, m_text.find_first_not_of(' ')); // Вилучаємо пробіли на початку
    m_text.erase(m_text.find_last_not_of(' ') + 1); // Вилучаємо пробіли в кінці

    // Вивести обидва рядки для перевірки, чи вони однакові
    std::cout << "You entered: '" << m_text << "'" << std::endl;
    std::cout << "Stored task is: '" << task << "'" << std::endl;

    // Перевірка на правильність
    if (m_text == task) {
        std::cout << "Nice! Correct" << std::endl;
    } else {
        std::cout << "Wrong!" << std::endl;
    }
}

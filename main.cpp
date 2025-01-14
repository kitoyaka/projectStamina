#include <iostream>
#include <string>

class work {
private:
    std::string m_text;
    std::string task = "This excerpt calls for exploring the world, preserving one's own identity, and respecting other cultures. It beautifully conveys the wisdom and patriotism inherent in Shevchenko's work.";
public:
    void setTask(const std::string &newTask) {  task = newTask; }
    std::string getTask() { return task; }

    void writeTask() {
        std::cout << std::endl << "You need to rewrite this text: ";
        std::cin.ignore();
        std::getline(std::cin, m_text);

        std::cout << std::endl;
        if(m_text == task) {
            std::cout << "Nice! Correct" << std::endl;
        }
        else {
            std::cout << "Wrong!" << std::endl;
        }
    }
};

int contextMenu(work &Task);

int main() {
    work Task;
    contextMenu(Task);
}

int contextMenu(work &Task) {
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


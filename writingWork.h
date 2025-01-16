#ifndef WRITINGWORK_H
#define WRITINGWORK_H

#include <string>
#include <iostream>
#include <windows.h>

class writingWork {
private:
    std::string m_text;
    std::string task = "This excerpt calls for exploring the world, preserving one's own identity, and respecting other cultures. It beautifully conveys the wisdom and patriotism inherent in Shevchenko's work.";
public:
    void setTask(const std::string &newTask) {  task = newTask; }
    std::string getTask() { return task; }
    void writeTask();
    void setColor(int textColor, int bgColor) {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
    }
};

#endif // WRITINGWORK_H
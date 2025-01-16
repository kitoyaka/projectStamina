#ifndef WRITINGWORK_H
#define WRITINGWORK_H

#include <string>
#include <iostream>

void setColor(int textColor, int bgColor);

class writingWork {
private:
    std::string m_text;
    std::string task = "This excerpt calls for exploring the world, preserving one's own identity, and respecting other cultures. It beautifully conveys the wisdom and patriotism inherent in Shevchenko's work.";
public:
    void writeTask();
    void setTask(const std::string &newTask);
    std::string getTask();
};

#endif // WRITINGWORK_H
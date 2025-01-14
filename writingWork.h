//
// Created by rigry on 14.01.2025.
//

#ifndef PROJECTSTAMINA_WRITINGWORK_H
#define PROJECTSTAMINA_WRITINGWORK_H
#include <iostream>
#include <string>

class writingWork {
private:
    std::string m_text;
    std::string task = "This excerpt calls for exploring the world, preserving one's own identity, and respecting other cultures. It beautifully conveys the wisdom and patriotism inherent in Shevchenko's work.";

public:
    void setTask(const std::string &newTask) {  task = newTask; }
    std::string getTask() { return task; }

    void writeTask();
};


#endif //PROJECTSTAMINA_WRITINGWORK_H

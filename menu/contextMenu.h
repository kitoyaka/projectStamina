#ifndef CONTEXTMENU_H
#define CONTEXTMENU_H


#include "../writingWork.h"
#include <limits>

class contextMenu {
private:
    std::string newTask;
    writingWork example;
    int number;
public:
    int startMenu();
};


#endif //CONTEXTMENU_H
#ifndef CONTEXTMENU_H
#define CONTEXTMENU_H

#include "../writingWork.h"
#include <windows.h>
#include <limits>

void setColor(int textColor, int bgColor);

class contextMenu {
private:
    int m_number = 0;
    writingWork example;
public:
    int startMenu();
};


#endif //CONTEXTMENU_H
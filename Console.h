#ifndef CONSOLE_H
#define CONSOLE_H

#include "Colors.h"
#include "Keys.h"
#include <iostream>

class Console
{
	public:
        Colors color;
        Keys key;
        void MoveConsole(int x, int y);
        void SetWindowSize(int w, int h);
        void DisableResizeWindow();
        void DisableMaximizeButton();
        void DisableCur();
        void HideScrollbar();
        void GoTo(int x, int y);
        void SetColor(int backgoundColor, int textColor);
};

#endif


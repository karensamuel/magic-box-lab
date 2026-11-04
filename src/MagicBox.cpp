#include "../include/MagicBox.h"
#include <iostream>
#include <thread>
#include <chrono>
int calculateMagicSum(int size)
{
    return size * (size * size + 1) / 2;
}
bool isValidSize(int size)
{
    return size >= 3 && size % 2 == 1 ;

}
int getSize() {
    int size;
    std::cout << "Enter the size of the magic box (odd number >= 3): ";
    std::cin >> size;
    return size;
}


  void displayMagicBoxWithColors(TerminalUI::Color color1, int size)
{
    int m = (size - 1) / 2;

    TerminalUI::initialize();
    TerminalUI::resetScreen();

    TerminalUI::setColor(color1);
   
    for (int i = 1; i <= size * size; i++)
    {
        int q = (i - 1) / size;
        int t = (i - 1) % size;

        int column = (t + m - q + size) % size;
        int row = (2 * q - t + size) % size;

        TerminalUI::drawText(
            std::to_string(i),
            5 + column * 4,
            3 + row * 2,
            color1
        );

        std::this_thread::sleep_for(
            std::chrono::milliseconds(500)
        );
    }

    TerminalUI::resetColor();
}


void displayMagicBoxWithColors2(TerminalUI::Color color1, int size)
{
    int c = size/2;
    int r = 0;

    TerminalUI::initialize();
    TerminalUI::resetScreen();

    TerminalUI::setColor(color1);
   
    for (int i = 1; i <= size * size; i++)
    {
           TerminalUI::drawText(
            std::to_string(i),
            5 + c * 4,
            3 + r * 2,
            color1
        );
        if (i%size==0){
            r=(r+1+size)%size;

        }else{
            c=(c+1+size)%size;
            r=(r-1+size)%size;

        }
     

        std::this_thread::sleep_for(
            std::chrono::milliseconds(500)
        );
    }

    TerminalUI::resetColor();
}

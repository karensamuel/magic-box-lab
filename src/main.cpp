#include <iostream>
#include "../include/MagicBox.h"
using namespace std;


int main (){
    int size = getSize();

    while (!isValidSize(size))
    {
        cout << "Invalid size. Please enter an odd number greater than or equal to 3: ";
        size = getSize();
    }

    int magicSum = calculateMagicSum(size);
    cout << "Magic Sum: " << magicSum << '\n';

    displayMagicBoxWithColors2(TerminalUI::Color::CYAN, size);

  
return 0;
}
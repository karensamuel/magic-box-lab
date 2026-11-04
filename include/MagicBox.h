#pragma once

#include "TerminalUi.h"
int getSize() ;
bool isValidSize(int size);
int calculateMagicSum(int size);
void generateMagicBox();
void displayMagicBox();
void displayMagicBoxWithColors( TerminalUI::Color color1, int size);
void displayMagicBoxWithColors2(TerminalUI::Color color1, int size);
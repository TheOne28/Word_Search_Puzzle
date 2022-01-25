#ifndef MAINHEADER_H
#define MAINHEADER_H

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

//Struct for each word
struct word{
    string content;
    int length;
    bool done;
};

// Some global variable used
extern vector<vector<char>>board;
extern vector<word>problem;

extern int row, column, probnumb, step, wordfound;


//Function declaration

//Function for input
void inputText();

//Function for checking board

void checkHorizontal();
void checkVertikal();
void checkDiagonalL();
void checkDiagonalR();

//Function for print solution
void printHorizontal(int row, int col, int length);
void printVertikal(int row, int col, int length);
void printDiagonalL(int row, int col, int length);
void printDiagonalR(int row, int col, int length);



#endif

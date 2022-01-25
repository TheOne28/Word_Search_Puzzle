#ifndef MAINHEADER_H
#define MAINHEADER_H

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//Struct for each word
struct word{
    string content;
    int length;
    bool done;
};

// Some global variable used
extern vector<vector<char>>board;
extern vector<word>problem;

extern int row, column, probnumb;


//Function declaration

//Function for input and processing input
void inputText();

//Function for checking board;

void checkHorizontal(vector<vector<char>>board, vector<word>allw, int col, int row, int lword);
void checkVertikal(vector<vector<char>>board, vector<word>allw, int col, int row, int lword);
void checkDiagonalL(vector<vector<char>>board, vector<word>allw, int col, int row, int lword);
void checkDiagonalR(vector<vector<char>>board, vector<word>allw, int col, int row, int lword);

//Function for print solution
void printHorizontal(int row, int col, int length, int sizer, int sizecol, vector<vector<char>>board);
void printVertikal(int row, int col, int length, int sizer, int sizecol, vector<vector<char>>board);
void printDiagonalL(int row, int col, int sizer, int sizecol, vector<vector<char>>board);
void printDiagonalR(int row, int col, int sizer, int sizecol, vector<vector<char>>board);









#endif

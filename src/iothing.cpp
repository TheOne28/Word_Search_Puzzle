#include "main_header.hpp"

vector<vector<char>>board;
vector<word>problem;

vector<char> splitstring(string baris){
    vector<char>newvec;

    for(int i = 0; i < baris.length(); i ++){
        if(baris[i] != ' '){
            newvec.push_back(baris[i]);
        }
    }
    return newvec;
}

void inputText(){
    freopen("../input.txt", "r", stdin);
    
    string baris;

    while(getline(cin, baris)){
        if(baris.length() == 0){
            continue;
        }

        if(baris.find(" ") != string::npos){
            vector<char>row = splitstring(baris);
            board.push_back(row);
        }else{
            word newprob;
            newprob.content = baris;
            newprob.length = baris.length();
            newprob.done = false;

            problem.push_back(newprob);
        }
    }
    
}

void printHorizontal(int row, int col, int length, int sizer, int sizecol, vector<vector<char>>board){
    for(int i = 0; i < sizer; i ++){
        for(int j = 0; j < sizecol; j ++){
            if(i == row && j >= col && j < col + length){
                cout << board[i][j];
            }
            else{
                cout << "-";
            }

            cout << " \n"[j == sizecol-1];
        }
    }
    cout << endl;
}

void printVertikal(int row, int col, int length, int sizer, int sizecol, vector<vector<char>>board){
    for(int i = 0; i < sizer; i ++){
        for(int j = 0; j < sizecol; j ++){
            if(j == col && i >= row && i < row + length ){
                cout << board[i][j];
            }else{
                cout << "-";
            }
            cout << " \n"[j == sizecol - 1];
        }
    }
    cout << endl;
}

void printDiagonalL(int row, int col, int sizer, int sizecol, vector<vector<char>>board){
    for(int i = 0; i < sizer; i ++){
        for(int j = 0; j < sizecol; j ++){
            if(i == row && j == col){
                cout << board[i][j];
                col ++;
                row ++;
            }else{
                cout << "-";
            }
            cout << " \n"[j == sizecol - 1];
        }
    }
    cout << endl;
}

void printDiagonalR(int row, int col, int sizer, int sizecol, vector<vector<char>>board){
    for(int i = 0; i < sizer; i ++){
        for(int j = 0; j < sizecol; j ++){
            if(i == row && j == col){
                cout << board[i][j];
                col --;
                row ++;
            }else{
                cout << "-";
            }
            cout << " \n"[j == sizecol - 1];
        }
    }
    cout << endl;
}
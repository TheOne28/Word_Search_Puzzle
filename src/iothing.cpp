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

void printHorizontal(int solrow, int solcolumn, int length){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++){
            if(i == solrow && j >= solcolumn && j < solcolumn + length){
                cout << board[i][j];
            }
            else{
                cout << "-";
            }

            cout << " \n"[j == column-1];
        }
    }
    cout << endl;
}

void printVertikal(int solrow, int solcolumn, int length){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++){
            if(j == solcolumn && i >= solrow && i < solrow + length ){
                cout << board[i][j];
            }else{
                cout << "-";
            }
            cout << " \n"[j == column - 1];
        }
    }
    cout << endl;
}

void printDiagonalL(int solrow, int solcolumn){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++){
            if(i == solrow && j == solcolumn){
                cout << board[i][j];
                solcolumn ++;
                solrow ++;
            }else{
                cout << "-";
            }
            cout << " \n"[j == column - 1];
        }
    }
    cout << endl;
}

void printDiagonalR(int solrow, int solcolumn){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++){
            if(i == solrow && j == solcolumn){
                cout << board[i][j];
                solcolumn --;
                solrow ++;
            }else{
                cout << "-";
            }
            cout << " \n"[j == column - 1];
        }
    }
    cout << endl;
}
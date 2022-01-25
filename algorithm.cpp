#include <bits/stdc++.h>
using namespace std;

struct word{
    string cntnt;
    int length;
    bool done;
};


void printHorizontal(){

}

void printVertikal(){

}

void printDiagonal(char* board, vector<pair<string,int>>word){

}

void checkHorizontal(vector<vector<char>>board, vector<pair<string,int>>word, int col, int row){
    for(int i = 0; i < col; i ++){
        for(int j = 0; j < row; j ++ ){
            
        }
    }
}




int main(){
    int n, m, k;
    cin >> n >> m;
    vector<vector<char>>board;
    vector<word>allw;

    for(int i = 0; i < n ; i ++){
        vector<char>row;
        for(int j = 0; j < m; j ++){
            char prob;
            cin >> prob;
            row.push_back(prob);
        }
        board.push_back(row);
    }

    for(int i = 0; i < k; i ++){
        word prob;
        cin >> prob.cntnt;
        prob.length = prob.cntnt.length();
        prob.done = false;

        allw.push_back(prob);
    }
    
    sort(allw.begin(), allw.end(), [](word a, word b){
        return a.length < b.length;
    });
    




}   
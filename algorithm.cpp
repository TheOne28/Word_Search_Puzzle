#include <bits/stdc++.h>
using namespace std;

struct word{
    string cntnt;
    int length;
    bool done;
};


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

void printVertikal(){

}

void printDiagonal(char* board, vector<pair<string,int>>word){

}
/*
    a b c d 4  
*/


void checkHorizontal(vector<vector<char>>board, vector<word>allw, int col, int row, int lword){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++ ){
            int ind = 0;
            for(int k = 0; k < lword; k ++){
                int lnt = allw[k].length;
                if(lnt > col - j){
                    break;
                }

                if(allw[k].cntnt[ind] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].cntnt[ind] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same){
                        allw[k].done = true;
                        cout << allw[k].cntnt << endl;
                        printHorizontal(i, j, lnt, row, col, board);
                    }
                }else if(allw[k].cntnt[lnt - ind - 1] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].cntnt[lnt - ind - 1] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same) {
                        allw[k].done = true;
                        cout << allw[k].cntnt << endl;
                        printHorizontal(i, j, lnt, row, col, board);
                    }
                }
            }
        }
    }
}




int main(){
    int n, m, k;
    cin >> n >> m >> k;
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
    
    checkHorizontal(board, allw, m, n, allw.size());



}   


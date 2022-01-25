#include "main_header.hpp"

int row, column, probnumb, step, wordfound;

int  main(){
    inputText();
    row = board.size();
    column = board[0].size();
    probnumb = problem.size();

    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column;j ++){
            cout << board[i][j] << " \n"[j == column-1];
        }
    }

    step = 0;
    wordfound = 0;
    sort(problem.begin(), problem.end(), [](word a, word b){
        return a.length < b.length;
    });
    
    checkHorizontal();
    checkVertikal();
    checkDiagonalL();
    checkDiagonalR();
    
    cout << "Total Perbandingan huruf: " << step << "\n";
    cout << "Total Kata ditemukan: " << wordfound << "\n";
    return 0;
}
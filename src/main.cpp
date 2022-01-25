#include "main_header.hpp"

int row, column, probnumb;

int  main(){
    inputText();
    row = board.size();
    column = board[0].size();
    probnumb = problem.size();

    cout << row << column << probnumb << endl;

     
    return 0;
}
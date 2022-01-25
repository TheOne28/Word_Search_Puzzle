#include "main_header.hpp"

void checkHorizontal(vector<vector<char>>board, vector<word>allw, int col, int row, int lword){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++ ){
            for(int k = 0; k < lword; k ++){
                int ind = 0;
                int lnt = allw[k].length;
                if(lnt > col - j){
                    break;
                }

                if(allw[k].content[ind] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].content[ind] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printHorizontal(i, j, lnt, row, col, board);
                    }
                }
                ind = 0;
                if(allw[k].content[lnt - ind - 1] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].content[lnt - ind - 1] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same) {
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printHorizontal(i, j, lnt, row, col, board);
                    }
                }
            }
        }
    }
}

void checkVertikal(vector<vector<char>>board, vector<word>allw, int col, int row, int lword){
    for(int i = 0; i < col; i ++){
        for(int j = 0; j < row; j ++ ){
            for(int k = 0; k < lword; k ++){
                int ind = 0;
                int lnt = allw[k].length;
                if(lnt > row - j){
                    break;
                }

                if(allw[k].content[ind] == board[j][i] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].content[ind] != board[l][i]){
                            same = false;
                            break;
                        }
                    }

                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printVertikal(j, i, lnt, row, col, board);
                    }
                }
                ind = 0;
                if(allw[k].content[lnt - ind - 1] == board[j][i] && !allw[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + allw[k].length; l ++){
                        ind ++;
                        if(allw[k].content[lnt - ind - 1] != board[l][i]){
                            same = false;
                            break;
                        }
                    }

                    if(same) {
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printVertikal(j, i, lnt, row, col, board);
                    }
                }
            }
        }
    }    
}

void checkDiagonalL(vector<vector<char>>board, vector<word>allw, int col, int row, int lword){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < col; j ++){
            for(int k = 0; k < lword; k ++){
                int ind = 0;
                int lnt = allw[k].length;
                
                if(allw[k].content[ind] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j + 1; l < row && z < col;){
                        ind ++;
                        if(allw[k].content[ind] != board[l][z]){
                            same = false;
                            break;
                        }
                        l ++;
                        z ++;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }
                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printDiagonalL(i, j, row, col, board );
                    }
                }
                ind  = 0;
                if(allw[k].content[lnt-ind-1] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j + 1; l < row && z < col;){
                        ind ++;
                        if(allw[k].content[lnt-ind-1] != board[l][z]){
                            same = false;
                            break;
                        }
                        l ++;
                        z ++;
                    }
                    if(ind != lnt - 1){
                        same = false;
                    }

                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printDiagonalL(i, j, row, col, board);
                    }
                }
            }
        }
    }
}

void checkDiagonalR(vector<vector<char>>board, vector<word>allw, int col, int row, int lword){
    for(int i = 0; i < row; i ++){
        for(int j = col - 1; j >= 0; j --){
            for(int k = 0; k < lword; k ++){
                int ind = 0;
                int lnt = allw[k].length;
                
                if(allw[k].content[ind] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j - 1; l < row && z >= 0;){
                        ind ++;
                        if(allw[k].content[ind] != board[l][z]){
                            same = false;
                            break;
                        }
                        l  ++;
                        z -- ;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }
                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printDiagonalR(i, j, row, col, board );
                    }
                }
                ind  = 0;
                if(allw[k].content[lnt-ind-1] == board[i][j] && !allw[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j - 1; l < row && z >= 0;){
                        ind ++;
                        if(allw[k].content[lnt-ind-1] != board[l][z]){
                            same = false;
                            break;
                        }
                        l ++;
                        z --;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }

                    if(same){
                        allw[k].done = true;
                        cout << allw[k].content << endl;
                        printDiagonalR(i, j, row, col, board);
                    }
                }
            }
        }
    }
}
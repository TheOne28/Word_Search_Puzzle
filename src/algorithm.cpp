#include "main_header.hpp"

void checkHorizontal(){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++ ){
            for(int k = 0; k < probnumb; k ++){
                int ind = 0;
                int lnt = problem[k].length;
                if(lnt > column - j){
                    break;
                }
                step += 2;
                if(problem[k].content[ind] == board[i][j] && !problem[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + problem[k].length; l ++){
                        step ++;
                        ind ++;
                        if(problem[k].content[ind] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printHorizontal(i, j, lnt);
                    }
                }
                ind = 0;
                if(problem[k].content[lnt - ind - 1] == board[i][j] && !problem[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + problem[k].length; l ++){
                        step ++;
                        ind ++;
                        if(problem[k].content[lnt - ind - 1] != board[i][l]){
                            same = false;
                            break;
                        }
                    }

                    if(same) {
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printHorizontal(i, j, lnt);
                    }
                }
            }
        }
    }
}

void checkVertikal(){
    for(int i = 0; i < column; i ++){
        for(int j = 0; j < row; j ++ ){
            for(int k = 0; k < probnumb; k ++){
                int ind = 0;
                int lnt = problem[k].length;
                if(lnt > row - j){
                    break;
                }
                step += 2;
                if(problem[k].content[ind] == board[j][i] && !problem[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + problem[k].length; l ++){
                        step ++;
                        ind ++;
                        if(problem[k].content[ind] != board[l][i]){
                            same = false;
                            break;
                        }
                    }

                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printVertikal(j, i, lnt);
                    }
                }
                ind = 0;
                if(problem[k].content[lnt - ind - 1] == board[j][i] && !problem[k].done){
                    bool same = true;
                    for(int l = j + 1; l < j + lnt; l ++){
                        step ++;
                        ind ++;
                        if(problem[k].content[lnt - ind - 1] != board[l][i]){
                            same = false;
                            break;
                        }
                    }

                    if(same) {
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printVertikal(j, i, lnt);
                    }
                }
            }
        }
    }    
}

void checkDiagonalL(){
    for(int i = 0; i < row; i ++){
        for(int j = 0; j < column; j ++){
            for(int k = 0; k < probnumb; k ++){
                int ind = 0;
                int lnt = problem[k].length;
                
                step += 2;
                if(problem[k].content[ind] == board[i][j] && !problem[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j + 1; l < row && z < column;){
                        ind ++;
                        step ++;
                        if(problem[k].content[ind] != board[l][z]){
                            same = false;
                            break;
                        }
                        if(ind == lnt-1){
                            break;
                        }
                        l ++;
                        z ++;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }
                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printDiagonalL(i, j, lnt);
                    }
                }
                ind  = 0;
                if(problem[k].content[lnt-ind-1] == board[i][j] && !problem[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j + 1; l < row && z < column;){
                        ind ++;
                        step ++;
                        if(problem[k].content[lnt-ind-1] != board[l][z]){
                            same = false;
                            break;
                        }
                        if(ind == lnt-1){
                            break;
                        }
                        l ++;
                        z ++;
                    }
                    if(ind != lnt - 1){
                        same = false;
                    }

                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printDiagonalL(i, j, lnt);
                    }
                }
            }
        }
    }
}

void checkDiagonalR(){
    for(int i = 0; i < row; i ++){
        for(int j = column - 1; j >= 0; j --){
            for(int k = 0; k < probnumb; k ++){
                int ind = 0;
                int lnt = problem[k].length;
                
                step += 2;
                if(problem[k].content[ind] == board[i][j] && !problem[k].done){
                    bool same = true;
                    for(int l = i + 1, z = j - 1; l < row && z >= 0;){
                        ind ++;
                        step ++;
                        if(problem[k].content[ind] != board[l][z]){
                            same = false;
                            break;
                        }

                        if(ind == lnt-1){
                            break;
                        }
                        l  ++;
                        z -- ;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }
                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printDiagonalR(i, j, lnt);
                    }
                }
                ind  = 0;
                if(problem[k].content[lnt-ind-1] == board[i][j] && !problem[k].done){
                    bool same = true;
                    step ++;
                    for(int l = i + 1, z = j - 1; l < row && z >= 0;){
                        ind ++;
                        if(problem[k].content[lnt-ind-1] != board[l][z]){
                            same = false;
                            break;
                        }

                        if(ind == lnt-1){
                            break;
                        }
                        l ++;
                        z --;
                    }

                    if(ind != lnt - 1){
                        same = false;
                    }

                    if(same){
                        problem[k].done = true;
                        cout << problem[k].content << endl;
                        printDiagonalR(i, j, lnt);
                    }
                }
            }
        }
    }
}
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



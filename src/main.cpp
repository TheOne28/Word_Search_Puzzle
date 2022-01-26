#include "main_header.hpp"

int row, column, probnumb, step, wordfound;

int  main(){
    inputText();
    row = board.size();
    column = board[0].size();
    probnumb = problem.size();
    
    step = 0;
    wordfound = 0;
    sort(problem.begin(), problem.end(), [](word a, word b){
        return a.length < b.length;
    });

    auto start = high_resolution_clock::now();

    checkHorizontal();
    checkVertikal();
    checkDiagonalL();
    checkDiagonalR();

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    
    cout << "Ukuran Board: " << row << " x " << column << "\n"; 
    cout << "Total Perbandingan huruf: " << step << "\n";
    cout << "Total Kata ditemukan: " << wordfound << "/" << probnumb<< "\n";
    if(duration.count() < 1000){
        cout <<"Waktu yang dibutuhkan (millisecond): " << duration.count()<< "\n";
    }else if(duration.count() < 60000){
        cout << "Waktu yang dibutuhkan (second): " << duration.count() / 1000 << "\n";
    }else{
        cout << "Waktu yang dibutuhkan (menit): " << duration.count()/60000 << "\n";
    }

    return 0;
}
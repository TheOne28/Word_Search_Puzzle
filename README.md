# Tugas Kecil 1 : World Search Puzzle

Vincent Prasetiya Atmadja  
13520099

Repository ini dibuat dalam rangka memenuhi tugas kecil 1 mata kuliah Strategi Algoritma Semester 4 Tahun 2021/2022

## Table of Contents

## Deskripsi Program

Repository ini berisi metode penyelesaian world search puzzle dengan menggunakan algoritma Brute Force. Input program berasal dari sebuah file, yaitu input.txt, yang terletak pada folder test. Program kemudian akan mencari dan menampilkan di mana kata-kata yang ingin dicari muncul. Untuks setiap kata, akan dicetak keberadaan kata tersebut sementara huruf lainnya akan dicetak sebagai -. Selain itu, di akhir, program juga akan menampilkan berapa banyak pengecekan kata yang dilakukan, berapa banyak kata yang berhasil ditemukan, dan berapa lama waktu yang diperlukan oleh program.

## Requirements

Dalam pembuatannya, saya menggunakan C++ 17 dengan memanfaatkan compiler minGW-w64. Beberapa libray yang saya gunakan

1. iostream, untuk input output.
2. algorithm, untuk menggunakan sort bawaan c++.
3. string, untuk melakukan manipulasi string
4. vector, untuk memanfaatkan vector sebagai media penyimpanan board maupun kata yang ingin dicari.
5. chrono, untuk mendapatkan runtime program

## How to Use

Berikut adalah langkah yang dapat diikuti untuk menggunakan program ini.

1. Clone repository ini.
2. Open terminal dan pindahkan working directory ke folder src.
3. Isi puzzle yang ingin diselesaikan pada file input.txt di folder test.
4. Jalankan command berikut untuk menjalankan program 

```shell
g++ algorithm.cpp iothing.cpp main.cpp main_header.hpp -o ../bin/main.exe
cd ../bin
.\main.exe
```
5. Tunggu hingga program berhasil menampilkan seluruh kata. 
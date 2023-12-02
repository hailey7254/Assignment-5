//
// Created by haile on 12/1/2023.
//
#include <iostream>
#include<string>
#include<cctype>
#include <cstring>
using namespace std;

int main() {
    int file1txt[5];
    file1txt[0] = 3;
    file1txt[1] = 10;
    file1txt[2] = 1;
    file1txt[3] = 1;
    file1txt[4] = 8;

    int file2txt[7];
    file2txt[0] = 0;
    file2txt[1] = 5;
    file2txt[2] = 3;
    file2txt[3] = 2;
    file2txt[4] = 8;
    file2txt[5] = 1;
    file2txt[6] = 8;

    int file3txt[13];

    for (int i = 0; i < 5; ++i) {
        file3txt[i] = file1txt[i];
    }

    for (int i = 0; i < 7; ++i) {
        file3txt[i + 5] = file2txt[i];
    }
    cout << file3txt;
}
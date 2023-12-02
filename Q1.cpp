//
// Created by haile on 12/1/2023.
//
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char sentence[101];
    char preChar = ' ';
    cout<< "Enter a senetence"<< endl;

    cin.getline(sentence, 101);

    size_t length = strlen(sentence);
    cout << length;

    for (size_t i = 0; i < length; ++i) {
        if (i == 0) {
            sentence[i] = toupper(sentence[i]);
        } else {
            sentence[i] = tolower(sentence[i]);
        }

        if (sentence[i] == ' ' && sentence[i + 1]) {
            sentence.erase(i, 1);
        }

        cout << sentence[i] ;
    }
    return 0;
}
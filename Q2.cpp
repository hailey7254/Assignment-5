//
// Created by haile on 12/1/2023.
//
#include <iostream>
#include<string>
#include<cctype>
#include <cstring>
using namespace std;

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string sentence;

    cout << "Enter a sentence" << endl;
    getline(cin, sentence);

    size_t length = sentence.length();
    for (size_t i = 0; i < length - 3; ++i) {
        if (isalpha(sentence[i]) && isalpha(sentence[i + 1]) && isalpha(sentence[i + 2]) && isalpha(sentence[i + 3])) {
            if (isupper(sentence[0]))
                sentence[i] = 'L';
            else
                sentence[i] = 'l';
            sentence[i+1] = 'o';
            sentence[i+2] = 'v';
            sentence[i+3] = 'e';

        }


    }

    cout  << sentence << endl;

    return 0;
}

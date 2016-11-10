#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>

const int ASCII_VALUES = 256;

//Finds the duplicate characters in a string
//Prints out duplicates in alaphabetical order
int main() {
    std::string s;
    std::cin >> s;
    std::string result;
    int charMap[ASCII_VALUES] = {0};
    for (auto i : s) {
        charMap[i]++;
    }
    int max = 0;
    for (int i = 0; i < ASCII_VALUES; i++) {
        if (charMap[i] >= 2) {
            result.push_back((char)i);
        }
    }
    std::cout << result << std::endl;
    return 0;
}
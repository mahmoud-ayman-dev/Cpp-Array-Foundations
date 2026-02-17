#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter, SpecialCharacter, Digit };

int ReadNumber(string message) {
    int num;
    do {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}

int RandomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}

char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {
        case enCharType::SamallLetter: {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter: {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter: {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit: {
            return char(RandomNumber(48, 57));
            break;
        }
    }
    return '\0';
}

string GenerateWord(enCharType CharType, int length) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word = word + GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey() {
    string key = "";
    key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter, 4);
    return key;
}

void FillArray(string arr[100], int length) {
    for (int i = 0; i < length; i++)
        arr[i] = GenerateKey();
}

void PrintArray(string arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Array[" << i << "]: " << arr[i] << "\n";
    }
}

int main() {
    srand((unsigned)time(NULL));
    string arr[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    cout << "\nArray elements:\n";
    PrintArray(arr, number);
    
    return 0;
}

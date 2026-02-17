#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int ReadNumber() {
    int num;
    do {
        cout << "please enter number: ";
        cin >> num;
    } while (num < 0);
    return num;
}

void AddElementInArray(int arr[100], int number, int& length) {
    length++;
    arr[length - 1] = number;
}

void FillArray(int arr[100], int& length) {
    bool AddElement = true;
    do {
        AddElementInArray(arr, ReadNumber(), length);
        cout << "Do you want to add more number yes[1]  no[0]: ";
        cin >> AddElement;
    } while (AddElement);
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], length = 0;
    FillArray(arr, length);
    PrintArray(arr, length);
    
    return 0;
}

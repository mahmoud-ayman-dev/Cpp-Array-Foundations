#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

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

void FillArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

void CopyArray(int arr[100], int arrCopy[100], int length) {
    for (int i = 0; i < length; i++) {
        arrCopy[i] = arr[i];
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrCopy[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    CopyArray(arr, arrCopy, number);
    cout << "Array 1 Elements: ";
    PrintArray(arr, number);
    cout << "\nArray 2 Elements: ";
    PrintArray(arrCopy, number);

    return 0;
}

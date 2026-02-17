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

void CopyReverseArray(int arr[100], int arr2[100], int length) {
    int count = 1;
    for (int i = 0; i < length; i++) {
        arr2[i] = arr[length - count];
        count++;
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arr2[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, number);
    cout << "\n";
    CopyReverseArray(arr, arr2, number);
    cout << "\nArray 2 elements after copy array 1 in reversed order:\n";
    PrintArray(arr2, number);
    
    return 0;
}

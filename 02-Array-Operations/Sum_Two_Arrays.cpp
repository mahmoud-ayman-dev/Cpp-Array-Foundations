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

void SumOf2Array(int arr[100], int arr2[100], int arr3[100], int length) {
    for (int i = 0; i < length; i++) {
        arr3[i] = arr[i] + arr2[i];
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arr2[100], arr3[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    FillArray(arr2, number);
    SumOf2Array(arr, arr2, arr3, number);
    cout << "Array 1 Elements: ";
    PrintArray(arr, number);
    cout << "\nArray 2 Elements: ";
    PrintArray(arr2, number);
    cout << "\nArray 3 sum of array1 and array2: ";
    PrintArray(arr3, number);
    
    return 0;
}

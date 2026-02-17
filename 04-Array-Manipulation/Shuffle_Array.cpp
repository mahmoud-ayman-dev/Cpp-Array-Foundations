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

void swap(int& A, int& B) {
    int temp;
    temp = A;
    A = B;
    B = temp;
}

int RandomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}

void FillArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
        arr[i] = i + 1;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

void ShuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        swap(arr[RandomNumber(1, length) - 1], arr[RandomNumber(1, length) - 1]);
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, number);
    cout << "\n";
    ShuffleArray(arr, number);
    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr, number);
    
    return 0;
}

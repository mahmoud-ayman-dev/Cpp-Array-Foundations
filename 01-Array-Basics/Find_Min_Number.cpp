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

int MinNumber(int arr[100], int length) {
    int min = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    cout << "Elements array: ";
    PrintArray(arr, number);
    cout << "\nMin number of array is: " << MinNumber(arr, number) << endl;

    return 0;
}

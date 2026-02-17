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

int SumNubmerInArray(int arr[100], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

int AverageAllNumberInArray(int arr[100], int length) {
    return (float)SumNubmerInArray(arr, length) / length;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    cout << "Elements array: ";
    PrintArray(arr, number);
    cout << "\nAverage number in array is: " << AverageAllNumberInArray(arr, number) << endl;

    return 0;
}

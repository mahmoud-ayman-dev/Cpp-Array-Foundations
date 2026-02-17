#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum enPrimeNotPrime { prime = 1, NotPrime };

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

enPrimeNotPrime CheckPrimeNumber(int number) {
    int P = round(number / 2);

    for (int counter = 2; counter <= P; counter++) {
        if (number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::prime;
}

void CopyArray(int arr[100], int arrCopy[100], int length, int& arrCopyLength) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (CheckPrimeNumber(arr[i]) == enPrimeNotPrime::prime) {
            arrCopy[counter] = arr[i];
            counter++;
        }
    }
    arrCopyLength = --counter;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrCopy[100];
    int arrCopyLength = 0;
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    CopyArray(arr, arrCopy, number, arrCopyLength);
    cout << "Array 1 Elements: ";
    PrintArray(arr, number);
    cout << "\nArray 2 Elements: ";
    PrintArray(arrCopy, arrCopyLength);

    return 0;
}

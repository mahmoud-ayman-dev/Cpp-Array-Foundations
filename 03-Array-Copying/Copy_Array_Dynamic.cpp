#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

void FillArray(int arr[100], int& length) {
    cout << "please enter array length: ";
    cin >> length;
    for (int i = 0; i < length; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

void AddElement(int number, int arr[100], int& length) {
    length++;
    arr[length - 1] = number;
}

void CopyArrayElements(int arr[100], int length, int arrCopy[100], int& arrCopyLength) {
    for (int i = 0; i < length; i++) {
        AddElement(arr[i], arrCopy, arrCopyLength);
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int length = 0;
    FillArray(arr, length);
    cout << "Array 1 Elements: ";
    PrintArray(arr, length);
    
    int arrCopy[100];
    int arrCopyLength = 0;
    CopyArrayElements(arr, length, arrCopy, arrCopyLength);
    cout << "\nArray 2 Elements: ";
    PrintArray(arrCopy, arrCopyLength);
    
    return 0;
}

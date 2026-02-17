#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

void FillArray(int arr[100], int& length) {
    cout << "\nenter number of elements: ";
    cin >> length;
    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(-100, 100);
}

int NegativeCount(int arr[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            counter++;
        }
    }
    return counter;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int length = 0;
    FillArray(arr, length);
    cout << "Array 1 Elements: ";
    PrintArray(arr, length);
    cout << "\nNegative number count is: " << NegativeCount(arr, length) << endl;
    
    return 0;
}

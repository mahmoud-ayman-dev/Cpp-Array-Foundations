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

short SearchNumberInArray(int arr[100], int length, int search) {
    for (int i = 0; i < length; i++) {
        if (search == arr[i]) {
            return i;
        }
    }
    return 0;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int number = ReadNumber("please enter Elements number: ");
    FillArray(arr, number);
    PrintArray(arr, number);
    
    int search = ReadNumber("\nplease enter a number to search for: ");
    int NumberPosition = SearchNumberInArray(arr, number, search);

    if (NumberPosition == 0) {
        cout << "The number is not found: :)\n";
    }
    else {
        cout << "number you are looking for is: " << search << endl;
        cout << "the number found at position: " << NumberPosition << endl;
        cout << "the number found its order: " << NumberPosition + 1 << endl;
    }
    
    return 0;
}

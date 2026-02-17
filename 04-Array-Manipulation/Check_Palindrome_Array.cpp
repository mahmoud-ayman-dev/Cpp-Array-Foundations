#include <iostream>
using namespace std;

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

bool IsPalindrome(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] != arr[length - i - 1])
            return false;
    }
    return true;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100] = { 10,20,30,40,50,50,40,30,20,10 };
    int length = 10;
    cout << "Array 1 Elements: ";
    PrintArray(arr, length);
    
    if (IsPalindrome(arr, length))
        cout << "\nYes, is palindrome\n";
    else
        cout << "\nNo, is not palindrome\n";

    return 0;
}

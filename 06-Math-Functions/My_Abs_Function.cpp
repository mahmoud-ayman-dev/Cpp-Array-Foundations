#include <iostream>
#include <cmath>
using namespace std;

float MyABS(int number) {
    if (number > 0)
        return number;
    else
        return number * -1;
}

float ReadNumber() {
    int num;
    cout << "please enter number: ";
    cin >> num;
    return num;
}

int main() {
    int number = ReadNumber();
    cout << "My ABS result: " << MyABS(number) << endl;
    cout << "C++ ABS result: " << abs(number) << endl;
    
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int MyFloor(float number) {
    if (number > 0)
        return (int)number;
    else
        return (int)number - 1;
}

float ReadNumber() {
    float num;
    cout << "please enter number: ";
    cin >> num;
    return num;
}

int main() {
    float number = ReadNumber();
    cout << "My floor result: " << MyFloor(number) << endl;
    cout << "C++ floor result: " << floor(number) << endl;
    
    return 0;
}

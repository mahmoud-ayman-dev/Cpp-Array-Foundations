#include <iostream>
#include <cmath>
using namespace std;

float MySqrt(float number) {
    return pow(number, 0.5);
}

float ReadNumber() {
    float num;
    cout << "please enter number: ";
    cin >> num;
    return num;
}

int main() {
    float number = ReadNumber();
    cout << "My sqrt result: " << MySqrt(number) << endl;
    cout << "C++ sqrt result: " << sqrt(number) << endl;
    
    return 0;
}

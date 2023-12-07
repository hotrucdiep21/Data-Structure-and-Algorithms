#include<iostream>
using namespace std;

int sumOfNumber(int value) {
    if(value <= 1) 
        return value;
    return value + sumOfNumber(value-1);
}

int main() {
    cout << sumOfNumber(5);
}
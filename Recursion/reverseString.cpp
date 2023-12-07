#include<iostream>
using namespace std;

string reverseString(string s) {
    // what is the base case?
    if(s == "") {
        return "";
    }
    // what is the smallest amount of work i can do each iteration? 
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    cout << reverseString("hello");
    return 0;
}
#include<iostream>
using namespace std;

string b();
string c();

string a() {
    return "hello " + b();
}


string b() {
    return "my " + c();
}


string c() {
    return "friends";
}
int main() {
    cout << a();
    return 0;
}
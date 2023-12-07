#include<iostream>
using namespace std;

int fibonaci(int n) {
    if(n==0 || n==1) {
        return n;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}
int main() {
    cout << "10 so dau tien cua day so Fibonacci: \n";
    cout << fibonaci(10);
    return 0;
}
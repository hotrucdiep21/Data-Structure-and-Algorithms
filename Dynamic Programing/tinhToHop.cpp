#include <iostream>
using namespace std;

int TinhToHop(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return TinhToHop(n - 1, k - 1) + TinhToHop(n - 1, k);
}

int main() {
    int n = 5;  // Replace with your desired values for n and k
    int k = 2;

    int result = TinhToHop(n, k);

    cout << "TinhToHop(" << n << ", " << k << ") = " << result << endl;

    return 0;
}

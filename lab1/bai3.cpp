#include <iostream>
#include <stack>
using namespace std;

// Hàm tính tổng bằng giải thuật đệ quy
double tinhTongRecursion(int n) {
    if (n == 1) return 1.0;
    return 1.0 / n + tinhTongRecursion(n - 1);
}

// Hàm tính tổng bằng giải thuật khử đệ quy với vòng lặp
double tinhTongIterative(int n) {
    double tong = 0.0;
    for (int i = 1; i <= n; i++) {
        tong += 1.0 / i;
    }
    return tong;
}

// Hàm tính tổng bằng giải thuật tham lam
double tinhTongGreedy(int n) {
    double tong = 0.0;
    for (int i = 1; i <= n; i++) {
        tong += 1.0 / i;
    }
    return tong;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    cout << "Menu:" << endl;
    cout << "1. Tinh tong (su dung giai thuat de quy)" << endl;
    cout << "2. Tinh tong (su dung giai thuat khong de quy)" << endl;
    cout << "3. Tinh tong (su dung giai thuat tham lam)" << endl;

    int choice;
    cout << "Chon giai thuat (1-3): ";
    cin >> choice;

    double tong = 0.0;

    switch (choice) {
        case 1:
            tong = tinhTongRecursion(n);
            break;
        case 2:
            tong = tinhTongIterative(n);
            break;
        case 3:
            tong = tinhTongGreedy(n);
            break;
        default:
            cout << "Lua chon khong hop le." << endl;
            return 1;
    }

    cout << "Tong theo cong thuc S(n) = 1 + 1/2 + 1/3 + ... + 1/n la: " << tong << endl;

    return 0;
}

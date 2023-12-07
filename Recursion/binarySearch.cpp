#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> a, int left, int right, int find) {
    if(left > right) {
        return -1;
    }

    int mid = (left+right)/2;

    if(find == a[mid]) {
        return mid;
    }

    if(find < a[mid]) {
        return binarySearch(a, left, mid, find);
    }

    return binarySearch(a, mid+1, right, find);
}
int main() {
    vector<int> a = {-1, 0, 1, 2, 3, 4, 7, 9, 10, 20};
    cout << binarySearch(a, 0, 9, 10);
    return 0;
}
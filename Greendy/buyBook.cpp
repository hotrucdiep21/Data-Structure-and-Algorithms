#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &pri) {
    for (int i = 0; i < pri.size()-1; i++)
    {
        for (int j = i+1; j < pri.size(); j++)
        {
            if(pri[i] < pri[j]) {
                int temp = pri[i];
                pri[i] = pri[j];
                pri[j] = temp;

            }
        }
        
    }
    
}

int buyBook(vector<int> pric) {
    int count = 0;
    int sum = 0;
    for (int i = 0; i < pric.size(); i++)
    {
        if(count == 2) {
            count = 0;
            continue;
        }
        count++;
        sum+=pric[i];
        
    }

 return sum;
    
}
int main() {
    
    vector<int> prices = {5, 3, 6,9,1,2,2};

    sort(prices);

    for (int i = 0; i < prices.size(); i++)
    {
        cout << prices[i] << " ";
    }

    cout << "Sum = " << buyBook(prices);
    

    return 0;
}
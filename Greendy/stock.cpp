// Program for best time to  buy and Shell Stock
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 6;

    vector<int> prices = {7,1,5,3,6,4};

    int minBuy = INT_MAX;
    int maxProfit = 0;

    int dayBuy;
    

    pair<int, int> val;
    for (int i = 0; i < prices.size(); i++)
    {
        if(minBuy > prices[i]) {
            minBuy = prices[i];
            dayBuy = i;
        }

        if(maxProfit < prices[i]-minBuy) {
            maxProfit = prices[i]-minBuy;
            

            val = {dayBuy, i};
        }
    }
    

    
    cout<<"Best Time to buy on day:  "<<val.first+1<<" and sell on day:  "<<val.second+1<<endl;
    cout<<"Maximum Profit Will be "<<maxProfit;


    return 0;
}
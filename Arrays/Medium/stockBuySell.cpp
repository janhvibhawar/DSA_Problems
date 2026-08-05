#include<bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> &prices, int n){
    int mini = prices[0];
    int maxProfit = 0;

    for(int i=1; i<n; i++){
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {5,4,3,3,2,11};

    int n = 6;

    int result = stockBuySell(prices,n);

    cout << result;

    return 0;
}
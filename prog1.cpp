#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minprice=INT_MAX;
    int maxpro=0;
    for(int i=0;i<prices.size();i++){
//         if(prices[i]<min) min=prices[i];
        minprice=min(prices[i],minprice);
            //can also use this
        maxpro=max(prices[i]-minprice,maxpro);
    }
    return maxpro;
}

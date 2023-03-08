#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int maxProfit(vector<int>&prices)
{
    int n = prices.size();
    int mini = INT_MAX;
    int profit = 0;
    for(int i = 0;i<n-1;i++){
        if(prices[i]<mini){
            mini = prices[i];
        }
        profit = max(profit,prices[i+1]-mini);
    }
    return profit;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int>v= {7,1,5,3,6,4};
    int ans = maxProfit(v);
    cout<<ans<<endl;
    return 0;
}
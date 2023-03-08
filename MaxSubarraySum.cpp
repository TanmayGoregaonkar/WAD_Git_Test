// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int maxSubArray(vector<int>&num){
//     int n = num.size();
//     int mini = INT_MIN;
//     int sum=0;
//     for (int i = 0; i < n-1; i++)
//     {
//         sum+=num[i];
//         mini = min(mini,sum);
//         if(sum<=0)
//             sum = 0;
//     }
//     return mini;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int ans = maxSubArray(arr);
//     cout<<ans<<endl;
//     return 0;
// }

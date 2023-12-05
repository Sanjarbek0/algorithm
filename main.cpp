// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
// #define int long long

using namespace std;

void t_main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> dp(n);
    dp[1] = a[1] - a[0];
    if(n > 2) dp[2] = a[2] - a[0];

    for (int i = 3; i < n; i++)
        dp[i] = a[i] - a[i-1] + min(dp[i-1], dp[i-2]);
    
    cout << dp.back();
    
}
    
    
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
        
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t = 1;
       
    cin >> t;
    while(t--) 
           
    t_main();
    
    return 0;
}
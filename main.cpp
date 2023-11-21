// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
//#define int long long
   
   
using namespace std;
   
   
void t_main(){
    int n;
    cin>> n;
    vector<int> a(n);
     
    for(int &x:a) cin >> x;
     
     
    vector<vector<int> > dp(n+1, vector<int> (4, 0));
     
    dp[0][1] =  a[0];
     
    for(int i = 1; i < n+1; i++) {
        dp[i][1] = dp[i-1][1] + a[i];
        dp[i][2] = dp[i-1][2] + dp[i-1][1] * a[i];
        dp[i][3] = dp[i-1][3] + dp[i-1][2] * a[i];
    }
     
    cout << dp[n-1][3];
}
   
   
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
       
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   
    int t = 1;
       
//    cin >> t;
//    while(t--) 
           
    t_main();
   
    return 0;
}
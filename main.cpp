// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
//#define int long long
   
   
using namespace std;
   
   
void t_main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,0);

    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + (i % 2 == 0 ? dp[i/2] : 0);
    }

    cout << dp[n];
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
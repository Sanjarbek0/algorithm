// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
// #define int long long

using ll = __int128;
	
using namespace std;


ostream& operator<<(ostream& os, ll n){
    string s = "";
    do {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }while(n > 0);

    return os << s;
}

   
void t_main(){
    int n;
    cin >> n;
    vector<vector<ll>> dp(n+1, vector<ll> (10, 1));

    dp[1][0] = dp[1][8] = 0;

    for(int i = 2; i <= n; i++){
            dp[i][0] = dp[i-1][4] + dp[i-1][6];
            dp[i][1] = dp[i-1][8] + dp[i-1][6];
            dp[i][2] = dp[i-1][7] + dp[i-1][9];
            dp[i][3] = dp[i-1][4] + dp[i-1][8];
            dp[i][4] = dp[i-1][0] + dp[i-1][3]+ dp[i-1][9];
            dp[i][5] = 0;
            dp[i][6] = dp[i-1][0] + dp[i-1][1]+ dp[i-1][7];
            dp[i][7] = dp[i-1][2] + dp[i-1][6];
            dp[i][8] = dp[i-1][1] + dp[i-1][3];
            dp[i][9] = dp[i-1][2] + dp[i-1][4];
    }
    ll s = 0;
    for(int i = 0; i < 10; i++) s += dp[n][i];

    cout << s;



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
// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
// #define int long long

using ll = __int128;
// using ll = unsigned long long;

using namespace std;

ostream& operator <<(ostream& cout, ll n){
	string r = "";
	do {
		r = char((n % 10) + '0') + r;
		n /= 10;
	}while (n > 0);
	cout << r;
	return cout;
	
}
   
void t_main(){
   int n, a, b;
   cin >> n >> a >> b;

   vector<vector<ll>> dp(n, vector<ll> (max(a,b)+1));

   for(int i = 0; i < n; i ++){
		for(int j = 0; j <= max(a,b); j++){
			if (i == 0) dp[i][j] = j+1;
			else if (j == 0) dp[i][j] = 1;
			else dp[i][j] = dp[i][j-1] + dp[i-1][j];
		}
   }
    ll  r = dp[n-1][a] * dp[n-1][b];
	cout << r;
}
   
   
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
       
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
   
    int t = 1;
       
//    cin >> t;
//    while(t--) 
           
    t_main();
   
    return 0;
}
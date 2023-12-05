// Run code :   g++ main.cpp -o main; ./main

#include <bits/stdc++.h>
#include <vector>
// #define int long long

using namespace std;

void t_main(){
    int n;
    cin >> n;
    cout << 1 + n * (n+1) / 2;
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
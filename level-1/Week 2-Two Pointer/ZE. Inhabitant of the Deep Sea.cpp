#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n,kraken; cin>>n>>kraken;
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin>>v[i];

        int l = 0,r = n-1;
        int k1 = (kraken + 1) / 2;
        int k2 = kraken / 2;

        while (l <= r && k1) {
               if (k1 >= v[l]) {
                  k1 -= v[l++];
               }
               else {
                  v[l] -= k1; k1 = 0;
               }
            }

        while (l <= r && k2) {
               if (k2 >= v[r]) {
                  k2 -= v[r--];
               }
               else {
                  v[r] -= k2; k2 = 0;
               }
            }

        cout << n - (r - l + 1) << "\n";
    }
    
}

 
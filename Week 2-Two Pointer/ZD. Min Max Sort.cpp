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
          int n; cin>>n; vector<int>v(n+1);
          for (int i = 0; i < n; i++) {
                int x; cin>>x;
                v[x] = i;
          }
    
          int l = (n + 1) / 2, r = n / 2 + 1;

          if (v[l] <= v[r]) {
              
              while (r < n)
              {
                if (v[r] < v[r+1] && v[l] > v[l-1]) {
                    l--; r++;
                }
                else {
                    break;
                }
              }
              cout << l - 1 << "\n";

          }
          else cout << n / 2 << "\n";
    }
   
}

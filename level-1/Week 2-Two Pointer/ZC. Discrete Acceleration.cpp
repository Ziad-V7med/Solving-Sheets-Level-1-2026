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
          int n,k; cin>>n>>k; vector<int>v(n);
          for (int i = 0; i < n; i++) cin>>v[i];

          double pos1 = 0,pos2 = k,v1 = 1,v2 = 1;
          double t1,t2,total_time = 0;

          int l = 0,r = n-1;
          while (l <= r)
          {
            
               t1 = (v[l] - pos1) / v1;
               t2 = (pos2 - v[r]) / v2;

               if (t1 < t2) {
                 total_time += t1;
                 pos2 -= v2 * t1;
                 pos1 = v[l];
                 v1++; l++;
               }
               else {
                 total_time += t2;
                 pos1 += v1 * t2;
                 pos2 = v[r];
                 v2++; r--;
               } 
            
          }
          total_time += (pos2 - pos1) / (v1 + v2);

          cout << fixed << setprecision(15) << total_time << "\n";
    }
   
}

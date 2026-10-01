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
       for (int i = 0; i < n; i++) cin >> v[i];
       
       int l = 0, r = 2e12 + 1, H = 0;
   
       while (l <= r) {
           int mid = l + (r - l) / 2, cost = 0;
           
           for (int i = 0; i < n; i++) if (v[i] < mid) cost += (mid - v[i]);
    
           if (cost <= k) {
               H = mid;      
               l = mid + 1;
           }
           else {
               r = mid - 1; 
           }
       }
   
       int total_spent = 0;
       int extra_from_start = 0; 
       
       for (int i = 0; i < n; i++) {

           if (v[i] < H) 
               total_spent += (H - v[i]);

           else if (v[i] > H) 
               extra_from_start++;
           
       }
   
       int remaining_k = k - total_spent;
   
       int result = (H - 1) * n + 1 + extra_from_start + remaining_k;
   
       cout << result << "\n";
    }
}




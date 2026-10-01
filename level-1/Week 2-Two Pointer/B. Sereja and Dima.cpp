#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    
    int sum1 = 0,sum2 = 0,l = 0,r = n-1;
    bool Sereja = true;

   while (l <= r)
   {
     if (v[l] >= v[r]) {
        if (Sereja) sum1 += v[l++];
        else sum2 += v[l++];
        Sereja = !Sereja;
     }
     else {
        if (Sereja) sum1 += v[r--];
        else sum2 += v[r--];
        Sereja = !Sereja;
     }
   }
    
    cout<<sum1<<" "<<sum2;
   
}

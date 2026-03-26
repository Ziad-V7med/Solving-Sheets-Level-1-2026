#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,x; cin>>n>>x;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(),v.end());

    int l = 0,r = n-1,ans = 0;
    while (l <= r)
    {
       if (v[l] + v[r] <= x) l++,r--;
       else  r--;
       ans++;   
    }
    cout<<ans;
}

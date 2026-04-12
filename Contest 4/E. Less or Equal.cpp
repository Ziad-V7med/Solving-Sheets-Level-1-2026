#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,ans = -1; cin>>n>>k; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    sort(v.begin(),v.end());

    if(k == 0) ans = v[0] - 1;
    else if (k == n) ans = v[n-1];
    else if (v[k] != v[k-1]) ans = v[k-1];

    if(ans >= 1 && ans <= 1e9) cout<<ans<<"\n";
    else cout<<"-1\n";
}

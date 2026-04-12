#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,time; cin>>n>>time; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    int l = 0,r = 0,sum = 0,ans = 0;
    while (r < n)
    {
        sum += v[r++];
        while (sum > time) sum -= v[l++];
        ans = max (ans,r - l);
    }
    cout << ans << "\n";
}

 
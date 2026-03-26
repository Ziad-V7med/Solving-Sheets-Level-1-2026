#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,coin; cin>>n>>coin;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    
    int l = 0,r = 0,sum = 0,ans = INT64_MAX;
    while (r < n)
    {
        sum += v[r];
        while (sum >= coin)
        {
            ans = min(ans,r - l + 1);
            sum -= v[l++];
        }
        r++;
    }
    cout << (ans != INT64_MAX ? ans : -1) << "\n";
}


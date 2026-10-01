#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,target; cin>>n>>target; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    int l = 0,r = 0,sum = 0,ans = INT64_MAX;
    while (r < n)
    {
        sum += v[r++];
        while (sum >= target)
        {
            sum -= v[l++];
            ans = min (ans,r - l + 1);
        }
      
    }
    cout << (ans == INT64_MAX ? -1 : ans) << "\n";
}

 
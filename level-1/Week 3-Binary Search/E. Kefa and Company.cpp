#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,d; cin>>n>>d; vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(),v.end());

    int l = 0,r = 0,sum = 0,ans = INT64_MIN;
    while (r < n)
    {
        sum += v[r].second;
        while (v[r].first - v[l].first >= d) {
            sum -= v[l].second; l++;
        }
        ans = max(ans,sum);
        r++;
    }
    
    cout << ans << "\n";
    
}

 
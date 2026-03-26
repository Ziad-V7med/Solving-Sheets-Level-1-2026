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
        int n; cin>>n; 
        vector<int>v(n);
        for (int i = 0; i < n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
    
        int l = 0,r = 0,ans = INT64_MIN;
        while (r < v.size())
        {
            while (v[r] - v[l] >= n) l++;
            ans = max(ans,r - l + 1);
            r++;
        }      
        cout << ans << "\n";
    }
}

#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    while (q--) {
        int k; cin>>k;

        int l = 0,r = n-1,ans = -1;
        while (l <= r)
        {
           int mid = l + (r - l) / 2;

           if (v[mid] > k) {
                ans = v[mid];
                r = mid - 1;
           }
           else {
                l = mid + 1;
           }
        }
        
        cout << ans << "\n";

    }
    
    
}

 
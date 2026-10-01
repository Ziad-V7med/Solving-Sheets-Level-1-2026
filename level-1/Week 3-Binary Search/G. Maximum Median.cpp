#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>&v,int k,int mid) {
    int n = v.size(),need = 0;

    for (int i = n / 2; i < n; i++) if (mid >= v[i]) need += mid - v[i];
    
    return need <= k;
}

signed main()
{
    matador 
    int n,k; cin>>n>>k; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(),v.end());

    int l = v[n/2],r = 2e9,ans = v[n/2];
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(v,k,mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    cout << ans << "\n";
   
}

 
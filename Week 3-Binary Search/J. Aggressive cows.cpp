#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>&v,int cow,int mid) {
    int last = 0,valid = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] - v[last] >= mid) {
            last = i;
            valid++;
        }
    }

    return valid >= cow;
    
}

signed main()
{
    matador 
    int n,cow; cin>>n>>cow; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());

    int l = 0,r = v.back() - v.front(),ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(v,cow,mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    cout << ans << "\n";
   
}

 
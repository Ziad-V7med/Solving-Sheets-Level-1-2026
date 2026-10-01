#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

pair<bool,int> can (vector<int>v,int mid,int pound) {
    pair<bool,int>ans;
    for (int i = 0; i < v.size(); i++) v[i] += (i + 1) * mid;

    sort(v.begin(),v.end());

    for (int i = 0; i < mid; i++) ans.second += v[i];
    
    if (ans.second <= pound) ans.first = true;
    
    return ans;
}

signed main()
{
    matador 
    int n,pound; cin>>n>>pound; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0,r = n,souvenir = 0,cost = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        pair<bool,int>ans = can(v,mid,pound);

        if (ans.first) {
            souvenir = mid;
            cost = ans.second;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << souvenir << " " << cost << "\n";
       
}

 
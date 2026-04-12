#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>&v,int n,int ship,int height,int mid) {
   
    vector<bool>visit(n+1,true);
    for (int i = 0; i < mid; i++) visit[v[i]] = false;

    int cnt = 0,total_ship = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visit[i]) cnt++;
        else cnt = 0;

        if (cnt == height) {
            total_ship++;
            cnt = 0;
            i++;
        }
    }
    
    return total_ship < ship;
}

signed main()
{
    matador 
    int n,ship,height,m; cin>>n>>ship>>height>>m;
    vector<int>v(m);
    
    for (int i = 0; i < m; i++) cin >> v[i];

    int l = 0,r = m,ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(v,n,ship,height,mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
    
}

 
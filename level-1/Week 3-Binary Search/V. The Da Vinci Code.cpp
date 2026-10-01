#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>v,int x,int mid) {

    int sum = 0;
    for (int i = 0; i < mid; i++) sum += v[i];
    if (sum > x) return false;

    for (int i = mid; i < v.size(); i++)
    {
        sum = sum + v[i] - v[i-mid];
        if (sum > x) return false;
    }
    
    return true;
    
}

signed main()
{
    matador 
    int n,x; cin>>n>>x; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 1,r = n,ans = -1;
    while (l <= r)
    {
       int mid = l + (r - l) / 2;

       if (can(v,x,mid)) {
            ans = mid;
            l = mid + 1;
       }
       else {
            r = mid - 1;
       }
    }
    
    cout << ans << "\n";
   
}

 
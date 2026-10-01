#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<int>v(n);
    
    int sum = 0,mx = INT64_MIN;
    for (int i = 0; i < n; i++) {
        cin>>v[i];
        sum += v[i];
        mx = max(mx,sum);
        if (sum <= 0) sum = 0;
    }
    cout<<mx;
}

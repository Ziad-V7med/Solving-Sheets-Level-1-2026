#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q; 
    vector<int>v(n+1);

    for(int i = 1; i <= n; i++) cin>>v[i]; 
    sort(v.begin(),v.end());

    for (int i = 1; i <= n; i++) v[i] += v[i-1];
    
    while (q--)
    {
        int x,y; cin>>x>>y;
        cout << v[n - x + y] - v[n - x] << "\n";
    }
}



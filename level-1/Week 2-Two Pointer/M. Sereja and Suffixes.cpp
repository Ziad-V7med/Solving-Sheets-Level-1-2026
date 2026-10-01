#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q;
    vector<int>v(n+2),freq(1e5+1);

    for(int i = 1; i <= n; i++) cin>>v[i]; 
    for (int i = n; i >= 1; i--)
    {
        freq[v[i]]++; 
        v[i] = (freq[v[i]] == 1) + v[i+1];
    }
    
    while (q--)
    {
        int m; cin>>m;
        cout<<v[m]<<"\n";
    }
}


#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<string>v(n);
    map<string,int>mp;
    for (int i = 0; i < n; i++) cin>>v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if(mp[v[i]] == 0) {
            cout<<v[i]<<"\n";
            mp[v[i]]++;
        }
    }
}
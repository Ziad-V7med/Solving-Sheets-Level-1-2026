#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,m; cin>>n>>k>>m; 
    vector<string>word(n+1),message(m+1);
    vector<int>cost(n+1);
    map<string,int>mp;

    for (int i = 1; i <= n; i++) cin>>word[i];

    for (int i = 1; i <= n; i++) {
        cin>>cost[i]; mp[word[i]] = cost[i];
    }

    while (k--)
    {
        int x,mn = INT32_MAX; cin>>x; vector<int>same(x+1);
        for (int i = 1; i <= x; i++)
        {
           cin>>same[i]; 
           mn = min(mn,mp[word[same[i]]]);
        }
        for (int i = 1; i <= x; i++) mp[word[same[i]]] = mn;   
    }

    int min_cost = 0;
    for (int i = 1; i <= m; i++) {
        cin>>message[i];
        min_cost += mp[message[i]];
    }
    
    cout<<min_cost;
}



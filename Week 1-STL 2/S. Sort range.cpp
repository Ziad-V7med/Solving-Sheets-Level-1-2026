#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n,m,k; cin>>n>>m>>k; vector<int>v(n),ans; priority_queue<int,vector<int>, greater<int>>pq;
        for (int i = 0; i < n; i++) cin>>v[i];
        for (int i = 0; i < m; i++) pq.push(v[i]);
        for (int i = m; i < n; i++)
        {
            ans.push_back(pq.top()); pq.pop(); pq.push(v[i]);
        }
        while (!pq.empty())
        {
            ans.push_back(pq.top()); pq.pop();
        }
        cout<<ans[--k]<<"\n";
    }
}

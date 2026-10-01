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
       int n; cin>>n; vector<pair<int,int>>v(n+1); vector<int>pre(n+1),score(n+1),ans(n+1);
       for (int i = 1; i <= n; i++) {
         cin>>v[i].first; v[i].second = i;
       }
       sort(v.begin(),v.end());

       for (int i = 1; i <= n; i++) pre[i] = pre[i-1] + v[i].first;

       score[n] = n-1;
       for (int i = n-1; i >= 1; i--)
       {
          if(pre[i] >= v[i+1].first) score[i] = score[i+1];
          else score[i] = i - 1;
       }

       for (int i = 1; i <= n; i++) ans[v[i].second] = score[i];
       
       
       for(int i = 1; i <= n;i++) cout<<ans[i]<<" "; cout<<"\n";
       
    }
}

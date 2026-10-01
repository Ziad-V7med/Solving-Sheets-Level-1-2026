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
       int n; cin>>n; vector<int>v(n); set<vector<int>>st;
       for (int i = 0; i < n; i++) cin>>v[i];
       for (int i = 0; i < n; i++)
       {
         for (int j = i+1; j < n; j++)
         {
            swap(v[i],v[j]);
            st.insert(v);
            swap(v[i],v[j]);
         }
       }
       cout<<st.size()<<"\n";
    }
}
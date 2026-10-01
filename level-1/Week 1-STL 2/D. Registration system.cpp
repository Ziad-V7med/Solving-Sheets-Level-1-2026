#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; map<string,int>mp;
    for (int i = 0; i < n; i++)
    {
       string s; cin>>s;
       if (mp[s] == 0) cout<<"OK\n";
       else cout<<s<<mp[s]<<"\n";
       mp[s]++;
    }
   
}

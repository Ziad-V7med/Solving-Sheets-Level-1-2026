#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    string s; cin>>s; map<string,int>mp;
    for (int i = 0; i < 10; i++)
    {
        string s; cin>>s; mp[s] = i;
    }
    for (int i = 0; i < 80; i+=10) cout<<mp[s.substr(i,10)];
}

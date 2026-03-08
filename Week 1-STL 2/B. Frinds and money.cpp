#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q; map<string,int>mp;
    for (int i = 0; i < n; i++)
    {
        string name; int money;
        cin>>name>>money;
        mp[name] = money;
    }
    while (q--)
    {
        int op; cin>>op;
        if (op == 1){
            string x; int y; cin>>x>>y;
            mp[x] += y;
        }
        else {
            string x; cin>>x; cout<<mp[x]<<"\n";
        }
    }
    
}

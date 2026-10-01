#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q; map<int,int>mp;

    for (int i = 0; i < n; i++) {
        int val; cin>>val; mp[val] = i + 1;
    }

    while (q--)
    {
       int num; cin>>num;
       if (mp.count(num)) cout << "Yes " << mp[num] << "\n";
       else cout << "No\n";
    }
       
}

 
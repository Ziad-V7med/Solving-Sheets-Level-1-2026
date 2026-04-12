#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,unique = 0,ans = 0; cin>>n>>k;
    string s; cin>>s;
    map<int,int>mp;

    for (int i = 0; i < k; i++)
    {
        if (mp[s[i]] == 0) unique++;
        mp[s[i]]++; 
    }
    
        ans = max (ans,unique);

    for (int i = k; i < n; i++)
    {
        if (mp[s[i-k]] == 1) unique--;
        mp[s[i-k]]--;

        if (mp[s[i]] == 0) unique++;
        mp[s[i]]++;
        ans = max (ans,unique);

    }
    
    cout << ans << "\n";  
}

 
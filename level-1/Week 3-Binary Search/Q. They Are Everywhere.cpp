#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n;
    string s; cin>>s;
    set<int>st;
    map<int,int>mp;

    for (int i = 0; i < n; i++) st.insert(s[i]);

    int l = 0,r = 0,type = 0,flat = INT64_MAX;
    while (r < n)
    {
        if (mp[s[r]] == 0) type++;
        mp[s[r]]++;

        while (type == st.size())
        {
            flat = min(flat,r - l + 1);
            if (mp[s[l]] == 1) type--;
            mp[s[l]]--;
            l++;
        }
        
        r++;
    }

    cout << flat << "\n";

}

 
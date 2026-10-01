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
        int n; string s,t; cin>>n>>s>>t;
        vector<int>v(n),freq(26); map<char,vector<int>>mp; bool check = true;
        for (int i = 0; i < n; i++) cin>>v[i];
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
           if (freq[i] % 2 == 1) {
               check = false;
           }
        }
        if(!check) {
            cout<<"NO\n"; continue;
        }
        for (int i = 0; i < n; i++) mp[s[i]].push_back(v[i]);

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i]) {
                auto it = find(mp[t[i]].begin(),mp[t[i]].end(),v[i]);
                if (it == mp[t[i]].end()) check = false;
            }
        }
        cout<<(check ? "YES\n" : "NO\n");
    }
}

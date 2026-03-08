#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; 
    string s,Two_gram; cin>>s;
    map<string,int>mp;
    for (int i = 0; i < n-1; i++) mp[s.substr(i,2)]++;
    int max_val = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (max_val < it->second) {
            max_val = it->second;
            Two_gram = it->first;
        }
    }
    cout<<Two_gram;
}

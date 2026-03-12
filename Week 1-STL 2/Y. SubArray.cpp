#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,sum = 0; cin>>n>>k; vector<int>v(n);
    map<int,int>mp; set<pair<int,int>>st;
    for (int i = 0; i < n; i++) cin>>v[i];
    for (int i = 0; i < k; i++) mp[v[i]]++;

    for (auto it = mp.begin(); it != mp.end(); it++)
       {
           st.insert({it->second,it->first});
       }
    sum += st.rbegin()->second;
    
    for (int i = k; i < n; i++)
    {
        st.erase({mp[v[i-k]],v[i-k]}); 
        mp[v[i-k]]--; 
        st.insert({mp[v[i-k]],v[i-k]});

        st.erase({mp[v[i]],v[i]});
        mp[v[i]]++; 
        st.insert({mp[v[i]],v[i]});

        sum += st.rbegin()->second;
    }
    cout<<sum;
}

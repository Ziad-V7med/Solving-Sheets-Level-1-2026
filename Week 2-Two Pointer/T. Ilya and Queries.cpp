#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    string s; cin>>s;
    int q; cin>>q; 

    int n = s.size();
    vector<int>pre(n+1);

    for(int i = 1; i < n; i++) pre[i+1] = (s[i] == s[i-1]) + pre[i];
   
    while (q--)
    {
       int l,r; cin>>l>>r;
       cout << pre[r] - pre[l] << "\n";
    }
}


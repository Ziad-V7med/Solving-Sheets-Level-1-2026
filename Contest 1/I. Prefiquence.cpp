#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh()
{
    int n,m;    cin>>n>>m;
    string s,t; cin>>s>>t;

    int ans = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if(s[i] == t[j]) i++,j++;
        else j++;
    }
    cout<<i<<'\n';
}

signed main()
{
    speed 
    int t; cin>>t;
    while(t--) nageh();
}



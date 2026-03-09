#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh() {
    vector<int>v(4);
    for (int i = 0; i < 4; i++) cin>>v[i];
    sort(v.begin(),v.end());

    if(v[3] == v[0] + v[1] + v[2] || v[0] + v[3] == v[2] + v[1]) cout<<"YES\n";
    else cout<<"NO\n";
}

signed main()
{
    speed 
    nageh();
}



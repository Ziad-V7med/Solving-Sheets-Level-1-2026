#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh(){

    int n,x; cin>>n>>x; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    int k; cin>>k; 
    vector<int>likes(n);

    for(int i = 0 ,x;i<k;i++)
    {
        cin>>x;
        likes[--x] = 1;
    }

    int ans = 0;
    for(int i =0;i<n;i++) if(likes[i] == 0) ans += v[i];
    
    cout<<ans+1;
}

signed main()
{
    speed 
    nageh();
}



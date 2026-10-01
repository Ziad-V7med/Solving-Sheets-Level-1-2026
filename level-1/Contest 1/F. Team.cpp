#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh()
{
    int n,k; cin>>n>>k; vector<int>v(n);

    for (int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(),v.end());  
    
    int l = 0,r = n-1,ans = 0; 
    while (r >= l && v[r] >= k) ans++,r--;
    while (l<r)
    {
        if(v[l] + v[r] >= k) {
            ans++; l++; r--;
        }
        else l++;
    }
    cout<<ans<<'\n';    
}

signed main()
{
    speed 
    int t; cin>>t;
    while(t--) nageh();
}



#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<int>v(n);
    map<int,int>freq;

    for(int i = 0; i < n; i++) cin>>v[i];
    
    int l = 0,r = 0,ans = 0;

    while (r < n)
    {
        freq[v[r]]++; 
        
        while (l < n && freq[v[r]] > 1)
        {
           freq[v[l]]--; l++;
        }

        ans = max (ans,r - l + 1);    

        r++;
    }
    cout << ans;
   
}

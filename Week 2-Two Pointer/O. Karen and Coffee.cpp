#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,q; cin>>n>>k>>q; vector<int>par(200002);

    for(int i = 0; i < n; i++) {
        int l,r; cin>>l>>r;
        par[l]++;
        par[r+1]--;
    }

    for (int i = 1; i < 200002; i++) par[i] += par[i-1];

    vector<int>ans(200002);
    for (int i = 1; i < 200002; i++) {
        if (par[i] >= k) ans[i] = ans[i-1] + 1;
        else ans[i] = ans[i-1];
    }
    
    while (q--)
    {
        int l,r; cin>>l>>r;
        cout << ans[r] - ans[l-1] << "\n";
    }
    
   
}



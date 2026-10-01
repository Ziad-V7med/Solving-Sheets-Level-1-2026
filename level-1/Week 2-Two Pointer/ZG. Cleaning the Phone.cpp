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
        int n,k; cin>>n>>k; 
        vector<int>apps(n),app1,app2;

        for (int i = 0; i < n; i++) cin>>apps[i];
        for (int i = 0; i < n; i++)
        {
            int type; cin>>type;
            if (type == 1) app1.push_back(apps[i]); 
            else           app2.push_back(apps[i]);    
        }
        
        sort (app1.rbegin(),app1.rend());
        sort (app2.rbegin(),app2.rend());

        for (int i = 1; i < app1.size(); i++) app1[i] += app1[i-1];
        for (int i = 1; i < app2.size(); i++) app2[i] += app2[i-1];

        int ans = INT64_MAX;

        auto it2 = lower_bound(app2.begin(),app2.end(),k);
        if (it2 != app2.end()) ans = min(ans,(it2 - app2.begin() + 1) * 2LL);
        
        for (int i = 0; i < app1.size(); i++)
        {
           int rest = k - app1[i];
           if (rest <= 0) ans = min(ans,i+1);
           else {
               it2 = lower_bound(app2.begin(),app2.end(),rest);

               if (it2 != app2.end()) {
                  int j = it2 - app2.begin() + 1;
                  ans = min(ans,j*2 + i+1);
               }
           }
        }

        if (ans == INT64_MAX) cout << -1 << "\n";
        else cout << ans << "\n";
    }
   
}

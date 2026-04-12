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
        int n,q; cin>>n>>q; vector<int>v(n),pre_max(n+1),pre_sum(n+1);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pre_sum[i+1] = pre_sum[i] + v[i];
            pre_max[i+1] = max(pre_max[i],v[i]);
        }

        while (q--)
        {
            int hight; cin>>hight;
            int max_hight = upper_bound(pre_max.begin(),pre_max.end(),hight) - pre_max.begin();

            cout << pre_sum[max_hight - 1] << " ";
        }
        
        cout << "\n";
        
    }
    
}

 
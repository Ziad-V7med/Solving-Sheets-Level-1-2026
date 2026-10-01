#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q; vector<pair<int,int>>v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    while (q--)
    {
        string op; pair<int,int>x; cin>>op>>x.first>>x.second;

        if (op == "lower") {
            auto it = lower_bound(v.begin(),v.end(),x);
            
            if (it == v.begin()) cout << "-1\n";
            else cout << --it - v.begin() << "\n";
        }
        else if (op == "upper") {
            auto it = upper_bound(v.begin(),v.end(),x);
            
            if (it == v.end()) cout << "-1\n";
            else cout << it - v.begin() << "\n";
        }
        else {
            bool check = binary_search(v.begin(),v.end(),x);

            if (check) cout << "found\n";
            else cout << "not found\n";
        }
    }
    
    
    
}

 
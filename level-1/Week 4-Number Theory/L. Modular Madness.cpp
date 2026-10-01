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
        int n,q; cin>>n>>q; vector<int>v;

        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            if (v.empty() || val < v.back()) v.push_back(val);
        }
        
        while (q--)
        {
            int num; cin >> num;

            for (int i = 0; i < v.size(); i++) {
                if (v[i] <= num) num %= v[i];

                if (num < v.back()) break;
            }

            cout << num << "\n";
            
        }
        
    }
    
}


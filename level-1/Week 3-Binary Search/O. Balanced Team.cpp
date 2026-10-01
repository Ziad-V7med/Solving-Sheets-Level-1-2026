#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(),v.end());

    int l = 0,r = 0,team = 0;
    while (r < n)
    {
       while (v[r] - v[l] > 5) {
            l++;
       }

       team = max(team,r - l + 1);
       r++;
    }
    
    cout << team << "\n";
    
}

 
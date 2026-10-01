#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,m,k; cin>>n>>m>>k; 
    vector<int>people(n),flat(m);

    for (int i = 0; i < n; i++) cin>>people[i];
    for (int i = 0; i < m; i++) cin>>flat[i];
    
    sort (people.begin(),people.end());
    sort (flat.begin(),flat.end());

    int l = 0,r = 0,ans = 0;

    while (r < n && l < m )
    {
        if (abs(people[r] - flat[l]) <= k) {
             ans++; l++; r++;
        }
        else if (people[r] > flat[l] + k) l++;
        else r++;
    }
    
    cout << ans;
   
}

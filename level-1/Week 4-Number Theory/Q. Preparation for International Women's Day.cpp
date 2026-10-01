#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k; cin>>n>>k; vector<int>v(n),freq(k);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i] % k]++;
    }

    int ans = freq[0] / 2;
    
    if (k % 2 == 0) ans += freq[k / 2] / 2;

    for (int i = 1; i < (k + 1) / 2; i++) ans += min(freq[i] , freq[k - i]);
    
    cout << ans * 2;
    
}



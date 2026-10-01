#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n;
    vector<int>a(n),b(n),c(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }

    sort(c.begin(),c.end());

    int l = 0,r = n-1,ans = 0;
    while (l < r)
    {
        if (c[l] + c[r] > 0) {
            ans += r - l; r--;
        }
        else l++;
    }
    
    cout << ans << "\n";
    
}

 
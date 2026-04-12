#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(),a.end());
    
    for (int i = 0; i < m; i++)
    {
        int l = 0,r = n-1,ans = n;
        
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] > b[i]) {
                ans = mid ;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << " ";

    }
}

 
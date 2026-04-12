#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (int n,int mid) {
    
    return mid * 4 + ((mid * 4) % 4) * 2 >= n;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;

        int l = 1,r = 1000,ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (can(n,mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        
        cout << ans << "\n";
        
    }
    
    
}

 
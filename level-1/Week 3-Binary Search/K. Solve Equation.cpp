#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int c,time; cin>>c>>time;
    double l = 1,r = 2e9,ans = 0;

    for (int i = 0; i < 100; i++)
    {
        double mid = l + (r - l) / 2;

        if (c * mid * log2(mid) <= time) {
            ans = mid;
            l = mid;
        }
        else {
            r = mid;
        }
    }
    
    cout << fixed << setprecision(6) << ans << "\n";
    
}

 
#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (int block,int mid) {
    return mid * (mid + 1) / 2 >= block;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int block; cin>>block;

        int l = 1,r = 2e9,ans;
        while (l <= r)
        {
           int mid = l + (r - l) / 2;

           if (can(block,mid)) {
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

 
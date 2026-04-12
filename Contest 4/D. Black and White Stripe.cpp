#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (string s,int k,int mid) {
    int need = 0,cnt = 0;
    for (int i = 0; i < k; i++) if (s[i] == 'W') cnt++;
    need = cnt;

    for (int i = k; i < s.size(); i++)
    {
        if (s[i-k] == 'W') cnt--;
        if (s[i] == 'W') cnt++;
        need = min(need,cnt); 
    }
    
    return need <= mid;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;

        int l = 0,r = n,ans = 0;
        while (l <= r)
        {
           int mid = (l + r) / 2;

           if (can(s,k,mid)) {
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

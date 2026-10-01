#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (int n,int k,int mid) {
    int sum = 0;

    for (int i = 0; sum < n; i++)
    {
        if (pow(k,i) > mid) return false;
        sum += (mid / pow(k,i));
    }
    
    return true;
}

signed main()
{
    matador 
    int n,k; cin>>n>>k;

    int l = 1,r = 1e9,ans;
    while (l <= r)
    {
       int mid = l + (r - l) / 2;

       if (can(n,k,mid)) {
            ans = mid;
            r = mid - 1;
       }
       else {
            l = mid + 1;
       }
    }
    
    cout << ans;

}

 
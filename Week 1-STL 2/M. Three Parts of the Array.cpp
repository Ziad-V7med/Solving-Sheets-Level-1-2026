#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,sum1{},sum3{},ans{}; cin>>n; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    int l = 0,r = n-1;
    while (l <= r)
    {
        if (sum1 < sum3) sum1 += v[l++];
        else if (sum1 > sum3) sum3 += v[r--];
        if (sum1 == sum3) {
            ans = sum1; sum1 += v[l++];
        }
    }
    cout<<ans<<"\n";
}
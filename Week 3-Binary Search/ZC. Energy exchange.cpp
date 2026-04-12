#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>&v,int k,double mid) {
    double loss = 0,gain = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > mid) loss += v[i] - mid;
        else gain += mid - v[i];
    }

    return loss*(1 - k / 100.0) >= gain;

}

signed main()
{
    matador 
    int n,k; cin>>n>>k; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];

    double l = 0,r = 1000,ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        double mid = l + (r - l) / 2;
        
        if (can(v,k,mid)) {
            ans = mid;
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << fixed << setprecision(9) << ans << "\n";

}

 
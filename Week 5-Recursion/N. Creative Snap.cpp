#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n,k,a,b; vector<int>v;

int solve (int l , int r) {

    int na = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
    int cost = na == 0 ? a : na * b * (r - l + 1);

    if (l == r || na == 0) return cost;

    int mid = (l + r) / 2;
    int cost_divide = solve(l, mid) + solve(mid + 1, r);

    return min (cost, cost_divide);
}

signed main() {
    matador
    cin >> n >> k >> a >> b;
    for (int i = 0; i < k; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    sort(v.begin() , v.end());

    
    cout << solve(1 , 1LL << n);    
    
}
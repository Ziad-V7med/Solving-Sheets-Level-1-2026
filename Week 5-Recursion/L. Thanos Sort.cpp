#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; vector<int>v;

int solve (int l , int r) {

    if (l == r) return 1;

    bool is_sort = true;
    for (int i = l; i < r; i++) if (v[i] > v[i + 1]) is_sort = false;
          
    if (is_sort) return r - l + 1;

    int mid = (l + r) / 2;
    return max (solve(l , mid) , solve(mid + 1 , r)); 
}

signed main() {
    matador
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    cout << solve(0 , n - 1);    
    
}
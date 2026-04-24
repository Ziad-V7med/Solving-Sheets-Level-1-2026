#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void solve() {
    int n; cin>>n; vector<int>a(n);
    int min_val = INT64_MAX; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_val) min_val = a[i];  
    }

    int count_min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) count_min++; 
    }

    if (count_min == 1) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % min_val != 0) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

signed main() {
    matador

    int t; cin>>t;
    while (t--) solve();

}
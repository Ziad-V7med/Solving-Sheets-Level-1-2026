#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void solve() {
    int n; char c; cin>>n>>c;
    string s; cin>>s;

    bool all_ok = true;
    for (char ch : s) {
        if (ch != c) {
            all_ok = false;
            break;
        }
    }

    if (all_ok) {
        cout << 0 << endl;
        return;
    }

    for (int x = 1; x <= n; ++x) {
        bool possible = true;
        for (int m = x; m <= n; m += x) {
            if (s[m - 1] != c) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n - 1 << " " << n << endl;
}

signed main() {
    matador

    int t; cin>>t;
    while (t--) solve();

}
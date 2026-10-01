#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void solve() {
    int n,sum = 0; cin>>n; vector<int>a(n);
    bool has_mod_1 = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 3 == 1) 
            has_mod_1 = true;  
    }

    int remainder = sum % 3;

    if (remainder == 0) 
        cout << 0 << endl;

    else if (remainder == 2) 
        cout << 1 << endl;

    else {
    
        if (has_mod_1) 
            cout << 1 << endl;
        else 
            cout << 2 << endl;   
    }
}

signed main() {
    matador

    int t; cin>>t;
    while (t--) solve();

}
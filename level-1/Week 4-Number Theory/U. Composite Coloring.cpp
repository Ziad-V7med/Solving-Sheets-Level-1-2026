#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve() {
    int n; cin>>n; vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> res(n);
    map<int, int> used_primes; 
    int color_count = 0;

    for (int i = 0; i < n; i++) {
        for (int p : primes) {
            if (a[i] % p == 0) {

                if (used_primes.find(p) == used_primes.end()) 
                    used_primes[p] = ++color_count;
                
                res[i] = used_primes[p];
                break; 
            }
        }
    }

    cout << color_count << endl;
    
    for (int i = 0; i < n; i++) 
        cout << res[i] << " ";
    
    cout << endl;
}

signed main() {
    matador

    int t; cin>>t;
    while (t--) solve();
}
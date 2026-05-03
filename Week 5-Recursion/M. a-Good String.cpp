#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; string s;

int solve (int l , int r , char letter) {

    if (l == r) return s[l] != letter;

    int cntf = 0,cntl = 0,mid = (l + r) / 2;

    for (int i = l; i <= mid; i++) if (s[i] != letter) cntf++;
    for (int i = mid + 1; i <= r; i++) if (s[i] != letter) cntl++;

    return min (solve(l , mid , letter + 1) + cntl , solve(mid + 1, r , letter + 1) + cntf);
}

signed main() {
    matador

    int t; cin >> t;
    while (t--) {
        cin >> n >> s;
        cout << solve(0 , n - 1 , 'a') << "\n";        
    }
    
    
}
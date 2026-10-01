#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; vector<int>v;

void binary (int n) {

    if (!n) return;
    
    binary(n / 2);

    cout << n % 2;
    
}

signed main()
{
    matador 
    int t; cin >> t;
    while (t--) {
        cin >> n; binary(n);
        cout << '\n';
    }
    
}

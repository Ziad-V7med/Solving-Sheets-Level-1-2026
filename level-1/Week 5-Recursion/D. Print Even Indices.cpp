#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; vector<int>v;

void rec (int i = 0) {

    if (i >= n) return;

    rec(i + 2);
    
    cout << v[i] << " ";
}

signed main()
{
    matador 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    rec();

    
}

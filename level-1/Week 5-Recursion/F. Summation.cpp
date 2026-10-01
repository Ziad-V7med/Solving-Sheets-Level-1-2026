#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n,sum = 0; vector<int>v;

int summation (int i = 0) {

    int sum = 0;

    if (i == n) return 0;

    return v[i] + summation(i + 1);
    
}

signed main()
{
    matador 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    cout << summation();
   
}

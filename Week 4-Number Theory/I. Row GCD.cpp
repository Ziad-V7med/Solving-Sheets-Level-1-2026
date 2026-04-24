#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int G = 0;

    for (int i = 1; i < n; i++) G = __gcd(G,abs(a[0] - a[i]));

    for (int i = 0; i < m; i++) cout << __gcd(a[0] + b[i],G) << " ";
    
}


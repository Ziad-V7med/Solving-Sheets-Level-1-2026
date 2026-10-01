#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int a,b,n,m; cin>>a>>b>>n>>m;
        
        if ((a + b < n + m) || m > min(a,b)) cout << "NO\n";
        else cout << "YES\n";
    }
    
}

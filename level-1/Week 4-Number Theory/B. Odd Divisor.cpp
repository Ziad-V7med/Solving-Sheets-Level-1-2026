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
        int n; cin>>n;

        while (n % 2 == 0) n /= 2;
        
        cout << (n > 1 ? "YES\n" : "NO\n");
    }
    
}

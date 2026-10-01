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
        int a,b; cin>>a>>b;

        cout << ( (a + (b - 1)) / b ) * b - a << "\n";
    }
    
}



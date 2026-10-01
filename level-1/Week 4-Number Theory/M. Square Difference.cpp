#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool Is_Prime (int num) {

    if (num == 1) return false;

    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false;

    return true;  
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;

        if (a - b != 1) cout << "NO\n";
        else cout << (Is_Prime(a + b) ? "YES\n" : "NO\n");
    }
    
}


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
       string s,t; cin>>s>>t;

       int n1 = s.size();
       int n2 = t.size();
       int len = n1 / __gcd(n1,n2) * n2;

       string ss = "",tt = "";

       for (int i = 0; i < len / n1; i++) ss += s;
       for (int i = 0; i < len / n2; i++) tt += t;

       cout << (ss == tt ? ss : "-1") << "\n";
       
    }
    
}


#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n;
    string s; cin>>s;
    set<char>st;

    for(int i = 0; i < n; i++) st.insert(tolower(s[i]));
    
    cout << (st.size() == 26 ? "YES" : "NO");
}
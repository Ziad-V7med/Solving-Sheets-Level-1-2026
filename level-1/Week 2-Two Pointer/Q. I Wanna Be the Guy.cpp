#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int level,n,m; cin>>level>>n;
    set<int>st;

    for(int i = 0; i < n; i++) {
        int val; cin>>val; st.insert(val);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        int val; cin>>val; st.insert(val);
    }
    
    cout << (st.size() == level ? "I become the guy." : "Oh, my keyboard!");
   
}
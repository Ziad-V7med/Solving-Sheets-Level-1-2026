#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; set<int>st;

    for(int i = 0; i < n; i++) {
        int val; cin>>val; st.insert(val);
    }
    
    cout << st.size();
   
}

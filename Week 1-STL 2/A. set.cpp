#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; set<int>st;
    for (int i = 0; i < n; i++)
    {
        string op; int val; cin>>op>>val;
        if (op == "lower_bound") {
            auto it = st.lower_bound(val);
            cout << (it != st.end() ? *it : -1) << "\n";
        }
        else if (op == "upper_bound") {
            auto it = st.upper_bound(val);
            cout << (it != st.end() ? *it : -1) << "\n";
        }
        else if (op == "find") cout << (st.find(val) != st.end() ? "found\n" : "not found\n");
        else st.insert(val);
    }
    
}

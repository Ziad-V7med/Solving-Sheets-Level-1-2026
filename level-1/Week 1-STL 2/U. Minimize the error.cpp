#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k1,k2; cin>>n>>k1>>k2; 
    vector<int>a(n),b(n); multiset<int>st;

    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];

    for (int i = 0; i < n; i++) st.insert(abs(a[i] - b[i]));

    int operations = k1 + k2;

    for (int i = 0; i < operations; i++)
    {
        int greater_dif = abs(*st.rbegin() - 1);
        st.erase(--st.end());
        st.insert(greater_dif);
    }

    int sum = 0;
    for (auto it : st) sum += pow(it,2);   
    cout<<sum;
}



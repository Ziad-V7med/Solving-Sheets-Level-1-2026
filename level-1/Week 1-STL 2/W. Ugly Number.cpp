#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main() {
    matador
    int k; cin>>k;
    set<int> st = {1};

    int current_ugly = 1;

    for (int i = 0; i < k; i++) {
        current_ugly = *st.begin(); 
        
        st.erase(st.begin());

        st.insert(current_ugly * 2);
        st.insert(current_ugly * 3);
        st.insert(current_ugly * 5);
    }

    cout<<current_ugly;
}
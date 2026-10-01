#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main() {
    matador
    int n; cin>>n;
    vector<pair<int,int>>segments(n);
    multiset<int> L, R;

    for (int i = 0; i < n; i++) {
        
        cin >> segments[i].first >> segments[i].second;
        L.insert(segments[i].first);
        R.insert(segments[i].second);
    }

    int max_len = 0;

    for (int i = 0; i < n; i++) {

        L.erase(L.find(segments[i].first));
        R.erase(R.find(segments[i].second));

        int current_L = *L.rbegin();
        int current_R = *R.begin();  

        max_len = max(max_len,current_R - current_L);

        L.insert(segments[i].first);
        R.insert(segments[i].second);
    }

    cout<<max_len<<endl;
}
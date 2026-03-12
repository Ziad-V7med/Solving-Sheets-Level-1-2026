#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,m; cin>>n>>m;
    vector<int> car(m);
    multiset<int>item;

    for (int i = 0; i < n; i++) {
        int x; cin>>x; item.insert(x);
    }
    
    for (int i = 0; i < m; i++) cin >> car[i];
    sort(car.begin(),car.end(),greater<>());

    int trip = 0;

    while (!item.empty()) {
      for (int i = 0; i < m; i++) {
         auto it = item.upper_bound(car[i]);
         if (it != item.begin()) item.erase(--it);
         if (it == item.begin()) break;
      }
      trip++;
    }

    cout<<trip*2 - 1;
}



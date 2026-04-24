#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
      while (t--) {
          int n,x; cin>>n>>x; vector<int>v(n);
          for(int i = 0; i < n; i++) cin >> v[i];

          int ans = 0; set<int>st; 

          for(int i = 0; i < n; i++) {

              if(x % v[i] != 0) continue;

              queue<int>q;
              for(auto y:st) q.push(y);

              while (!q.empty()) {

                 int j = q.front(); q.pop();

                  if(v[i] * j == x) {
                      ans++; st.clear(); break;
                  }

                  if(x % (v[i] * j) == 0 ) st.insert(v[i] * j);
              }

              st.insert(v[i]);
 
          }

          cout<<ans + 1<< "\n";  
      }
   
}

 
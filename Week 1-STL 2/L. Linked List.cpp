#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool compare(string a,string b){
    return a.size() < b.size();
}

signed main()
{
    matador 
    int n,q; cin>>n>>q; vector<string>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    while (q--)
    {
       int op; cin>>op;
       if (op == 1){
          string x; cin>>x;
          auto it = find(v.begin(),v.end(),x);
          if (it != v.end()) v.erase(it);
          else cout<<"Not found\n";
       }
       else if (op == 2) {
         if(!v.empty()) {
             for (int i = 0; i < v.size(); i++) cout<<v[i]<<" "; cout<<"\n";
         }
         else cout<<"0\n";
        }
        else {
         if(!v.empty()){
            for (int i = v.size()-1; i >= 0; i--) cout<<v[i]<<" "; cout<<"\n";
         }
         else cout<<"0\n";
       }
    }
}

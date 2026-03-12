#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; map<string,string>mo,mn;
    for (int i = 0; i < n; i++)
    {
       string Old,New; cin>>Old>>New;

       if(mn.find(Old) == mn.end()) {
          mo[Old] = New;
          mn[New] = Old;
       }
       else {
          string Original = mn[Old];
          mo.erase(Old);
          mo[Original] = New;
          mn[New] = Original;
       }
    }
   cout<<mo.size()<<"\n";
   for(auto it : mo) cout<<it.first<<" "<<it.second<<"\n";
}



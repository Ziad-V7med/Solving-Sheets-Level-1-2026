#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

vector<string> Codes (int n) {
   vector<string>ans; map<string,int>mp;
   int id = 1;

   for (int i = 0; i < n; i++)
   {
      string s; getline(cin,s);
      if (s.substr(0,6) == "define") {
         string var = s.substr(7);
         mp[var] = id++;

         string res = "define " + to_string(mp[var]);
         ans.push_back(res);
      }

      else if (s.substr(0,4) == "read") {
          string var = s.substr(5);

          string res = "read " + to_string(mp[var]);
          ans.push_back(res);
      }

      else if (s.substr(0,5) == "print") {
          string var = s.substr(6);

          string res = "print " + to_string(mp[var]);
          ans.push_back(res);
      }

      else {
            int index_equal = s.find('=');
            int index_plus  = s.find('+');
            string var1 = s.substr(0,index_equal);
            string var2 = s.substr(index_equal + 1,index_plus - index_equal - 1);
            string var3 = s.substr(index_plus + 1);
            
            string res = to_string(mp[var1]) + " " + to_string(mp[var2]) + " " + to_string(mp[var3]);
            ans.push_back(res);
      }
   }
   
   return ans;
}

signed main() {
    matador
    int n; cin>>n; cin.ignore();
    vector<string>v1 = Codes(n);

    int m; cin>>m; cin.ignore();
    vector<string>v2 = Codes(m);

    cout << (v1 == v2 ? "YES" : "NO");
}
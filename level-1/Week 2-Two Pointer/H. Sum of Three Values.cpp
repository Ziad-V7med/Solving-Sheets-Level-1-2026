#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,target; cin>>n>>target; vector<pair<int,int>>v(n);

    for (int i = 0; i < n; i++) {
        cin>>v[i].first; v[i].second = i+1; 
    }
    
    sort(v.begin(),v.end());

    for (int i = 0; i < n-2; i++)
    {
       int l = i + 1,r = n - 1;
       int num = target - v[i].first;

       while (l < r)
       {
          if (v[l].first + v[r].first == num) {
             cout << v[i].second << " " << v[l].second << " " << v[r].second; 
             return 0;
          }
          else if ((v[l].first + v[r].first > num)) r--;
          else l++;
       }
    }
    cout << -1;
    
}

#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

vector<int>visit(2e5 + 1);

bool can (vector<int>&v,int k,int mid) {

    for (int i = 0; i < mid; i++) visit[i] = -1;
    int unique = 0,cnt = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < mid && visit[v[i]] < cnt) {
             unique++;
             visit[v[i]] = cnt;
        }

        if (unique == mid) {
                cnt++; 
                unique = 0;
        }
    }
    
    return cnt >= k;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
       int n,k; cin>>n>>k; vector<int>v(n);
       for (int i = 0; i < n; i++) cin >> v[i];

       int l = 0,r = 2e5 + 1,ans = 0;
       while (l <= r)
       {
          int mid = l + (r - l) / 2;

          if (can(v,k,mid)) {
                ans = mid;
                l = mid + 1;
          }
          else {
                r = mid - 1;
          }
       }
       
       cout << ans << "\n";
       
    }
    
}


#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>a,vector<int>b,int magic,int mid) {

    for (int i = 0; i < a.size(); i++)
    {
       if (mid * a[i] > b[i]) {
          if (magic >= mid * a[i] - b[i]) {
                magic -= mid * a[i] - b[i];
          }
          else {
                return false;
          }
       }
    }
    return true;
}

signed main()
{
    matador 
    int n,magic; cin>>n>>magic; vector<int>a(n),b(n);
    for (int i = 0; i < n; i++) cin>> a[i];
    for (int i = 0; i < n; i++) cin>> b[i];

    int l = 0,r = 2e9,cookie;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(a,b,magic,mid)) {
            cookie = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << cookie << "\n";
      
}

 
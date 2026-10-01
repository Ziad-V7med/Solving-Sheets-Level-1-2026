#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>v,string t,string p,int mid) {

    vector<bool>remove(t.size());
    for (int i = 0; i < mid; i++) remove[v[i] - 1] = true;

    int i = 0,j = 0;
    while (i < t.size() && j < p.size())
    {
        if (!remove[i] && t[i] == p[j])  j++;
        i++;
    }
    
   return j == p.size();
}

signed main()
{
    matador 
    string t,p; cin>>t>>p; 
    int n = t.size();
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0,r = n,ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(v,t,p,mid)) {
            ans = mid;
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
     
    cout << ans << "\n";
    
}

 
#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k,sum = 0,mn = INT64_MAX,mn_idx = 1; cin>>n>>k;
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin>>v[i]; 

    for (int i = 0; i < k; i++) sum += v[i];
    mn = sum;

    for (int i = k; i < n; i++)
    {
        sum = sum - v[i - k] + v[i];

        if (mn > sum) {
          mn = sum;
          mn_idx = i - k + 2;
        }

    }
    
    cout << mn_idx; 
}


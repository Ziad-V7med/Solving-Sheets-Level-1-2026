#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
    
        for(int i = 0; i < n; i++) cin>>v[i]; 
        
        int l = 0,r = n-1,sum1{},sum2{},ans{};

        while (l <= r)
        {
            if (sum1 < sum2 ) sum1 += v[l++];
            else if (sum1 > sum2) sum2 += v[r--];
            
            if (sum1 == sum2) {
                ans = l + (n - 1 - r); sum1 += v[l++];
            }
        }
        
        cout<<ans << endl;   
    }
}


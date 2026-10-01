#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

vector<int>temp;

bool can (vector<int>&freq,int k,int mid) {
    
    for (int i = 1; i <= 2e5 ; i++)
    {
        if (freq[i] >= mid) {

            for (int j = 0; j < freq[i] / mid; j++)
            {
                temp.push_back(i);
            }
            
        }
    }
    
    return temp.size() >= k;
   
}

signed main()
{
    matador 
        int n,k; cin>>n>>k; vector<int>v(n),freq(2e5+1);
        for (int i = 0; i < n; i++) {
            cin>>v[i]; 
            freq[v[i]]++;
        }
        
        int l = 1,r = n; vector<int>ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (can(freq,k,mid)) {
                ans = temp;
                temp.clear();
                l = mid + 1;
            }
            else {
                temp.clear();
                r = mid - 1;
            }
        }
        
        for(int i = 0; i < k; i++) cout << ans[i] << " ";
    
}

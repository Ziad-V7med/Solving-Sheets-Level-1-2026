#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int Num_OR (vector<int>bit) {

    int OR = 0;
    for (int i = 0; i < 20; i++) {
       if (bit[i] > 0) OR |= (1<<i); 
    }
    
    return OR;
}

bool can (vector<int>&v,int mid) {

    vector<int>bit(20);

    for (int i = 0; i <mid; i++) for (int b = 0; b < 20; b++) if ((v[i]>>b) & 1) bit[b]++;
    
    int target = Num_OR (bit);

    for (int i = mid; i < v.size(); i++) {
        for (int b = 0; b < 20; b++) if ((v[i]>>b) & 1) bit[b]++;
        for (int b = 0; b < 20; b++) if ((v[i-mid]>>b) & 1) bit[b]--;
        
        if (target != Num_OR (bit)) return false;
    }
    
    return true;
}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; vector<int>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int l = 1,r = n,ans;
        while (l <= r) {
            
            int mid = l + (r - l) / 2;

            if (can(v,mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << "\n";
                
    } 
}

 
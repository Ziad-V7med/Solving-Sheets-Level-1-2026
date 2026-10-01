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
        map<int,int>freq;
    
        for(int i = 0; i < n; i++) {
            int num; cin>>num;
            num -= i;
            freq[num]++;
        }
    
        int cnt = 0;
        
        for (auto &it : freq) {
            cnt += (it.second * (it.second-1) / 2);
        }

        cout << cnt << endl;
    }
}
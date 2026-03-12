#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,ans = 0; cin>>n; vector<int>v(n),powerOf2;
    map<int,int>mp;

    for (int i = 0; i < 32; i++) powerOf2.push_back(pow(2,i));
    
    for (int i = 0; i < n; i++) {
        cin>>v[i]; mp[v[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        mp[v[i]]--;
        for (int power = 0; power < 31; power++)
        {
            int num = powerOf2[power] - v[i];
            if(mp.find(num) != mp.end() && mp[num] > 0){
              found = true; break;
            }  
        }
        if (!found) ans++;
        mp[v[i]]++;
    }
    cout<<ans;
    
}

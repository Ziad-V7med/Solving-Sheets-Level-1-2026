#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,target; cin>>n>>target;
    map<int,int>mp;

    int sum = 0,cnt = 0;
    mp[0] = 1;
   
    for(int i = 0; i < n; i++) {
       int val; cin>>val;
       sum += val;

       if (mp.count(sum - target)) cnt += mp[sum-target];
       mp[sum]++;
    }
    
    cout<<cnt;
}

 
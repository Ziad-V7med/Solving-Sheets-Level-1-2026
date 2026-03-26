#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; vector<int>v(n);

    for(int i = 0; i < n; i++) cin>>v[i]; 
    sort(v.begin(),v.end());

    int middle = v[n/2],sum = 0;

    for (auto & element : v) sum += (abs(element - middle));
    
    cout << sum;
   
}



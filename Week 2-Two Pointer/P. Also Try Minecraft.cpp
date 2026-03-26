#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,k; cin>>n>>k;
    vector<int>v(n+1);

    for(int i = 1; i <= n; i++) cin>>v[i]; 
    
    vector<int>forward(n+1),backward(n+1);

    for (int i = 1; i <= n; i++)
    {
        if (v[i] > v[i+1]) forward[i+1] = (v[i] - v[i+1]) + forward[i];
        else forward[i+1] = forward[i];
    }
    
    for (int i = n; i >= 1; i--)
    {
       if (v[i] > v[i-1]) backward[i-1] = (v[i] - v[i-1]) + backward[i];
       else backward[i-1] = backward[i];
    }
    
    while (k--)
    {
        int l,r; cin>>l>>r;
        if (l < r) cout << forward[r] - forward[l] << "\n";
        else cout << backward[r] - backward[l] << "\n";
    }
   
}


#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n;
    vector<int>v1(n+1),v2(n+1);

    for(int i = 1; i <= n; i++) cin>>v1[i]; 

    v2 = v1;
    sort(v2.begin(),v2.end());

    for (int i = 1; i <= n; i++)
    {
        v1[i] += v1[i-1];
        v2[i] += v2[i-1];
    }
   
    int q; cin>>q;
    while (q--)
    {
        int op,l,r; cin>>op>>l>>r;
        if (op == 1) cout << v1[r] - v1[l-1] << "\n";
        else cout << v2[r] - v2[l-1] << "\n";
    }
}


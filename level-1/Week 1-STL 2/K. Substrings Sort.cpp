#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool compare(string a,string b){
    return a.size() < b.size();
}

signed main()
{
    matador 
    int n; cin>>n; vector<string>v(n);
    bool check = true;
    for (int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(),v.end(),compare);
    for (int i = 1; i < n ; i++)
    {
        if (v[i].find(v[i-1]) == string::npos) {
            check = false; break;
        }
    }
    if (check) {
        cout<<"YES\n";
        for(auto it : v) cout<<it<<"\n";
    }
    else cout<<"NO\n";
}

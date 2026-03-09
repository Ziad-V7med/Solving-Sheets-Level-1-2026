#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh(){
    int a,b,c,x,y,z; cin>>a>>b>>c>>x>>y>>z;
    vector<int>v;

    v.push_back(a*x);
    v.push_back(b*y);
    v.push_back(c*z);
    
    sort(v.begin(),v.end());

    if(a*x == v[2]) cout<<"Barley ";
    if(b*y == v[2]) cout<<"Hops ";
    if(c*z == v[2]) cout<<"Malt ";
}

signed main()
{
    speed 
    nageh();
}



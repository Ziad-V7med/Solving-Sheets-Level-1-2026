#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

struct Grade{
  int Arabic, Maths, Science, English , total;
  string name;
};

bool compare(Grade g1,Grade g2){
    if(abs(g1.total - g2.total) > 10) return g1.total > g2.total;
    return g1.name < g2.name;
}

signed main()
{
    matador 
    int n; cin>>n; vector<Grade>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].name>>v[i].Arabic>>v[i].Maths>>v[i].Science>>v[i].English;
        v[i].total = v[i].Arabic + v[i].Maths + v[i].Science + v[i].English;
    }
    sort(v.begin(),v.end(),compare);
    for (int i = 0; i < n; i++)
    cout<<v[i].name<<" "<<v[i].total<<" "<<v[i].Arabic<<" "<<v[i].Maths<<" "<<v[i].Science<<" "<<v[i].English<<"\n";
}

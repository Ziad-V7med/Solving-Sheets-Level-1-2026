#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

vector<pair<int,char>> string_dif(string s){
    vector<pair<int,char>>v1 = {}; 
    char n = s[0]; 
    int a = 1;
    for (int i = 1; i <= s.size(); i++)
    {
        if (i == s.size()) v1.push_back(make_pair(a,s[i-1]));
        else if (s[i] != n)
        {
            v1.push_back(make_pair(a,n));
            n = s[i];
            a = 1;
        }
        else a++;
    }
    return v1;
}
void nageh(){
    string p,s; cin>>p>>s;

    auto v1 = string_dif(p);
    auto v2 = string_dif(s);

    if(v1.size() != v2.size()) {
        cout<<"NO\n"; return;
    }

    for(int i = 0; i < v1.size(); i++)
    {
        if(v1[i].second != v2[i].second) {
            cout<<"NO\n"; return;
        }
        int cnt_p = v1[i].first;
        int cnt_s = v2[i].first;

        if(cnt_s < cnt_p || cnt_s > cnt_p * 2) {
            cout<<"NO\n"; return;
        }
    }
    cout<<"YES\n";
}

signed main()
{
    speed 
    int t; cin>>t;
    while(t--) nageh();
}



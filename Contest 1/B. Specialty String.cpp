#include <bits/stdc++.h>
#define int long long
#define speed std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void nageh() {
    int n; cin>>n;
    string s; cin>>s;
    stack<char>st;
    for(int i = 0; i < n; i++)
    {
        if(!st.empty() && st.top() == s[i]) st.pop();
        else st.push(s[i]);
    }
    if(st.empty()) cout<<"YES\n";
    else  cout<<"NO\n";
}

signed main()
{
    speed 
    int t; cin>>t;
    while(t--) nageh();
}



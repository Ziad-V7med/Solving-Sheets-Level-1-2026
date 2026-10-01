#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n; cin>>n; deque<int>book(n);
    set<int>st;
    for (int i = 0; i < n; i++) cin>>book[i];
    int q; cin>>q;
    while (q--)
    {
        char op; cin>>op;
        if(op == 'L'){
            if(!book.empty()){
                st.insert(book.front());
                book.pop_front();
            }    
        }
        else if(op == 'R'){
             if(!book.empty()){
                 st.insert(book.back());
                 book.pop_back();
             }
        }
        else {
            if(!st.empty()) {
                cout<<*st.rbegin()<<"\n";
                st.erase(--st.end());
            }
            else cout<<"-1\n";
        }
    }
    
}

#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; vector<int>Lucky;

void generate (string s = "" , int cnt4 = 0 , int cnt7 = 0) {

    if (s.size() > 10) return;

    if (s.size() > 0 && cnt4 == cnt7) Lucky.push_back(stoll(s));

    generate(s + '4' , cnt4 + 1 , cnt7);
    generate(s + '7' , cnt4 , cnt7 + 1);

}


signed main()
{
    matador 
    cin >> n;
    generate();
    sort(Lucky.begin() , Lucky.end());
    
    cout << *lower_bound(Lucky.begin() , Lucky.end(), n);
    
}

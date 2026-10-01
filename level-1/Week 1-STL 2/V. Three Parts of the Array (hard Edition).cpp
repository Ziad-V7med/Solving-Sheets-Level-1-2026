#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main() {
    matador
    int n; cin>>n;
    vector<long long> d(n);
    for (int i = 0; i < n; ++i) cin>>d[i];
    
    map<long long, int> suffix_map;
    long long current_suffix_sum = 0;

    for (int j = n - 1; j >= 1; --j) {
        current_suffix_sum += d[j];
 
        if (suffix_map.find(current_suffix_sum) == suffix_map.end()) suffix_map[current_suffix_sum] = j;
        else suffix_map[current_suffix_sum] = j; 
    }

    long long max_sum1 = -2e18; 
    long long current_prefix_sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        current_prefix_sum += d[i];

        if (suffix_map.count(current_prefix_sum)) {
            int suffix_index = suffix_map[current_prefix_sum];
            
            if (i < suffix_index) {
                if (max_sum1 == -2e18 || current_prefix_sum > max_sum1) max_sum1 = current_prefix_sum;    
            }
        }
    }

    cout << max_sum1 << endl;
}
#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n, l, r, x;
int c[20];

int solve(int index, int current_sum, int min_diff, int max_diff, int count) {

    if (index == n) {

        if (count >= 2 && current_sum >= l && current_sum <= r && (max_diff - min_diff) >= x)
            return 1;
        
        return 0;
    }

    int leave = solve(index + 1, current_sum, min_diff, max_diff, count);

    int take = solve(index + 1, current_sum + c[index], min(min_diff, c[index]), max(max_diff, c[index]), count + 1);

    return leave + take;
}

signed main() {
    matador
    
    cin >> n >> l >> r >> x;

    for (int i = 0; i < n; i++) cin >> c[i];

    cout << solve(0, 0, INT64_MAX, INT64_MIN, 0);

}
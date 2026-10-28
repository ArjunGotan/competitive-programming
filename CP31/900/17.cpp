#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <array>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


void solve() {
    int n, maxfreq = 1, freq = 1, unique = 0, common, ops = 0;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(all(nums));

    for (int i = 0; i < n-1; i++) {
        if (nums[i] == nums[i+1]) {
                freq++;
        } else {
            freq = 1;
            unique = 1;
        }
        maxfreq = max(maxfreq, freq);
    }
    if (!unique) {
        cout << 0 << '\n';
        return;
    }


    common = maxfreq;
    while (common < n) {
        int take = min(common, n - common);
        ops += 1 + take;   // 1 clone + 'take' swaps
        common += take;
    }
    
    cout << ops << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
    
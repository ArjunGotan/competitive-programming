#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <array>
#include <unordered_map>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


void solve() {
    ll n, k, x;
    ll adj_count = 0;

    vector<ll> nums;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.pb(x);
    }
    sort(all(nums));

    int maxlen = 1, curr = 1;

    for (int i = 0; i < n - 1; i++) {
        if (abs(nums[i] - nums[i+1]) <= k) {
            curr++;
        } else {
            curr = 1;
        }
        maxlen = max(maxlen, curr);
    }

    cout << n - maxlen << '\n';

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
    
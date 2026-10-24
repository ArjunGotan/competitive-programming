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

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


void solve() {
    int n, q, a, l, r, k;
    cin >> n >> q;
    
    vector<ll> sums(n);
    cin >> a;
    sums[0] = a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        sums[i] = sums[i-1] + a;
    }
    
    for (int i = 0; i < q; i++) {
        cin >> l >> r >> k;
        
        ll left; 

        if (l > 1) {
            left = sums[l-2];
        } else {
            left = 0;
        }
        
        if ((sums[n-1] - sums[r-1] + left + (ll)k * (r - l + 1)) % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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
    
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
    int n, a, count = 0;
    vi zeros;
    zeros.pb(0); // set zeroth index as boundary
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) {
            zeros.pb(i+1);
        }
    }
    zeros.pb(n+1); // set last index as boundary
    
    for (int i = 0; i < zeros.size() - 1; i++) {
        if (zeros[i+1] - zeros[i] > 1) {
            count++;
        }
    }
    cout << min(count, 2) << '\n';

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
    
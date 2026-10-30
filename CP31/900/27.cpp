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
    ll n, x, e;
    ll minb = 0, maxb = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> e;
        minb += e;
        if (e % x != 0) {
            maxb += e/x + 1;
        } else {
            maxb += e/x;
        }
    }
    if (minb % x == 0) {
        cout << minb/x << ' ';
    } else {
        cout << minb/x + 1 << ' ';
    }
    cout << maxb << '\n';

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
    
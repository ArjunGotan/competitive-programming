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
    ll x, n;
    ll change;

    cin >> x >> n;
    if (n % 4 == 0) {
        change = 0;
    } else if (n % 4 == 1) {
        change = -n;
    } else if (n % 4 == 2) {
        change = 1;
    } else {
        change = n + 1;
    }
    if (x % 2 == 0) {
        cout << x + change << '\n';
    } else {
        cout << x - change << '\n';
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
    
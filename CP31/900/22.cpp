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
    int n, x;
    ll one = 0, zero = 0;
    int s = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s += x;
        if (x == 1) {
            one++;
        } else if (x == 0) {
            zero++;
        }
    }

    cout << one * (1ll<<zero) << '\n';
    
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
    
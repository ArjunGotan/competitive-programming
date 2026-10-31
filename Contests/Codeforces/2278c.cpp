#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <array>
#include <unordered_map>
#include <limits>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


void solve() {
    ll n, s = 0;
    cin >> n;
    vector<ll> arr(n);
    
    int middle = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
        if (i > 0 && i < n - 1 && arr[i] > 1) {
            middle = 1;
        }
    }
    
    if (n == 1) {
        cout << s << '\n';
        return;
    }

    if (s == n) {
        cout << -1 << '\n';
        return;
    }

    if (middle) {
        cout << s - 1 << '\n';     
    } else {
        cout << s - (n - 1) << '\n';
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
    
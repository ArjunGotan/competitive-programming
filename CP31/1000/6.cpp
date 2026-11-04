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
    ll n, k, q, a;
    cin >> n >> k >> q;
    vi lens;

    ll len = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a;
        if (a <= q) {
            len++;
        } else {
            if (len >= k) {
                lens.pb(len);   
            }
            len = 0;
        }   
    }

    if (len >= k) {
        lens.pb(len);
    }

    ll out = 0;
    for (ll i = 0; i < lens.size(); i++) {
        out += ((lens[i] - k + 1) * (lens[i] - k + 2))/2;
    }
    cout << out << '\n';
    
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

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
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "0 0\n";
    } else {
        cout << abs(a-b) << ' ';
        cout << min(a%(abs(a-b)), abs(a-b) - a%abs(a-b)) << '\n';
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
    
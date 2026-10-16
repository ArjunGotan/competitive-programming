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
    int n, x, a = 0, b = 0;
    // a is 1 count, b is -1
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        (x == 1) ? a++ : b++;
    }

    int ops = 0;

    while (a < b) {
        a++;
        b--;
        ops++;
    }

    ops += b%2;

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

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
    int x, y, xt, yt;
    int dx, dy;

    cin >> x >> y >> xt >> yt;
    dx = xt - x;
    dy = yt - y;

    if (yt < y) {
        cout << -1 << '\n';
        return;
    }

    if (dy < dx) {
        cout << -1;
    } else {
        cout << 2 * dy - dx;
    }
    cout << '\n';

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
    
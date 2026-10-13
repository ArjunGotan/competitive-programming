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
    int x, y;
    cin >> y >> x;
    int ring = max(x, y);
    int i;

    int dir = (ring % 2);
    if (dir) {
        cout << (ring * ring) - (y - 1) - (ring - x) << '\n';
    } else {
        cout << (ring * ring) - (x - 1) - (ring - y) << '\n';
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

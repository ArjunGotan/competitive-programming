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
    int a, b, c;
    cin >> a >> b >> c;

    int c1, c2, c3;
    c1 = (2 * b - c) / a > 0 && (2 * b - c) % a == 0;
    c2 = (2 * b - a) / c > 0 && (2 * b - a) % c == 0;
    c3 = (a + c) / (2*b) > 0 && (a + c) % (2*b) == 0;

    if (c1 || c2 || c3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
    
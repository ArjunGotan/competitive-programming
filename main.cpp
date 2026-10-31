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
    int n, temp;
    int x = 0, y = 0;
    cin >> n;
    temp = n;

    while (temp % 3 == 0) {
        x++;
        temp /= 3;
    }
    while (temp % 2 == 0) {
        y++;
        temp /= 2;
    }

    if (temp != 1 || x < y) {
        cout << -1 << '\n';
        return;
    }
    cout << 2 * x - y << '\n';
    

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
    
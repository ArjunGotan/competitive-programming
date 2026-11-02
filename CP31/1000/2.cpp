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
    int n, k, x;
    cin >> n >> k;
    if (k == 4) {
        int lowest = 2;
        int even = 0;
        int one = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 4 == 0) {
                lowest = 0;
            } else if (x % 4 == 3) {
                lowest = min(lowest, 1);
            }
            if (x % 2 == 0) {
                even++;    
            }
            if (even == 1 && n > 1) {
                lowest = min(lowest, 1);
            }
            if (even >= 2) {
                lowest = 0;
            }
            if (x % 4 == 1) {
                one++;
            }
            if (one == 2) {
                lowest = min(lowest, 2);    
            }
        }
        cout << lowest << '\n';
    } else {
        int lowest = 6;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % k == 0) {
                lowest = 0;
            }
            lowest = min(lowest, k-(x%k));
        }
        cout << lowest << '\n';
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
    
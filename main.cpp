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
    ll n, x, y, s = 0;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        x = arr[i];
        y = arr[i+1];

        if (x < 0) {
            if (y < 0) {
                arr[i] = -y;
                arr[i+1] = -x;
            } else {
                if (abs(x) > y) {
                    arr[i] = -y;
                    arr[i+1] = -x;
                }
            }
        } else {
            if (y < 0) {
                if (abs(y) > x) {
                    arr[i] = -y;
                    arr[i+1] = -x;
                }
            }
        }
        s += arr[i];

    }
    s += arr[n-1];
    
    cout << s << '\n';
    
    
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
    
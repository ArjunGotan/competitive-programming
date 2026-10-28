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
    ll n, i, j;
    cin >> n;

    if (n < 4 || n % 2 != 0) {
        cout << -1 << '\n';
    } else {

        //min
        if (n % 6 == 0) {
            cout << n/6 << ' ';
        } else {
            cout << n/6 + 1 << ' ';
        }
        //max 
        cout << n/4 << '\n'; // always n/4 
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
    
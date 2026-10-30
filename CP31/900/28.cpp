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
    ll n, k, xth, s = 0;
    cin >> n >> k;

    if (n%2==0) {
        xth = n/2 + 1;
    } else {
        xth = n - n/2;
    }

    vi arr(n*k);

    for (int i = 0; i < n*k; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    for (int i = 1; i <= k; i++) {
        // we want ix th largest integer
        // cout <<  arr[n * k - i * xth] << '\n';
        s += arr[n * k - i * xth];
    }

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
    
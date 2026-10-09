#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
    int n, x, max, prev, curr;
    cin >> n >> x;

    cin >> prev;
    max = prev;
    for (int i = 1 ; i < n; i++) {
        cin >> curr;
        if (max < (curr - prev)) max = curr - prev;
        prev = curr;
    }
    curr = prev;

    (max < 2*(x - curr)) ? cout << 2*(x-curr) : cout << max;
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

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
    int n, x, prev, count = 0, maxcount = 0;
    
    cin >> n;
    cin >> prev;

    count = !prev;
    maxcount = count;

    for (int i = 0; i < n - 1; i++) {

        cin >> x;
        if (x == 0) {
            count++;
        } else {
            count = 0;
        }

        maxcount = max(count, maxcount);
        prev = x;
    }

    cout << maxcount << '\n';

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
    
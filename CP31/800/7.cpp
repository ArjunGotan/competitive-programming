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
    int n, k;
    cin >> n >> k;
    int tries = 0;
    string x, sub;
    cin >> x >> sub;
    
    for (int i = 0; i < 7; i++) {
        auto found = x.find(sub);
        if (found == string::npos) {
            x += x;
            tries++;
        } else {
            cout << tries << '\n';
            return;
        }
    }

    cout << -1 << '\n';
    
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

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


struct monster {
    int value;
    int remainder;
    int index;
};

void solve() {
    // order in decreasing order of remainders && inc value if same
    int n, k, a;
    cin >> n >> k;
    
    vector<monster> m(n);

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % k == 0) {
            m[i] = {a, k, i};
        } else {
        m[i] = {a, a % k, i};
        }
    }

    sort(all(m), [](const monster& a, const monster& b){
        if (a.remainder == b.remainder) {
            return a.index < b.index;
        }
        return a.remainder > b.remainder;
    });

    for (int i = 0; i < n; i++) {
        cout << m[i].index + 1 << ' ';
    }
    cout << '\n';

   

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

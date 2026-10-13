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
    int n;
    cin >> n;

    if (n == 3 || n == 4) {
        cout << "NO SOLUTION";
        return;
    }

    for (int i = n; i > 0; i--) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
    for (int i = n; i > 0; i--) {
        if (i % 2 != 0) {
            cout << i << ' ';
        }
    }
    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

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
    int n, x;
    cin >> n;
    vi seq(n);

    for (int i = 0; i < n; i++) cin >> seq[i];
    
    int maxnum = *max_element(all(seq));
    int unique = 0;
    int maxcount = 0;

    for (int i = 0; i < n; i++) {
        if (seq[i] != maxnum) {
            unique++;   
        } else {
            maxcount++;
        }
    }
    if (!unique) {
        cout << -1 << '\n';
        return;
    }

    cout << unique  << ' ' << maxcount << '\n';
    for (int i = 0; i < n; i++) {
        if (seq[i] != maxnum) {
            cout << seq[i] << ' ';
        }
    }
    cout << '\n';
    for (int i = 0; i < maxcount; i++) {
        cout << maxnum << ' ';
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

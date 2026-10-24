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
    string s;
    cin >> n;
    cin >> s;

    int maxcount = 1, currcount = 1;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i+1]) {
            currcount++;
        } else {
            currcount = 1;
        }
        maxcount = max(currcount, maxcount);
    }

    cout << maxcount + 1 << '\n';


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
    
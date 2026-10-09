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
    string s, sub;
    int n;
    cin >> n;
    cin >> s;
    int found = 0;
    for (int i = 0; i <= n-3; i++) {
        sub = s.substr(i, 3);
        if (sub == "...") {
            cout << 2 << '\n';
            return;
        }
    }
    int c;
    c = count(s.begin(), s.end(), '.');
    cout << c << '\n';

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

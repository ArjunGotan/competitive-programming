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

void pour(pii &cow1, pii &cow2) {
    int m1, c1, m2, c2;
    c1 = cow1.first;
    m1 = cow1.second;
    c2 = cow2.first;
    m2 = cow2.second;

    if ((m1 + m2) >= c2) {
        cow2.second = c2;
        cow1.second = m1 + m2 - c2;
    } else {
        cow2.second = m1 + m2;
        cow1.second = 0;
    }
}

void solve() {
    int m, c;
    vector<pii> cows;
    for (int i = 0; i < 3; i++) {
        cin >> c >> m;
        cows.push_back(make_pair(c, m));
    }

    
    for (int i = 0; i < 100; i++) {
        pour(cows[i%3], cows[(i+1)%3]);
    }

    for (int i = 0; i < 3; i++) {
        cout << cows[i].first << ' ' << cows[i].second << '\n';    
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

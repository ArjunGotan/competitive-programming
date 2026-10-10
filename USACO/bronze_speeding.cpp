#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <array>

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
    array<int, 100> road;
    array<int, 100> driving;
    
    int n, m;
    cin >> n >> m;
    int x1, x2;
    int index = 0;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        for (int j = 0; j < x1; j++) {
            road[index] = x2;
            index++;
        }
    }
    index = 0;
    for (int i = 0; i < m; i++) {
        cin >> x1 >> x2;
        for (int j = 0; j < x1; j++) {
            driving[index] = x2;
            index++;
        }
    }

    // for (int i = 0; i < 100; i++) {
    //     cout << road[i] << ' ';
    // }
    // cout << '\n';
    // for (int i = 0; i < 100; i++) {
    //     cout << driving[i] << ' ';
    // }
    // cout << '\n';
    

    int max = 0;

    for (int i = 0; i < 100; i++) {
        if (max < (driving[i] - road[i])) {
            max = driving[i] - road[i];
        }
    }

    cout << max << '\n';


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

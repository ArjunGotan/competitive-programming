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
    map<int, int> freq;
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }
    if (freq.size() == 1) {
        cout << "Yes\n";
        return;
    } else if (freq.size() == 2) {
        auto it1 = freq.begin();
        auto it2 = next(it1);
        
        if (abs((it1->second) - (it2->second)) <= 1) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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

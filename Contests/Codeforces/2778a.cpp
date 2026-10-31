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


void solve() {
    unordered_map<char, int> freq;
    int n1, n2;
    cin >> n1 >> n2;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < n1; i++) {
        freq[a[i]]++;
    }
    for (int i = 0; i < n2; i++) {
        freq[b[i]]--;
    }
    if (freq['s'] != 1 || freq['i'] != 1 || freq['x'] != 1) {
        cout << "NO\n";
        return;
    }
    for (auto &pair:freq) {
        char key = pair.first;
        int value = pair.second;

        if (key == 's' || key == 'i' || key == 'x') {
            continue;
        }
        if (value !=0 ) {
            cout << "NO\n";
            return;
        }

    }

    cout << "YES\n";

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
    
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
    string n;
    cin >> n;
    int min_ops = n.size();
    int ops = 0;
    for (int i = (int)n.size() - 1; i > 0; i--) {
        if (n[i] == '5') {
            for (int j = i-1; j >= 0; j--) {
                if (n[j] == '2' || n[j] == '7') {
                    min_ops = min(min_ops, (int)n.size() - j - 2);
                    break;
                }
            }
        }
        if (n[i] == '0') {
            for (int j = i-1; j >= 0; j--) {
                if (n[j] == '5' || n[j] == '0') {
                    min_ops = min(min_ops, (int)n.size() - j - 2);
                    break;
                }
            }
        }
    }
    cout << min_ops << '\n';
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
    
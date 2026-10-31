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
    int r, s, p;
    cin >> r >> s >> p;
    int n = r + p + s;
    char mostfreq;
    if (r > p) {
        if (r > s) {
            mostfreq = 'P';    
        } else {
            mostfreq = 'R';
        }
    } else {
        if (p > s) {
            mostfreq = 'S';
        } else {
            mostfreq = 'R';
        }
    }

    for (int i = 0; i < n; i++) {
        cout << mostfreq;
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
    
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
    int n, b;
    cin >> n;
    vi seq;
    vi finalseq;
    for (int i = 0; i < n; i++) {
        cin >> b;
        seq.pb(b);
    }

    finalseq.pb(seq[0]);
    for (int i = 1; i < n; i++) {
        if (seq[i] < seq[i-1]) {
            finalseq.pb(1);
        }
        finalseq.pb(seq[i]);
    }

    cout << finalseq.size() << '\n';
    for (int i = 0; i < finalseq.size(); i++) {
        cout << finalseq[i] << ' ';
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

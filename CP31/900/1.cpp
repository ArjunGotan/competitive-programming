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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    int dx[] = {a, a, -a, -a, b, b, -b, -b};
    int dy[] = {b, -b, b, -b, a, -a, a, -a};

    set<pii> king_moves;
    set<pii> queen_moves;

    for (int i = 0; i < 8; i++) {
        king_moves.insert({xk + dx[i], yk + dy[i]});
        queen_moves.insert({xq + dx[i], yq + dy[i]});
    }

    int count = 0;
    for (const auto& pos : king_moves) {
        if (queen_moves.count(pos)) {
            count++;
        }
    }

    cout << count << '\n';
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
    
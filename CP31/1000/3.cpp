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
    int n, p;
    cin >> n >> p;
    
    vi people(n+1);
    people[0] = n+1;
    vi cost(n+1);
    cost[0] = p;
    vector<pair<int, int>> zipped;

    zipped.reserve(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> people[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }

    for (size_t i = 0; i < n+1; i++) {
        zipped.push_back({cost[i], people[i]});
    }

    sort(all(zipped));

    ll total_cost = p; 
    int people_left = n - 1;

    for (int i = 0; i <= n; i++) {
        if (people_left <= 0) break;

        ll money = zipped[i].first;
        ll count = zipped[i].second;

        ll take = min((ll)people_left, count);
        total_cost += take * money;
        people_left -= take;
    }

    cout << total_cost << '\n';
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

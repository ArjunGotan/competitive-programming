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
    int n, k, odd=0;
    string s;
    cin >> n >> k;
    cin >> s;

    map<char, int> freq;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }
    for (const auto& pair : freq) {
        if (pair.second % 2 == 1) {
            odd++;
        }
    }
    if (odd == 1 || odd <= k || odd - k == 1) {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";



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
    
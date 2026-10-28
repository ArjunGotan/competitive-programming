#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <array>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


void solve() {
    string word, target;
    map<char, int> freq_target;
    cin >> word >> target;
    string result = "";

    for (int i = 0; i < target.size(); i++) {
        freq_target[target[i]]++;
    }

    for (int i = word.size() - 1; i >= 0; i--) {
        if (freq_target[word[i]] > 0) {
            result = word[i] + result;
            freq_target[word[i]]--;
        }
    }

    (result == target) ? cout << "YES\n" : cout << "NO\n";

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
    
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


void solve() {
    // find max length of substring containing only one type of character
    string seq;
    int length, maxlength = 0;
    cin >> seq;
    char x = '0';

    for (int i = 0; i < seq.length(); i++) {
        if (seq[i] != x) {
            length = 0;
        }
        x = seq[i];
        length++;
        if (length > maxlength) {
            maxlength = length;
        }
    }

    cout << maxlength;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

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

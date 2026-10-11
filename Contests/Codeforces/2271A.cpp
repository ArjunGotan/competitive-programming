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
        int x, y;
        int currx = 0, curry = 0;
        int moves = 0;
        cin >> x >> y;

        while (1) {

            if (currx == x && abs(curry - y) > 1) {
                cout << -1 << '\n';
                return;
            }

            if (currx == x && curry == y) {
                cout << moves << '\n';
                return;
            }
            if (currx == x && abs(curry - y) == 1) {
                cout << moves + 1 << '\n';
                return;
            }
            if (y > curry) {
                curry++;
            } else if (y < curry) {
                curry--;
            } else { // curry = y
                moves += abs(currx - x) + abs(currx - x) % 2;
                cout << moves << '\n';
                return;
            }
            currx++;
            moves++;
        }

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

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
        int n, moves = 0, x;
        cin >> n;

        vi nums;

        for (int i = 0; i < n; i++) {
            cin >> x;
            nums.pb(x);
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i+1]) {
                moves += nums[i] - nums[i+1];
                nums[i+1] = nums[i];   
            }
        }

        cout << moves;

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

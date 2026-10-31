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
    int n, x, min_ = 1001, ind = 0;
    cin >> n;
    vi nums(n);
    vi left_index(n), right_index(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums[i] = x;
        if (x < min_) {
            min_ = x;
            ind = i;
        }
        left_index[i] = ind;
    }
    min_ = nums[n-1];
    ind = n-1;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < min_) {
            ind = i;
            min_ = nums[i];
        }
        right_index[i] = ind;
    }

    for (int j = 1; j < n - 1; j++) {
        if (nums[left_index[j-1]] < nums[j] && nums[right_index[j+1]] < nums[j]) {
            cout << "YES\n";
            cout << left_index[j-1]+1<< ' ' << j+1 << ' ' << right_index[j+1]+1 << '\n';
            return;
        }
    }
    cout << "NO\n";
    

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
    
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
    int n, k, x;
    cin >> n >> k >> x;

    if (k == 1 && x == 1) {
        cout << "NO\n";
        return;
    }

    vi nums;
    int num = k;
    if (x == k) {
        num = k - 1;
    }

    int temp = n;
    while (temp) {
        if (temp - num >= 0 && num > 0 && num != x) {
            temp -= num;
            nums.pb(num);
        } else {
            num -= 1;
        }
        if (num <= 0) {
            break;
        }
    }

    int s = 0;
    for (int i = 0; i < nums.size(); i++) {
            s += nums[i];
    }
    if (s == n) {
        cout << "YES\n" << nums.size() << '\n';
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ' ';
        }
    }
    else {
        cout << "NO";
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

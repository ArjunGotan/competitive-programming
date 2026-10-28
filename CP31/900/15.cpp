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
    int n;
    cin >> n;
    int a[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = n - 2; i >= 0; i--) {
        while (a[i+1] <= a[i] && a[i] > 0) {
            a[i] /= 2;
            count++;    
        }   
        if (a[i+1] <= a[i]) {
            cout << -1 << '\n';
            return;
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
    
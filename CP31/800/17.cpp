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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES\n" << n << '\n';
        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << '\n';
    } else {
        if (n % 2 == 0) {
            if (k >= 2) {
                cout << "YES\n" << n/2 << '\n';
                for (int i = 0; i < n/2; i++) {
                    cout << "2 ";
                }
                cout << '\n';
            } else {
                cout << "NO\n";
            }
        } else {
            if (k >= 3) {
                cout << "YES\n";
                int count = 0;
                if (n == 1) {
                    cout << "NO\n";
                    return;    
                }
                n -= 3;
                count++;
                while (n) {
                    n-=2;
                    count++;
                }
                cout << count << '\n';
                cout << "3 ";
                for (int i = 0; i < count - 1; i++) {
                    cout << "2 ";
                } cout << '\n';
            } else {
                cout << "NO\n";
            }
        }
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

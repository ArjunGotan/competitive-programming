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
    int n;
    ll count, unsafe;
    cin >> n;
    for (int k = 1; k <= n; k++) {
        

        if (k <= 1) {
            cout << 0 << '\n';
            continue;
        }

        count = 0;

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                unsafe = 0;

                // j = x and i = y

                if ((k - 1) - i >= 2) { // for long vertical | bottom half
                    if (j > 0) {
                        unsafe++;
                    }    
                    if (k - 1 - j > 0) {
                        unsafe++;
                    }
                }

                if (i > 1) { // long vertical top half
                    if (j > 0) {
                        unsafe++;
                    }    
                    if (k - 1 - j > 0) {
                        unsafe++;
                    }
                }

                // now long horizontal 
                if (i > 0) {
                    if (j >= 2) {
                        unsafe++;
                    }
                    if (k - 1 - j >= 2) {
                        unsafe++;
                    } 
                }
                if (k - 1 - i > 0) {
                    if (j >= 2) {
                        unsafe++;
                    }
                    if (k - 1 - j >= 2) {
                        unsafe++;
                    } 
                }

                count += (k * k - 1 - unsafe);
            }
        }
        cout << count/2 << '\n';
    }
    
    

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

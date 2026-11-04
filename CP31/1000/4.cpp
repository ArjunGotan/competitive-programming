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
    ll n, m, a;
    cin >> n;
    
    ll global_min = numeric_limits<ll>::max();
    ll seconds = 0;
    ll second_arr = numeric_limits<ll>::max();
    
    for (int i = 0; i < n; i++) {
        cin >> m;
        
        ll max_temp = numeric_limits<ll>::max(); 
        ll second_temp = numeric_limits<ll>::max();
        
        for (int j = 0; j < m; j++) { 
            cin >> a;
            
            global_min = min(global_min, a);
            
            if (a < max_temp) {
                second_temp = max_temp;
                max_temp = a;
            } else if (a < second_temp) {
                second_temp = a;
            }
        }
        
        seconds += second_temp;
        second_arr = min(second_arr, second_temp);
    }
    
    cout << global_min + seconds - second_arr << '\n';
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

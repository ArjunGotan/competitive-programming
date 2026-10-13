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
    string row;
    int score = 0;
    int closest[2]; //[x, y]
    // find point from the centre square which is closest to our point

    for (int i = 0; i < 10; i++) {
        cin >> row;
        for(int j = 0; j < 10; j++) {
            if (row[j] == 'X') {
                if (j <= 4) closest[0] = 4;
                else closest[0] = 5;

                if (i <= 4) closest[1] = 4;
                else closest[1] = 5;

                score += 5 - (max(abs(closest[0] - j), abs(closest[1] - i)));

            }
        }
    }
    cout << score << '\n';
    
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

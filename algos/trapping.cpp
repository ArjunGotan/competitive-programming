#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> pref(n);
    vector<int> suff(n);

    int maxl = nums[0];
    int indl = 0;
    for (int i = 0; i < n; i++) {
        if (maxl < nums[i]) {
            maxl = nums[i];
            indl = i;
        }
        pref[i] = indl;
    }

    int maxr = nums[n-1];
    int indr = n-1;
    for (int i = n-1; i >= 0; i--) {
        if (maxr < nums[i]) {
            maxr = nums[i];
            indr = i;
        }
        suff[i] = indr;
    }

    int water = 0;
    int heightbar;
    for (int i = 0; i < n; i++) {
        heightbar = min(nums[pref[i]], nums[suff[i]]);
        water += heightbar - nums[i];
    }
    cout << water << '\n';
    


    return 0;
}
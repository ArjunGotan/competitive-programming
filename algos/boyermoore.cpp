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

    int candidate, count;
    count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else if (candidate == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    cout << candidate << '\n';

}
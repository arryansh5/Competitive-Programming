#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());

    // leftmost index of maximum
    int index_max = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxVal) {
            index_max = i;
            break;
        }
    }

    // rightmost index of minimum
    int index_min = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minVal) {
            index_min = i;
            break;
        }
    }

    int swaps = index_max + (n - 1 - index_min);
    if (index_max > index_min) swaps--;

    cout << swaps << "\n";
    return 0;
}

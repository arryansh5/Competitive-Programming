#include <bits/stdc++.h>
using namespace std;

int Beautiful_Matrix(vector<int> &arr) {
    int index_at_1 = -1;
    for (int i = 0; i < 25; i++) {
        if (arr[i] == 1) {
            index_at_1 = i;
            break;
        }
    }

    // Convert 1D index to row and column (0-based)
    int row = index_at_1 / 5;
    int col = index_at_1 % 5;

    // Center is at (2,2) in 0-based
    return abs(row - 2) + abs(col - 2); // Manhattan distance
}

int main() {
    vector<int> arr(25);
    for (int i = 0; i < 25; i++) {
        cin >> arr[i];
    }

    cout << Beautiful_Matrix(arr) << endl;
    return 0;
}

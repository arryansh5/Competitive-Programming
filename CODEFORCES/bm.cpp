#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row = -1, col = -1;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Center is at (2,2)
    cout << abs(row - 2) + abs(col - 2) << "\n";
    return 0;
}

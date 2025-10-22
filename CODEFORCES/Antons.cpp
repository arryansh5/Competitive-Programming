#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    unordered_map<string,int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    long long total = 0;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        total += faces[s];
    }

    cout << total << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    for(int i = 1; i <= t; i++) {

        int n, m; cin >> n >> m;

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                if(j % 2 == 0) cout << (n / 2 + j / 2) * m + k + 1 << ' ';
                else cout << (j / 2) * m + k + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
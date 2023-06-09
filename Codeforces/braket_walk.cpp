#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q; string s;
    cin >> n >> q >> s;

    set<int> a;

    for(int i = 1; i <= n; ++i)
        if((i % 2) != (s[i - 1] == '('))
            a.insert(i);

    while(q--) {
        int i; cin >> i;

        if(a.count(i)) a.erase(i);
        else a.insert(i);

        if(n % 2) cout << "NO\n";
        else if(a.size() && (*a.begin() % 2 || !(*a.rbegin() % 2))) cout << "NO\n";
        else cout << "YES\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll M = 1000000007;

ll pw(ll a, ll p) { return p ? pw(a * a % M, p / 2) * (p & 1 ? a : 1) % M : 1; }

ll inv(ll a) { return pw(a, M - 2); }

int main() {

    ll t; cin >> t;
    for(ll tc = 1; tc <= t; ++tc) {

        ll n, m, k, ai;
        cin >> n >> m >> k;
        for(ll i = 0; i < n; ++i) cin >> ai;

        ll ans = pw(k, m), mCi = 1;

        for(ll i = 0; i < n; ++i) {
            ans = (ans + M - mCi * pw(k - 1, m - i) % M) % M;
            mCi = mCi * (m - i) % M * inv(i + 1) % M;
        }

        cout << ans << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < n; i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;

    vector<ll> L(n);
    vector<ll> R(n);

    vector<ll> ans;

    ll l = 0;
    ll r = 0;


    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        L[i] = a;
        R[i] = b;
    }

    rep(i, n) {
        l += L[i];
        r += R[i];
    }

    if (0 < l || r < 0) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, n) {
        ll margin = R[i] - L[i];

        if (l + margin >= 0) {
            ans.push_back(L[i] - l);
            break;
        }

        l += margin;
        ans.push_back(L[i] + margin);
    }

    for (ll i = ans.size(); i < n; i++) {
        ans.push_back(L[i]);
    }

    cout << "Yes" << endl;

    rep(i, n) {
        cout << ans[i] << " ";
    }

    return 0;
}
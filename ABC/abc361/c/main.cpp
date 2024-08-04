#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    deque<ll> A;

    rep(i, n) {
        ll in;
        cin >> in;
        A.push_back(in);
    }

    sort(A.begin(), A.end());

    ll min_val = LLONG_MAX;

    rep(i, k+1) {
        ll margin = A[i+n-k-1] - A[i];
        min_val = min(min_val, margin);
    }

    cout << min_val << endl;

    return 0;
}
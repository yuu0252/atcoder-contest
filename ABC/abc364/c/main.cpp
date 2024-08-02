#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < n; i++)
using ll = long long;
ll n, x, y;
vector<ll> A;
vector<ll> B;

int main() {
    cin >> n >> x >> y;
    A.resize(n); B.resize(n);

    rep(i, n) cin >> A[i];
    rep(i, n) cin >> B[i];

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());


    ll min_count_A = 0;
    ll min_count_B = 0;
    ll sum_A = 0;
    ll sum_B = 0;

    rep(i, n) {
        sum_A += A[i];
        min_count_A++;
        if (sum_A > x) {
            break;
        }
    }

    rep(i, n) {
        sum_B += B[i];
        min_count_B++;
        if (sum_B > y) {
            break;
        }
    }

    cout << min(min_count_A, min_count_B) << endl;
    
    return 0;
}
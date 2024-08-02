#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> L(n);
    rep(i, n) cin >> L[i];

    sort(L.rbegin(), L.rend());

    cout << max(t - L[p-1], 0) << endl;
    
    return 0;
}
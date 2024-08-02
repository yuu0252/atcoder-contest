#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int ans = 0;

    do {
        bool ok = true;

        rep(i, n-k+1) {
            string t = s.substr(i, k);
            string rt = t;
            reverse(rt.begin(), rt.end());

            if (t == rt) ok = false;
        }

        if (ok) ans++;
    } while (next_permutation(s.begin(), s.end()));

    cout << ans << endl;

    return 0;
}
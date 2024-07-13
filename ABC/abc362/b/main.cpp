#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int calc(pair<int, int> a, pair<int, int> b) {
    int ans = 0;
    ans = (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
    return ans;
}

int main() {
    pair<int, int> a, b, c;
    rep(i, 3) {
        int x, y;
        cin >> x >> y;
        if (i == 0) {
            a = make_pair(x, y);
        } else if (i == 1) {
            b = make_pair(x, y);
        } else {
            c = make_pair(x, y);
        }

    }

    int A, B, C;
    A = calc(a, b);
    B = calc(b, c);
    C = calc(c, a);

    if (A == B + C || B == C + A || C == A + B) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
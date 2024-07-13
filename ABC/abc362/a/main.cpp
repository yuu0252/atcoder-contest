#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    string c;
    cin >> c;

    int ans = 0;

    if (c == "Blue") {
        ans = min(r, g);
    } else if(c == "Green") {
        ans = min(r, b);
    } else {
        ans = min(g, b);
    }

    cout << ans << endl;
    return 0;
}
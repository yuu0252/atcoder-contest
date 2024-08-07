#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    rep(i, 3) {
        if (s[i] == 'R') {
            cout << "Yes" << endl;
            return 0;
        } else if (s[i] == 'M') {
            cout << "No" << endl;
            return 0;
        }
    }

    return 0;
}
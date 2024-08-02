#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string temp;
    cin >> temp;

    rep(i, n-1) {
        string s;
        cin >> s;

        if (temp == s && s == "sweet" && i != n-2) {
            cout << "No" << endl;
            return 0;
        }
        temp = s;
    }
    cout << "Yes" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;

    for (int w = 1; w < (int)s.size(); ++w) {
        for (int c = 0; c < w; ++c) {
            string now = "";
            for (int i = c; i < (int)s.size(); i += w) {
                now += s[i];
            }
            if (now == t) {
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }

    cout << "No" << endl;
   return 0;
}
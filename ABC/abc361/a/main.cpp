#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    
    rep(i, n+1) {
        if (i==k) cout << x;
        else {
            int a;
            cin >> a;
            cout << a;
        }
        if (i!=n) cout << " ";
    }
    cout << endl;
    return 0;
}
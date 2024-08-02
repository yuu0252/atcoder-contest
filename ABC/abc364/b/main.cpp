#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    int ny, nx;
    cin >> ny >> nx;
    ny -= 1;
    nx -= 1;

    vector<vector<char>> grid(h, vector<char>(w, '.'));

    rep(i, h) rep(j, w) {
        cin >> grid[i][j];
    }

    string s;
    cin >> s;

    vector<pair<int, int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

    rep(i, s.length()) {
        int index = -1;
        if (s[i] == 'U') index = 0;
        else if (s[i] == 'R') index = 1;
        else if (s[i] == 'D') index = 2;
        else index = 3;

        auto [y, x] = directions[index];
        if (!(0 <= ny + y && ny + y < h && 0 <= nx + x && nx + x < w && grid[ny + y][nx + x] != '#')) {
            continue;
        }

        ny += y;
        nx += x;
    }

    cout << ny + 1 << " " << nx + 1 << endl;

    return 0;
}
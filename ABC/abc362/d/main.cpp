#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> A(n);
    vector<vector<pair<ll, ll>>> ad_list(n);
    vector<bool> visited(n);
    vector<ll> dist(n, LLONG_MAX);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> Q;

    rep(i, n) cin >> A[i];
    rep(i, m) {
        ll u, v, b;
        cin >> u >> v >> b;

        ad_list[u-1].push_back(make_pair(v-1, A[v-1]+b));
        ad_list[v-1].push_back(make_pair(u-1, A[u-1]+b));
    }


    dist[0] = A[0];
    Q.push(make_pair(dist[0], 0));

    while (!Q.empty()) {
        ll pos = Q.top().second;
        Q.pop();


        if (visited[pos]) continue;

        visited[pos] = true;


        rep(i, ad_list[pos].size()) {
            ll nxt = ad_list[pos][i].first;
            ll cost = ad_list[pos][i].second;

            if (dist[nxt] > dist[pos] + cost) {
                dist[nxt] = dist[pos] + cost;
                Q.push(make_pair(dist[nxt], nxt));
            }
        }
    }

    for (int i = 1; i < n; i++) {
        cout << dist[i];
        if (i != n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main() {
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    std::vector<int> W(n);
    std::vector<std::vector<int>> C(n);
    int sum = 0;

    rep(i, n) {
        int a;
        std::cin >> a;
        A[i] = a;
    }

    rep(i, n) {
        int w;
        std::cin >> w;
        W[i] = w;
    }

    rep(i, n) {
        int a = A[i] - 1;
        int w = W[i];

        C[a].push_back(w);
    }

    rep(i, n) {
        if (C[i].size() >= 2) {
            auto iterator = std::max_element(C[i].begin(), C[i].end());
            int index = std::distance(C[i].begin(), iterator);

            rep(j, C[i].size()) {
                if (index == j) continue;
                sum += C[i][j];
            }
        }
    }


    std::cout << sum << std::endl;
    
    return 0;
}
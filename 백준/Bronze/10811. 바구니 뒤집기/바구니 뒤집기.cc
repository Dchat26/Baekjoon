#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void ReverseBasket(vector<int>& baskets, int m) {
    for (int k = 0; k < m; k++) {
        int i = 0, j = 0;

        if (!(cin >> i >> j)) break;

        reverse(baskets.begin() + (i - 1), baskets.begin() + j);
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, m = 0;

    if (!(cin >> n >> m)) return 0;

    vector<int> baskets(n);

    iota(baskets.begin(), baskets.end(), 1);

    ReverseBasket(baskets, m);

    for (int i = 0; i < n; i++) {
        cout << baskets[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}
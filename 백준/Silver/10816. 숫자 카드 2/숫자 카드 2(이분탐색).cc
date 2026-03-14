#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    if (!(cin >> n)) return 0;

    vector<int> nlist(n);
    for (int i = 0; i < n; i++) {
        if (!(cin >> nlist[i]));
    }

    sort(nlist.begin(), nlist.end());

    int m = 0;
    if (!(cin >> m)) return 0;

    for (int i = 0; i < m; i++) {
        int target = 0;
        if (!(cin >> target)) return 0;

        auto low = lower_bound(nlist.begin(), nlist.end(), target);
        auto up = upper_bound(nlist.begin(), nlist.end(), target);

        cout << (up - low) << (i == m - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n = 0, m = 0;
    if (!(cin >> n >> m)) return 0;

    set<int> v1;
    for (int i = 0; i < n; i++) {
        int num = 0;
        if (!(cin >> num)) return 0;
        v1.insert(num);
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        int num = 0;
        if (!(cin >> num)) return 0;

        if (v1.find(num) != v1.end()) {
            count++;
        }
    }

    cout << (n + m) - 2 * count << "\n";

    return 0;
}

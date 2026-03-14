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

    set<int> v2;
    for (int i = 0; i < m; i++) {
        int num = 0;
        if (!(cin >> num)) return 0;
        v2.insert(num);
    }

    vector<int> result;
    set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));

    cout << (int)result.size() << "\n";

    return 0;
}
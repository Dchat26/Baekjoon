#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n = 0, m = 0;
    if (!(cin >> n >> m)) return 0;

    vector<string> v1(n), v2(m);
    for (int i = 0; i < n; i++) if (!(cin >> v1[i])) return 0;
    for (int i = 0; i < m; i++) if (!(cin >> v2[i])) return 0;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<string> result;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(result));

    cout << result.size() << "\n";
    for (const string& name : result) cout << name << "\n";

    return 0;
}

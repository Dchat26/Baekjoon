#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, m = 0;
    if (!(cin >> n >> m)) return 0;

    unordered_set<string> unheard;
    for (int i = 0; i < n; i++) {
        string name;
        if (!(cin >> name)) return 0;
        unheard.insert(name);
    }

    vector<string> result;
    for (int i = 0; i < m; i++) {
        string name;
        if (!(cin >> name)) return 0;

        if (unheard.find(name) != unheard.end()) {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (const string& name : result) {
        cout << name << "\n";
    }

    return 0;
}
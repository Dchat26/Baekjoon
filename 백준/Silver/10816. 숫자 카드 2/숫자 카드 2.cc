#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    if (!(cin >> n)) return 0;
    
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++) {
        int num = 0;
        if (!(cin >> num)) return 0;

        count[num]++;
    }

    int m = 0;
    if (!(cin >> m)) return 0;
    
    for (int i = 0; i < m; i++) {
        int target = 0;
        if (!(cin >> target)) return 0;

        cout << count[target] << (i == m - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
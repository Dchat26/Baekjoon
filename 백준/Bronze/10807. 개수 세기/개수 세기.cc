#include <iostream>
#include <vector>
using namespace std;

void FoundTarget(const vector<int>& arr, int target) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, target = 0;

    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (!(cin >> target)) return 0;

    FoundTarget(arr, target);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> submitted;
    for (int i = 0; i < 28; i++) {
        int num;
        if (!(cin >> num)) break;
        submitted.push_back(num);
    }

    for (int i = 1; i <= 30; i++) {

        auto it = find(submitted.begin(), submitted.end(), i);

        if (it == submitted.end()) {
            cout << i << "\n";
        }
    }

    return 0;
}

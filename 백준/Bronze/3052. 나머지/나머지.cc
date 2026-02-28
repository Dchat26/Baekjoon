#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void CountRemain() {
    vector<int> remains;
    remains.reserve(10);

    for (int i = 0; i < 10; i++) {
        int num;
        if (!(cin >> num)) break;

        int remain = num % 42;

        auto it = find(remains.begin(), remains.end(), remain);

        if (it == remains.end()) {
            remains.push_back(remain);
        }
    }

    cout << remains.size() << "\n";
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    CountRemain();

    return 0;
}
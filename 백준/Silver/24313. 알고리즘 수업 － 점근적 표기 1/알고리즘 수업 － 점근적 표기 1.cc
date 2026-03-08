#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1 = 0, a0 = 0;
    int c = 0, n = 0;
    if (!(cin >> a1 >> a0 >> c >> n)) return 0;

    if (a1 * n + a0 <= c * n && c >= a1) {
        cout << 1 << "\n";
    }
    else {
        cout << 0 << "\n";
    }

    return 0;
}
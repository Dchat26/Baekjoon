#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0, c = 0;
    if (!(cin >> a >> b >> c)) return 0;

    int max_val = max({ a, b ,c });
    if (2 * max_val < a + b + c) {
        cout << a + b + c << "\n";
    }
    else {
        int temp = a + b + c - max_val;

        cout << 2 * temp - 1 << "\n";
    }

    return 0;
}
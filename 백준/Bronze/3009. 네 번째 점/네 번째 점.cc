#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x4 = 0, y4 = 0;
    for (int i = 0; i < 3; i++) {
        int x = 0, y = 0;
        if (!(cin >> x >> y)) return 0;

        x4 ^= x;
        y4 ^= y;
    }

    cout << x4 << " " << y4 << "\n";

    return 0;
}

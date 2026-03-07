#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, w, h;
    if (!(cin >> x >> y >> w >> h)) return 0;

    int left = x;
    int bottom = y;
    int right = w - x;
    int top = h - y;

    int min_val = min({ left, bottom, right, top });

    cout << min_val << "\n";

    return 0;
}
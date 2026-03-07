#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    if (!(cin >> n)) return 0;

    int max_xval = -10001;
    int max_yval = -10001;

    int min_xval = 10001;
    int min_yval = 10001;

    for (int i = 0; i < n; i++) {
        int x = 0, y = 0;
        if (!(cin >> x >> y)) return 0;

        if (max_xval < x) max_xval = x;
        if (min_xval > x) min_xval = x;
        if (max_yval < y) max_yval = y;
        if (min_yval > y) min_yval = y;
    }

    int result = (max_xval - min_xval) * (max_yval - min_yval);

    cout << result << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n = 0;
    if (!(cin >> n)) return 0;

    cout << n * (n - 1) / 2 << "\n" << 2 << "\n";

    return 0;
}
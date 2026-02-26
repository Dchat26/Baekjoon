#include <iostream>
using namespace std;

void Mul(int n) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        if (cin >> a >> b) {
            cout << "Case #" << i << ": " << a + b << "\n";
        }
    }
}

int main(void) {
    int n = 0;

    if (!(cin >> n)) return -1;

    Mul(n);

    return 0;
}
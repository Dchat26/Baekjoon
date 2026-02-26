#include <iostream>
using namespace std;

void Star(int n) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main(void) {
    int n = 0;

    if (!(cin >> n)) return -1;

    Star(n);

    return 0;
}
#include <iostream>
using namespace std;

void Star(int n) {
    int r = 0, s = 0;

    for (int i = 0; i < n; i++) {
        r = (2 * i) + 1;
        s = n - i - 1;

        for (int j = 0; j < s; j++) cout << " ";
        for (int k = 0; k < r; k++)  cout << "*";
        cout << "\n";
    }

    for (int i = n - 2; i >= 0; i--) {
        r = (2 * i) + 1;
        s = n - i - 1;

        for (int j = 0; j < s; j++) cout << " ";
        for (int k = 0; k < r; k++) cout << "*";
        cout << "\n";
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    if (!(cin >> n)) return 0;

    Star(n);

    return 0;
}
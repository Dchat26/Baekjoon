#include <iostream>
using namespace std;

void CheckP(int* plist, int* piece) {
    for (int i = 0; i < 6; i++) {
        piece[i] = piece[i] - plist[i];
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int plist[6];
    int piece[6] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; i++) {
        if (!(cin >> plist[i])) return 0;
    }

    CheckP(plist, piece);

    for (int i = 0; i < 6; i++) {
        cout << piece[i] << (i == 5 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
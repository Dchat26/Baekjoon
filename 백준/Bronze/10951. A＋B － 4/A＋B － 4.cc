#include <iostream>
using namespace std;

void LMul(int a, int b) {
    cout << a + b << "\n";
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0, b = 0;

    while (cin >> a >> b) {
        LMul(a, b);
    }
    
    return 0;
}
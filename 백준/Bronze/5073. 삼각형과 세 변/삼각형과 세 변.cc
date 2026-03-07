#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0, c = 0;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        
        if (2 * max({ a, b, c }) >= a + b + c) {
            cout << "Invalid" << "\n";
        }
        else if (a == b && b == c) {
            cout << "Equilateral" << "\n";
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles" << "\n";
        }
        else {
            cout << "Scalene" << "\n";
        }
    }

    return 0;
}
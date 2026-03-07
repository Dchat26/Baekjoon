#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0, c = 0;
    if (!(cin >> a >> b >> c)) return 0;
    int sum_abc = a + b + c;

    if (sum_abc != 180) {
        cout << "Error" << "\n";
    }
    else if (a == b && b == c) {
        cout << "Equilateral" << "\n";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles" << "\n";
    }
    else {
        cout << "Scalene" << "\n";
    }

    return 0;
}

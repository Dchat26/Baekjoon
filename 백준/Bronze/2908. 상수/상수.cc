#include <iostream>
using namespace std;

void ReverseAB(int& a, int& b) {
	int reverseA = 0;
	while (a > 0) {
		reverseA = reverseA * 10 + (a % 10);
		a = a / 10;
	}

	int reverseB = 0;
	while (b > 0) {
		reverseB = reverseB * 10 + (b % 10);
		b = b / 10;
	}

	a = reverseA;
	b = reverseB;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	ReverseAB(a, b);

	int MaxVal = a;
	if (a < b) {
		cout << b << "\n";
	}
	else {
		cout << a << "\n";
	}

	return 0;
}
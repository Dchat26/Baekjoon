#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int line = 1;
	while (n > line) {
		n -= line;
		line += 1;
	}

	int a = 0, b = 0;
	if (line % 2 == 0) {
		a = n;
		b = line - n + 1;
	}
	else {
		a = line - n + 1;
		b = n;
	}

	cout << a << "/" << b << "\n";

	return 0;
}
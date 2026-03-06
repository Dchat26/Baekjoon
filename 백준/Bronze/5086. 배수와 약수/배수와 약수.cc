#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) break;
		else if (a % b == 0) {
			cout << "multiple" << "\n";
		}
		else if (b % a == 0) {
			cout << "factor" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	}

	return 0;
}
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int count = 0;
	string s;

	while (cin >> s) {
		count++;
	}
	cout << count << "\n";

	return 0;
}
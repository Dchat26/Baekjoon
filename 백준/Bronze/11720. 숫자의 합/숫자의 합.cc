#include <iostream>
using namespace std;

void Ssum(const string& s, int n) {
	int ssum = 0;
	for (int i = 0; i < n; i++) {
		ssum += s[i] - '0';
	}

	cout << ssum << "\n";
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	if (!(cin >> n)) return 0;

	string s;
	if (!(cin >> s)) return 0;

	Ssum(s, n);

	return 0;
}
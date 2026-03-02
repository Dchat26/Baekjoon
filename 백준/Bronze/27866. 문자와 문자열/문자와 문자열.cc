#include <iostream>
#include <vector>
using namespace std;

void PString(const string& s, int i) {
	cout << s[i - 1] << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i = 0;
	string s;

	if (!(cin >> s)) return 0;
	if (!(cin >> i)) return 0;

	PString(s, i);

	return 0;
}
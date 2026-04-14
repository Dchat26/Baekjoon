#include <iostream>
#include <ctype.h>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	string answer;
	if (!(cin >> answer)) return 0;

	for (char& c : answer) {
		if (isupper(c)) {
			c = tolower(c);
		}
		else {
			c = toupper(c);
		}
	}

	cout << answer << "\n";

	return 0;
}
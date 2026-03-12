#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	int num = 666;
	int count = 0;
	while (1) {
		string s = to_string(num);

		if (s.find("666") != string::npos) {
			count += 1;
		}

		if (count == n) {
			cout << num << "\n";
			break;
		}

		num += 1;
	}

	return 0;
}
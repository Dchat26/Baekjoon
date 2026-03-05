#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0, b = 0;
	if (!(cin >> n >> b)) return 0;

	string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string result;
	while (n > 0) {
		result += chars[n % b];
		n /= b;
	}

	reverse(result.begin(), result.end());

	cout << result << "\n";

	return 0;
}
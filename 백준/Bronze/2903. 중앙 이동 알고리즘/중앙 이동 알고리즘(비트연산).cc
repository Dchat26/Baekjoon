#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	long long side_dots = (1ll << n) + 1;

	cout << side_dots * side_dots << "\n";

	return 0;
}

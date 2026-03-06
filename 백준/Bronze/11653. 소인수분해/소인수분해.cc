#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n or n != 1)) return 0;
	//else if (n == 1) return 0;

	int i = 2;
	while (i * i <= n) {
		while (n % i == 0) {
			cout << i << "\n";
			n /= i;
		}
		i++;
	}

	if (n > 1) {
		cout << n << "\n";
	}

	return 0;
}
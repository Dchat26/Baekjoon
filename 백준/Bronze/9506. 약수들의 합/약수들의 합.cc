#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	while (cin >> n && n != -1) {
		vector<int> nlist;
		int nsum = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				nsum += i;
				nlist.push_back(i);
			}
		}

		if (n == nsum) {
			cout << n << " = ";
			for (int i = 0; i < nlist.size(); i++) {
				cout << nlist[i] << (i + 1 == nlist.size() ? "" : " + ");
			}
			cout << "\n";
		}
		else {
			cout << n << " is NOT perfect." << "\n";
		}
	}

	return 0;
}
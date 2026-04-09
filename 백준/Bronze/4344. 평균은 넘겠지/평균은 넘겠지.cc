#include <iostream>
#include <numeric>
#include <vector>
#include <iomanip>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	vector<double> answer(n);
	for (int i = 0; i < n; i++) {
		int s = 0;
		if (!(cin >> s)) break;

		vector<int> temp(s);
		for (int j = 0; j < s; j++) {
			if (!(cin >> temp[j])) break;
		}

		int sum = accumulate(temp.begin(), temp.end(), 0);

		double avg = (double)sum / s;

		int count = 0;
		for (int j = 0; j < s; j++) {
			if (avg < temp[j]) count++;
		}

		double rate = ((double)count / s) * 100;

		answer[i] = rate;
	}

	for (const auto& num : answer) {
		cout << fixed << setprecision(3) << num << "%\n";
	}

	return 0;
}

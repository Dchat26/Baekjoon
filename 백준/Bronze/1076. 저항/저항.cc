#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string, int> color = {
		{"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
		{"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
	};

	string s1, s2, s3;
	if (!(cin >> s1 >> s2 >> s3)) return 0;

	long long result = color[s1] * 10 + color[s2];

	int zero = color[s3];
	for (int i = 0; i < zero; i++) result *= 10;

	cout << result << "\n";

	return 0;
}

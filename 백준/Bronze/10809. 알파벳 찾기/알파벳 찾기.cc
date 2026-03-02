#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Alphabet(vector<int>& alphabet, const string& s) {
	for (int i = 0; i < s.length(); i++) {
		int index = s[i] - 'a';

		if (alphabet[index] == -1) {
			alphabet[index] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << (i == 25 ? "" : " ");
	}
	cout << "\n";
}



int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	if (!(cin >> s)) return 0;

	vector<int> alphabet(26, -1);

	Alphabet(alphabet, s);

	return 0;
}
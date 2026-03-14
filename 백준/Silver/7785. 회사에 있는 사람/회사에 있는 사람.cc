#include <iostream>
#include <set>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	if (!(cin >> n)) return 0;

	set<string, greater<string>> s;
	while (n--) {
		string name, cmd;
		if (!(cin >> name >> cmd)) return 0;

		if (cmd == "enter") s.insert(name);
		else s.erase(name);
	}

	for (auto name : s) cout << name << "\n";

	return 0;
}
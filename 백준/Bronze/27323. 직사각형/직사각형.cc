#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 0, b = 0;
	if (!(cin >> a >> b)) return 0;

	cout << a * b << "\n";
	
	return 0;
}
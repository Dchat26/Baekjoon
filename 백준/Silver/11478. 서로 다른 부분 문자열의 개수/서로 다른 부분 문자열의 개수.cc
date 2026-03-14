#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string n;
    if (!(cin >> n)) return 0;

    unordered_set<string> s;
    int l = n.length();

    for (int i = 0; i < l; i++) {
        for (int j = 1; i + j <= l; j++) {
            s.insert(n.substr(i, j));
        }
    }

    cout << s.size() << "\n";

    return 0;
}
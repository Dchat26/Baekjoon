#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int total_time = 0;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
        case 'A': case 'B': case 'C':
            total_time += 3; break;
        case 'D': case 'E': case 'F':
            total_time += 4; break;
        case 'G': case 'H': case 'I':
            total_time += 5; break;
        case 'J': case 'K': case 'L':
            total_time += 6; break;
        case 'M': case 'N': case 'O':
            total_time += 7; break;
        case 'P': case 'Q': case 'R': case 'S':
            total_time += 8; break;
        case 'T': case 'U': case 'V':
            total_time += 9; break;
        case 'W': case 'X': case 'Y': case 'Z':
            total_time += 10; break;
        }
    }
    cout << total_time << "\n";

    return 0;
}
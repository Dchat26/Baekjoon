#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SolveAverage() {
    int n = 0;

    if (!(cin >> n)) return;

    vector<double> score(n);
    double max_val = 0;

    for (int i = 0; i < n; i++) {
        if (!(cin >> score[i])) break;

        if (score[i] > max_val) {
            max_val = score[i];
        }
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (score[i] / max_val) * 100;
    }

    cout << sum / n << "\n";
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    SolveAverage();

    return 0;
}
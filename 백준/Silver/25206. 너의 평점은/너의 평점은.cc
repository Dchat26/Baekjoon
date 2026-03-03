#include <iostream>
#include <iomanip>
using namespace std;

double getGradeScore(string grade) {
	if (grade == "A+") return 4.5;
	else if (grade == "A0") return 4.0;
	else if (grade == "B+") return 3.5;
	else if (grade == "B0") return 3.0;
	else if (grade == "C+") return 2.5;
	else if (grade == "C0") return 2.0;
	else if (grade == "D+") return 1.5;
	else if (grade == "D0") return 1.0;
	else if (grade == "F") return 0.0;
	else return -1.0;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string subject, grade;
	double credit = 0.0;
	double total_credit = 0.0;
	double total_score = 0.0;

	for (int i = 0; i < 20; i++) {
		if (!(cin >> subject >> credit >> grade)) break;

		if (grade == "P") continue;

		double gradescore = getGradeScore(grade);
		total_credit += credit;
		total_score += credit * gradescore;
	}

	cout << fixed << setprecision(6);

	if (total_credit != 0) {
		cout << total_score / total_credit << "\n";
	}
	else {
		cout << 0.000000 << "\n";
	}

	return 0;
}
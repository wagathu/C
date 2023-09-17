#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<queue>
#include<string>
#include<istream>

using namespace std;

class Q {

public:
	void plan();
};

void Q::plan() {
	int mark[10];
	int col_width = 7;
	int i, j;
	const int name_width = 35;
	const int col_names = 35;
	int col_name = 10;
	const std::string sep = " |";
	int size;

	cout << "Enter the number of students" << endl;
	cin >> size;
	string fullname[500][20];
	for (i = 0; i < size; i++) {
		cout << "Enter the Student's full name" << endl;
		getline(cin, fullname[i][10]);
		getline(cin, fullname[i][10]);
		cout << "Enter the student's marks " << endl;
		cin >> mark[i];
	}
	system("CLS");
	system("Color E");
	cout << "THE MARKS AND GRADES ARE AS FOLLOWS" << endl;
	cout << "\n" << endl;

	sort(mark, mark + size,greater<int>());
	cout << "\n" << endl;
	cout << "---------------------------------------------------------------------------" << sep << endl;
	cout << setw(col_names) << left << "Name" << setw(col_name) << sep << setw(col_name) << "Marks" << setw(col_name) << sep << setw(col_name) << "Grade" << sep << endl;

	cout << "---------------------------------------------------------------------------" << sep << endl;

	for (j = 0; j < size; j++)
	{
		if (mark[j] >= 0 && mark[j] <= 29)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "E" << sep << endl;
		else if (mark[j] >= 30 && mark[j] <= 34)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "D-" << sep << endl;

		else if (mark[j] >= 35 && mark[j] <= 39)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "D" << sep << endl;

		else if (mark[j] >= 40 && mark[j] <= 44)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "D+" << sep << endl;

		else if (mark[j] >= 45 && mark[j] <= 49)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "C-" << sep << endl;

		else if (mark[j] >= 50 && mark[j] <= 54)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "C" << sep << endl;

		else if (mark[j] >= 55 && mark[j] <= 59)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "C+" << sep << endl;

		else if (mark[j] >= 60 && mark[j] <= 64)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "B-" << sep << endl;

		else if (mark[j] >= 65 && mark[j] <= 69)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "B" << sep << endl;

		else if (mark[j] >= 70 && mark[j] <= 74)

			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "B+" << sep << endl;

		else if (mark[j] >= 75 && mark[j] <= 79)
			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "A-" << sep << endl;


		else
			cout << left << setw(name_width) << fullname[j][10] << setw(col_name) << setw(col_name) << sep << setw(col_name) << mark[j] << setw(col_name) << sep << setw(col_name) << "A" << sep << endl;
		cout << "---------------------------------------------------------------------------" << sep << endl;

	}
};


int main()
{
	Q q;
	q.plan();
	return 0;
}


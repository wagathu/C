
#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
	return(num1 + num2);
}

int main()
{
	int results1;
	float results2;
	results1 = add <int>(2, 3);
	results2 = add <float>(4.5, 8.9);
	double results3 = add <double>(4.555555, 6.777777);
	cout << results1 << endl << results2 << endl << results3;
	return 0;
}
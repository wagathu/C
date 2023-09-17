
#include<iostream>
#include<cmath>

using namespace std;

void calcFunction()
{
	float x, i;
	cout << "Enter the number you want to find the squareroot for" << endl;
	cin >> i;
	cout << "the squareroot of " << i << " is " << sqrt(i) << endl;
}

int main()
{
	calcFunction();
	return 0;
}

#include<iostream>
using namespace std;

void add(int a, int b) 
{
	cout << "The sum is = " << (a + b);
}

void add(double a, double b) 
{
	cout << endl<< "The sum is = " << (a + b);
}

int main()
{
	add(10, 30);
	add(10.4, 10.888);
	return 0;

}
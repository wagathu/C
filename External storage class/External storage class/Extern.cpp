
#include<iostream>
using namespace std;

// Declaring the variable to be used as external

int x;
void externStorageClass()
{
	// telling the compiler that the variable
	// x is an extern variable and has been
	// defined elsewhere (above the main
	// function)
	extern int x;
	/*print the value of external variable x*/
	cout << "The value of the external variable 'x' is " << x << endl;
	/*Modifying the external variable */
	x = 2;
	//Printing the value of the modified external variable
	cout << "The value of the modified external variable 'x' is " << x << endl;
}
int main()
{
	externStorageClass();
	return 0;
}
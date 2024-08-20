#include <iostream>
using namespace std;
int main() {

	//how to find greater number (^_^)

	int a, b, c;
	cout<< "Enter a number: ";
	cin>> a;
	cout << "Enter a number: ";
	cin >> b;
	cout << "Enter a number: ";
	cin >> c;
	if( (a < b)&&(c<b)) {
		cout << "Largest number is:   " << b;
	}
	if ((a < c)&& (c >b)) {
		cout << "Largest number is:  " <<c;

	}
	if ((a>b) && (c <a))
	{	cout << "Largest number is:  " <<a ;

	}
	
	if ((a =b) && (c =a))
	{
		cout << "All numbers are Equal";

	}

	return 0;
}
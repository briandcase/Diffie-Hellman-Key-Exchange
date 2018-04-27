// Brian Case
// CS 3318
#include <iostream>
using namespace std;

long long int key(long long int a, long long int b, long long int c)
{
	
	return (((long long int)pow(a, b)) % c);
	
}

int main()
{
	long long int g = 0;
	long long int p = 0;
	long long int x = 0;
	long long int y = 0; 
	long long int akey = 0; 
	long long int bkey = 0;
	int a = 0;
	int b = 0;

	while (g < 1 || g > 10000)
	{
		cout << "Please enter a prime number, in the range 1 to 10000: " << endl;
		cin >> g;
	}
	
	while (p < 1 || p > 10000)
	{
	    cout << "Please enter a prime number, in the range 1 to 10000: " << endl;
		cin >> p;
	}
	
	while (a < 1 || a > 100)
	{
		cout << "User A, please enter a number in the range of 1 to 100: " << endl;
		cin >> a;
	}
	
	while (b < 1 || b > 100)
	{
		cout << "User B, please enter a number in the range of 1 to 100: " << endl;
		cin >> b;
	}
	

	x = key(p,a,g);
	y = key(p,b,g);

	akey = key(y,a,g);
	bkey = key(x,b,g);

	cout << "The secret key for A is: " << akey << endl;
	cout << "The secret key for B is: " << bkey << endl;

	system("pause");
	return 0;
}
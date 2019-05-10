#include <iostream>
#include "func.h"

using namespace std;

int main()
{
	f(3);
	cout << "x is now " << x << endl;
	cout << "g() returned " << g(4.56) << endl;
	cout << "x is now " << x << endl;
	cout << "h() returned " << h() << endl;
	cout << "x is now " << x << endl;
	return 0;
}
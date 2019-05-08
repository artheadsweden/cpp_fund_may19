#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "Hi there every one";
	cout << s1.substr(3, 9) << endl;

	string* s2 = new string("Hi there every one");
	cout << (*s2).substr(3, 9) << endl;
	cout << s2->substr(3, 9) << endl;

	delete s2;
	return 0;
}
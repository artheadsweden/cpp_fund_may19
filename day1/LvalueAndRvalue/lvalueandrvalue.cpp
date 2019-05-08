#include <iostream>
#include <string>


using namespace std;

void func(int& a)
{
	cout << "a is a lvalue" << endl;
}


void func(int&& a)
{
	cout << "a is a rvalue" << endl;
}

int main()
{
	int x = 10;
	func(move(x));
	func(15);
	string name1 = "John";
	string name2 = move(name1);

	cout << "!" << name1 << "!" << endl;
	cout << "!" << name2 << "!" << endl;

	return 0;
}
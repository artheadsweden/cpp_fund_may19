#include <iostream>
#include <string>

using namespace std;

template<typename T>
T twice(T a)
{
	return a + a;
}

int main()
{
	cout << twice(4) << endl;
	string s = "hi";
	cout << twice(s) << endl;

	auto l_twice = [](auto a) { return a + a; };

	cout << l_twice(4) << endl;
	cout << l_twice(s) << endl;

	return 0;
}
#include <iostream>

using namespace std;

void my_func(int a)
{
	cout << a << endl;
}

int main()
{
	int x = 10;
	my_func(x);
	int* i_ptr = new int(14);
	delete i_ptr;
	i_ptr = nullptr;
	return 0;
}
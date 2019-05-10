#include <iostream>
#include <string>
#include <memory>

using namespace std;

class MyClass
{
public:
	MyClass(string n) : name(n)
	{
		cout << "Constructor for " << name << endl;
	}

	~MyClass()
	{
		cout << "Destructor for " << name << endl;
	}

	void hi()
	{
		cout << "hi" << endl;
	}

	string get_name()
	{
		return name;
	}

private:
	string name;
};

int main()
{
	MyClass* mc_ptr = new MyClass("First");
	delete mc_ptr;
	cout << "Unique pointers" << endl;
	{
		unique_ptr<MyClass> u_ptr(new MyClass("Second"));
		
		auto u_ptr3 = make_unique<MyClass>("Third");
		u_ptr3->hi();
		unique_ptr<MyClass> u_ptr2 = move(u_ptr);
	}

	cout << "Shared pointers" << endl;
	{
		shared_ptr<MyClass> s_ptr(new MyClass("Shared 1"));
		auto s_ptr2 = s_ptr;
		cout << s_ptr->get_name() << endl;
		cout << s_ptr2->get_name() << endl;
		auto s_ptr3 = make_shared<MyClass>("Shared 2");
	}
	cout << "We are done" << endl;
}
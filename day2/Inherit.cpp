#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
	Shape(int w, int h): width(w), height(h){}
	virtual int get_area() = 0;
	
protected:
	int width;
	int height;
};

class Rectangle : public Shape
{
public:
	Rectangle(int w, int h): Shape(w, h){}
	int get_area()
	{
		return width * height;
	}
};

class Triangle : public Shape
{
public:
	Triangle(int w, int h): Shape(w, h){}
	int get_area()
	{
		return width * height / 2;
	}
};

void check_area(Shape* shape)
{
	cout << shape->get_area() << endl;
}

int main()
{
	Rectangle r1(20, 10);
	Rectangle r2(30, 20);
	Rectangle r3(40, 30);
	Triangle t1(20, 10);
	Triangle t2(30, 20);
	Triangle t3(40, 30);
	//check_area(&r1);
	//check_area(&t1);

	vector<Shape*> shapes{ &r1, &r2, &r3, &t1, &t2, &t3 };
	for (auto s : shapes)
	{
		cout << s->get_area() << endl;
	}

	return 0;
}
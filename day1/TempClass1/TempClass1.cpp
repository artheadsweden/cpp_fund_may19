#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(float t);
	float get_farenheit();
	float get_celsius();
	void set_temp(float t);
private:
	float temp;
};

Temperature::Temperature(): temp(0.0) {}

Temperature::Temperature(float t): temp(t) {}

float Temperature::get_farenheit()
{
	return temp * 9 / 5 + 32;
}

float Temperature::get_celsius()
{
	return temp;
}

void Temperature::set_temp(float t)
{
	temp = t;
}

int main()
{
	Temperature t1(12.1f);
	Temperature t2(14.1f);
	Temperature t3(15.1f);

	cout << t1.get_celsius() << endl;
	cout << t1.get_farenheit() << endl;

	cout << t2.get_celsius() << endl;
	cout << t2.get_farenheit() << endl;

	cout << t3.get_celsius() << endl;
	cout << t3.get_farenheit() << endl;

	return 0;
}
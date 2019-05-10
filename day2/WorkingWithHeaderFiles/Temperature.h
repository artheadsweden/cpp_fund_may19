#pragma once
#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	explicit Temperature(float t);
	float get_farenheit() const;
	float get_celsius() const;
	void set_temp(float t);

	//Temperature add(const Temperature& other);
	Temperature operator +(const Temperature& other);
	Temperature operator +(const float& other);
	Temperature operator -(const Temperature& other);
	Temperature operator *(const Temperature& other);
	Temperature operator /(const Temperature& other);
	Temperature operator ++();
	Temperature operator ++(int);
	Temperature operator --();
	Temperature operator --(int);

	friend Temperature operator +(const float& first, const Temperature& second);
	friend ostream& operator <<(ostream& os, const Temperature& other);

private:
	float temp;
};
#include <iostream>
using namespace std;

class Complex
{
	double re, im;

public:
	Complex(double r, double i) { re = r; im = i; }
	Complex() { re = 0; im = 0; }

	double getR() const { return this->re; }
	double getI() const { return this->im; }

	Complex operator+(const Complex& cal) {
		Complex result(this->re + cal.re, this->im + cal.im);
		return result;
	}

	Complex operator-(const Complex& cal2) {
		Complex result(this->re - cal2.re, this->im - cal2.im);
		return result;
	}

	



	void print() {
		cout << re << " + i" << im << endl;
	}


};

Complex operator+(const Complex& cal2, double num) {
	Complex result(cal2.getR() + num, cal2.getI());
	return result;
}

Complex operator-(const Complex& cal2, double num) {
	Complex result(cal2.getR() - num, cal2.getI());
	return result;
}


int main()
{
	Complex a(.3, 8.4), b(4.5, 5.2), c(2.0, 7.7);
	Complex sum, dif;
	sum = a + b + 3.0;
	sum.print();

	dif = a - b - 2.0;
	cout << "a - b - 2.0 = ";
	dif.print();

	sum = a + b + 5 - c - 8;
	cout << "a + b + 5 - c - 8 = ";
	sum.print();
	return 0;
}
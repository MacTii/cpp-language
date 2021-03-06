#include <iostream>

#include "rcstring.h"
#include "rctext.h"
#include "cref.h"

using namespace std;

int main()
{
	rcstring a, b, c;
	a = "10";
	b = "ala ma kota";
	cout << a << " " << b << endl; // 10 ala ma ma kota
	c = a + b;
	cout << c << endl; // 10ala ma kota
	c = a + rcstring(" ") + b;
	cout << c << endl; //10 ala ma kota
	rcstring d("a");
	cout << d << endl; //a
	d += "ula";
	cout << d << endl; //aula
	d += "15";
	cout << d << endl; //aula15
	cout << d[3] << endl; //a
	d[3] = 'b';
	cout << d << endl; //aulb15
	d[2] = d[1] = d[0];
	cout << d << endl; //aaab15
	int x = a.atoi();
	cout << x << endl;
	rcstring text = "To jest TOMEK";
	text.toLower();
	cout << text << endl;

	return 0;
}
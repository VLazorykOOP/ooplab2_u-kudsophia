#include <iostream>
using namespace std;
#include <clocale>
#include "Examples.h"
void MenuExamples() {
	cout << "     Examples   \n";
	cout << "    1.  Приклад переводу цілого числа з десяткової системи в двійкову \n";
	cout << "    2.  Приклад обчислення виразу використовуючи тільки побітові операції. \n";
	cout << "    3.   \n";
	cout << "    4.   \n";
	cout << "    5.   \n";
	cout << "    6.  Exit \n";
}
void Examples()
{   // Examples of tasks using bitwise operations
    // Приклади задач з використанням побітових операцій
	setlocale(LC_CTYPE, "ukr");  // 
    cout << " Examples of tasks using bitwise operations \n";
	cout << " Приклади задач з використанням побiтових операцiй \n";
	char ch = '5';
	do {
		system("cls");
		MenuExamples();
		ch = cin.get();

		cin.get();

		switch (ch) {
		case '1': Example1();   break;
		case '2': Example2();   break;
		case '3': Example3();   break;
		case '4': Example4();   break;
		case '5':  Example5(); break;
		case '6': return ;
		}
		cout << " Press any key and enter\n";
		ch = cin.get();
	} while (ch != '6');

	return ;
}

#include <clocale>
//  Приклад переводу цілого числа з десяткової системи в двійкову
void Example1()
{
	char out[17];
	int i, in, ix, n = 0;
	double x;
	
	cout << " Введiть цiле додатне число:";
	cin >> in;
	if (in != 0) {
		x = in;
		do {
			x = x / 2.;
			ix = (int)x;
			if ((x - ix) != 0) out[n] = '1';
			else out[n] = '0';
			n++;
			x = ix;
		} while (x >= 1);
	}
	cout << " Результат:";
	for (i = n - 1; i >= 0; i--)
		cout << out[i];
	cin.get();

	return;
}
/*
* Приклад обчислення виразу використовуючи тільки побітові операції.
* Вираз : x = 33 * a + (a * 16 – b * 17) / 8 + (15 * b + 300) / 128.
*
*/
void Example2()
{
	int a, b, x, y;
	cout << " Введiть a  b ";
	cin >> a >> b;
	x = a + (a << 5) + (((a << 4) - b - (b << 4)) >> 3) + (((b << 4) - b + 300) >> 7);
	y = a * 33 + (a * 16 - b * 17) / 8 + (15 * b + 300) / 128;
	cout << "  x=" << x << "  y=" << y << " a=" << a << "  b=" << b << endl;
	cin.get();
	cin.get();
	return;
}

void Example3() {

}
void Example4() {

}
void Example5() {

}
#include <iostream>
using namespace std;
#include <clocale>
#include <Windows.h>
#include "Examples.h"
enum  ConsoleColor //: unsigned int
{							//0000 IRGB  
	Black = 0x00,			//0000 0000
	Blue = 0x01,			//0000 0001
	Green = 0x02,			//0000 0010
	Cyan = 0x03,			//0000 0011
	Red = 0x04,				//0000 0100
	Magenta = 0x05,			//0000 0101
	Brown = 0x06,			//0000 0110
	LightGray = 0x07,		//0000 0111 
	DarkGray = 0x08,		//0000 1000
	LightBlue = 0x09,		//0000 1001
	LightGreen = 0x0a,		//0000 1010
	LightCyan = 0x0b,		//0000 1011
	LightRed = 0x0c,		//0000 1100
	LightMagenta = 0x0d,	//0000 1101
	Yellow = 0x0e,			//0000 1110
	White = 0x0f			//0000 1111
};
void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Console, (WORD)((background << 4) | text));
}

void MenuExamples() {
	SetColor(Blue, Black);
	cout << "     Examples   \n";
	SetColor(Green, Black);
	cout << "    1.  Приклад переводу цілого числа з десяткової системи в двійкову \n";
	cout << "    2.  Приклад обчислення виразу використовуючи тiльки побiтовi операцiї. \n";
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
		case '6': SetColor(White, Black); return ;
		}
		cout << " Press any key and enter\n";
		ch = cin.get();
	} while (ch != '6');
	SetColor(White, Black);
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
	cout << " Результат: \n";
	for (i = n - 1; i >= 0; i--)
		cout << out[i];
	cout << endl;
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
	cout << "Приклад обчислення виразу використовуючи тiльки побiтовi операцiї.\n";
	cout << "Вираз : x = 33 * a + (a * 16 – b * 17) / 8 + (15 * b + 300) / 128. \n";
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
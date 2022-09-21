// OOPLab2Tpl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "MyTask.h" 

void exampl1();
void exampl2();
int main()
{
    cout << "OOP. Template for laboratory work #2.\n";

    char ch = '5';
    do {
        system("cls");
        MenuTask();
        ch = cin.get();
        
        cin.get();

        switch (ch) {
        case '1': task1();   break;
        case '2': task1();   break;
        case '3': task1();   break;
        case '4': task1();   break;
		case '6':  exampl1(); break;
		case '7':  exampl2(); break;
        case '5': return 0;
	    }
        cout << " Press any key and enter\n";
        ch = cin.get();
    } while (ch != 27);

    return 0;
}

#include <clocale>
//  Приклад переводу цілого числа з десяткової системи в двійкову
void exampl1()
{
	char out[255];
	int i, in, ix, n = 0;
	double x;
	setlocale(LC_CTYPE, "ukr");
	cout << " Введіть ціле додатне число:";
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

	return ;
}
/*
* Приклад обчислення виразу використовуючи тільки побітові операції.  
* Вираз : x = 33 * a + (a * 16 – b * 17) / 8 + (15 * b + 300) / 128.
*
*/
void exampl2()
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
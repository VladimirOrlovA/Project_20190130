#include <iostream>
#include <iomanip>  // Ёто инструменты дл€ работы с форматированием вывода. „аще всего примен€етс€ с оператором cout << .
#include <Windows.h> 

using namespace std;

bool isUpper(char c) {
	if (c >= 'A' && c <= 'Z')
		return true;
	else
		return false;
}

float cylinder(float r, float h)
{
	return 3.14*r*r*h;
}

char compair(int a, int b)
{
	if (a > b) return '>';
	else if (a < b) return '<';
	else  return '=';
}

float resistance(float r1, float r2, char type)
{
	if (type == 'p')  return (r1*r2) / (r1 + r2);  // расчет параллельного сопротивлени€
	else if (type == 'c')	return r1 + r2;			// расчет последовательного соединени€
	else return -1;									// выводит -1 если введенный символ отличаетс€ от p c 
}

int factorial(int n)
{
	int i = 1, f = 1;

	while (i < n)
	{
		i++;
		f *= i;
		cout << i << ' ' << f << endl;
	}

	return f;
}

float dohod(float vklad, float stavka, float srok)
{
	return vklad * (stavka / 365)*srok;
}

bool glasn(char bukva)
{
	char a[11] = "аеЄиоуыэю€";

	for (int i = 0; i < 10; i++) {
		if (a[i] == bukva) return 1;
	}
	return 0;
}


void stroka(int l, char ch)
{

	for (int i = 0; i < l; i++)
		cout << ch;
}

void paralep(int a, int b, int c)
{
	cout << (a*c + a * b + b * c) << endl;
	cout << (a*b*c) << endl;
}

void print_frame(int x, int y, int length, int height) {
	for (int i = 0; i < y; i++)
		cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < length + x; j++) {
			if (j < x)
				cout << " ";
			else {
				if (j == x || j == length + x - 1 || i == 0 || i == height - 1)
					cout << '*';
				else
					cout << ' ';
			}
		}
		cout << endl;
	}
}

int main()
{

	SetConsoleCP(866);			// подключаем кириллицу дл€ ввода  1251 866
	SetConsoleOutputCP(866);	// подключаем кириллицу дл€ вывода


	print_frame(3, 5, 10, 8);	// вызов функции с 4-м€ аргументами

	cout << "\n\n\n";


	system("pause");
	return 0;
}

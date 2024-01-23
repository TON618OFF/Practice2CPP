
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

unsigned int factorial(unsigned int a)
{
	if (a == 0)
		return 1;
	return a * factorial(a - 1);
}


int main()
{

	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int mode;
	cout << "Выберите режим калькулятора: \n";
	cout << "1. Сложение\n";
	cout << "2. Вычитание\n";
	cout << "3. Произведение\n";
	cout << "4. Частное\n";
	cout << "5. Возведение в степень\n";
	cout << "6. Нахождения квадратного корня\n";
	cout << "7. Нахождение 1 процента от числа\n";
	cout << "8. Факториал\n";
	cout << "9. Закрыть программу\n\n";
	cout << "Выберите режим калькулятора: \n";
	cin >> mode;
	if (mode == 1)
	{
		float a, b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		float c = a + b;
		cout << c;
		cout << "\n\n";
		main();
	}
	else if (mode == 2)
	{
		float a, b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		float c = a - b;
		cout << c;
		cout << "\n\n";
		main();
	}
	else if (mode == 3)
	{
		float a, b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		float c = a * b;
		cout << c;
		cout << "\n\n";
		main();
	}
	else if (mode == 4)
	{
		float a, b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		float c = a / b;
		cout << c;
		cout << "\n\n";
		main();
	}
	else if (mode == 5)
	{
		float a, b;
		cout << "Введите основное число: ";
		cin >> a;
		cout << "Введите степень: ";
		cin >> b;
		float x{ pow(a, b) };
		cout << "Получившееся число: ";
		cout << x;
		main();
	}
	else if (mode == 6)
	{
		float a;
		cout << "Введите число, из которого хотите вывести корень: ";
		cin >> a;
		float x{ sqrt(a) };
		cout << "Получившийся корень числа: ";
		cout << x;
		main();
	}
	else if (mode == 7)
	{
		float a;
		cout << "Введите число для получения 1 процента от него: ";
		cin >> a;
		float x = (a / 100) * 1;
		cout << "Полученный один процент: ";
		cout << x;
	}
	else if (mode == 8)
	{
		int a;
		cout << "Введите число факториала: ";
		cin >> a;
		cout << "Факториал числа: " << factorial(a) << endl;
		return 0;
	}
	else if (mode == 9)
	{
		exit(0);
	}
}


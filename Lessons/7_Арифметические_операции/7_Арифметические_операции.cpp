﻿/*
 * Author: Nikolay Dvurechensky
 * Site: https://www.dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 12 мая 2025 02:26:45
 * Version: 1.0.3
 */

// 7_Арифметические_операции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

/*
	Операторы:
	- Унарные
	- Бинарные (+ - * / % == != > < >= <=)
	- Тернарные 
*/

int main()
{
	setlocale(LC_ALL, "Rus");

#pragma region Унарные
	int a = 5;
	cout << a << endl;
	a = -a;
	cout << a << endl;
#pragma endregion
#pragma region Бинарные
	int k = 5, l = 10, c;
	cout << k + l << endl;
	c = k * l + k;			// приоритет операций можно изменить скобками ()
	cout << c << endl;
#pragma endregion
#pragma region ДЗ
	/*
	* Введите три числа и выведите на экран
	* сумму, произведение и среднее арифметическое
	*/
	int dzA, dzB, dzC;
	cout << "Введите три числа: ";
	cin >> dzA >> dzB >> dzC;
	cout << "Сумма: " << dzA + dzB + dzC << "\n Произведение: " << dzA * dzB * dzC << endl;
	cout << "Среднее арифметическое: " << (double)(dzA + dzB + dzC) / 3 << endl;
#pragma endregion
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

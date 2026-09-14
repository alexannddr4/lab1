#include <iostream>
#include <cmath>
using namespace std;

int main (){
	// Задача 30
	cout << "Begin 30" << endl;
	// Декларація змінних
	int a, b, S;
	// Введення змінних
	cout << "Enter side a, b: " << endl;
	cin >> a >> b;
	// Розрахунок
	S = (a * b) / 2;
	// Виведення результату
	cout << "Square: " << S << endl;
	cout << endl;

	// Задача 44
	cout << "Begin 44" << endl;
	// Декларація змінних
	int a1, b1, result;
	// Введення змінних
	cout << "Enter a, b: " << endl;
	cin >> a1 >> b1;
	// Розрахунок за модулем
	result = abs(a1 - b1);
	// Виведення результату
	cout << "Abs: " << result << endl;
	cout << endl;

	// Задача 28
	cout << "Begin 28" << endl;
	// Декларація змінних
	double V1, V2, S1, T;
	// Введення змінних
	cout << "Enter V1, V2, S, T: " << endl;
	cin >> V1 >> V2 >> S1 >> T;
	// Розрахунок загального шляху
	double total = (V1 + V2) * T;
	// Розрахунок за модулем
	double result1 = abs(S1 - total);
	// Виведення результату
	cout << "Result: " << result1 << endl;
	return 0;
}
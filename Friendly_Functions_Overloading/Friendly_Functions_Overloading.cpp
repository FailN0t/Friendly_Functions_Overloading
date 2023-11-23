// Friendly_Functions_Overloading.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Rectagle.h"
#include <Windows.h>

class Point2;

class Point {
	int x = 6;
	friend Point2;
	void print() {
		cout << x << endl;
	}
	friend void sum(Point2& point2, int i);
	friend void operator +=(Point2& point2, int n);
public:
	operator double() {
		return (double)(x + 10);
	}
	operator bool() {
		return true;
	}
	
};

class Point2 {
	Point point;
public:
	void print() {
		point.print();
	}
	void print2() {
		cout << point.x << endl;
	}
	friend void sum(Point2& point2, int i);
	friend void operator +=(Point2& point2, int n);
};

void sum(Point2& point2, int i) {
	point2.point.x += i;
}

void operator +=(Point2& point2, int n) {
	point2.point.x += n;
}



int main()
{
	Rectangle1 rec(3, 3, 2, 3);
	for (size_t i = 0; i < 10; i++)
	{
		system("cls");
		cout << rec;
		rec += 1;
		Sleep(500);
	}

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

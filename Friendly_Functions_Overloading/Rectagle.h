#pragma once
#include <iostream>
using namespace std;
class Rectangle1 {
	int x;
	int y;
	int xO;
	int yO;
public:

	Rectangle1(int x, int y, int xO, int yO) :x{ x }, y{ y }, xO{ xO }, yO{ yO } {}
	Rectangle1() :Rectangle1(3, 3, 0, 0) {}
	friend ostream& operator << (ostream& ost, Rectangle1& rec) {
		for (size_t i = 0; i < rec.yO; i++)
		{
			ost << endl;
		}
		

		for (size_t i = 0; i < rec.y; i++)
		{
			for (size_t j = 0; j < rec.x; j++)
			{
				for (size_t i = 0; i < rec.xO; i++)
				{
					ost << " ";
				}
				ost << "#";
			}
			ost << endl;
		}

		return ost;
	}
	void operator += (int n) {
		x += n;
		y += n;
	}
};
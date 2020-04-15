// 132p 다른 생성자를 추가로 부르는 생성자 초기화 함수

#include <iostream>

using namespace std;

class MyPoint
{
public:
	MyPoint(int x) 
	{
		cout << "MyPoint(int)" << endl;

		if (x > 100)
			x = 100;

		this->x = x;
	}

	MyPoint(int x, int y) : MyPoint(x)
	{
		cout << "MyPoint(int, int)" << endl;

		if (y > 200)
			y = 200;

		this->y = y;
	}

	void print() 
	{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}

private:
	int x = 0;
	int y = 0;
};

int main()
{
	MyPoint begin(110);
	begin.print();

	MyPoint end(50, 250);
	end.print();

	return 0;
}
// 344p dynamic_cast ��� ��

#include <iostream>

using namespace std;

class Shape 
{
public:
	Shape() {}
	virtual ~Shape() {}
	
	virtual void draw() 
	{
		cout << "Shape::draw()" << endl;
	}
};

class Rectangle : public Shape 
{
public:
	virtual void draw() 
	{
		cout << "Rectangle::draw()" << endl;
	}
};

class Circle : public Shape 
{
public:
	virtual void draw() 
	{
		cout << "Circle::draw()" << endl;
	}
};

int main() 
{
	cout << "���� ��ȣ�� �Է��ϼ���. [1. �簢��, 2. ��]: ";
	int input;
	cin >> input; 

	Shape* pShape = nullptr;

	switch (input)
	{
		case 1:
			pShape = new Rectangle; 
			break;

		case 2:
			pShape = new Circle;
			break;

		default:
			pShape = new Shape;
	}

	pShape->draw();

	// ���ۿ�
	Rectangle* pRect = dynamic_cast<Rectangle*>(pShape);

	if (pRect)
		cout << "Rectangle::draw()" << endl;
	else
	{
		Circle* pCircle = dynamic_cast<Circle*>(pShape);

		if (pCircle)
			cout << "Circle::draw()" << endl;
		else
			cout << "Shape::draw()" << endl;
	}

	return 0;
}
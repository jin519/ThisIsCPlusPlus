// 336p �߻� �ڷ����� ȿ����

#include <iostream>

using namespace std;

#define DEFAULT_FARE 1000

class Person 
{
public:
	Person() {}
	virtual ~Person() 
	{
		cout << "~Person()" << endl;
	}

	virtual void calcFare() = 0; 

	virtual unsigned int getFare() 
	{
		return _fare; 
	}

protected:
	unsigned int _fare = 0; 
};

class Baby : public Person 
{
public:
	virtual void calcFare() 
	{
		_fare = 0; 
	}
};

class Child : public Person 
{
public:
	virtual void calcFare()
	{
		_fare = ((DEFAULT_FARE * 50) / 100);
	}
};

class Teen : public Person
{
public:
	virtual void calcFare()
	{
		_fare = ((DEFAULT_FARE * 75) / 100);
	}
};

class Adult : public Person
{
public:
	virtual void calcFare()
	{
		_fare = DEFAULT_FARE;
	}
};

int main() 
{
	Person* people[3] = { nullptr };
	int age; 

	for (auto& person : people) 
	{
		cout << "���̸� �Է��ϼ���: ";
		cin >> age; 

		if (age < 8)
			person = new Baby;
		else if (age < 14)
			person = new Child;
		else if (age < 20)
			person = new Teen;
		else
			person = new Adult;

		person->calcFare(); 
	}

	for (auto& person : people) 
		cout << person->getFare() << "��" << endl;

	for (auto& person : people)
		delete person; 

	return 0; 
}
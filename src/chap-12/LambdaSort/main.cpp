// 506p 함수 객체를 람다식으로 바꾼 정렬

#include <iostream>
#include <functional>

using namespace std;

class TestData
{
public:
	TestData()
	{
		__arr[0] = 30;
		__arr[1] = 10;
		__arr[2] = 50;
		__arr[3] = 20;
		__arr[4] = 40;
	}

	void print()
	{
		for (const auto element : __arr)
			cout << element << ' ';
		cout << endl;
	}

	void sort(function<int(int, int)> cmp)
	{
		int tmp;

		for (int i = 0; i < 4; ++i)
		{
			for (int j = i + 1; j < 5; ++j)
			{
				if (cmp(__arr[i], __arr[j]) < 0)
				{
					tmp = __arr[i];
					__arr[i] = __arr[j];
					__arr[j] = tmp;
				}
			}
		}
	}

private:
	int __arr[5];
};

int main()
{
	TestData data;
	
	data.sort([](int a, int b) -> int
		{
			return a - b;
		});
	data.print(); 

	data.sort([](int a, int b) -> int
		{
			return b - a;
		});
	data.print();

	return 0;
}
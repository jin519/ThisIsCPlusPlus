// 50p r-value ÂüÁ¶

#include <iostream>

using namespace std;

int testFunc(int param) 
{
	int result = param * 2;
	return result; 
}

int main()
{
	int input = 0; 
	
	cout << "Input number: "; 
	cin >> input; 

	int&& rData = (input + 5);
	cout << rData << endl;

	int&& result = testFunc(10);

	result += 10;
	cout << result << endl;

	return 0;
}
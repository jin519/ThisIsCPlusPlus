// 54p 연습문제 1번

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name; 

	cout << "이름: ";
	cin >> name; 

	int age;
	
	cout << "나이: ";
	cin >> age; 

	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl;

	return 0;
}
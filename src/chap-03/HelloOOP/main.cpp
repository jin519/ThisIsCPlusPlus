// 106p 클래스를 이용해 객체지향 프로그램으로 변경

#include <cstdio>

// 제작자의 코드
class UserData 
{
public:
	int age;
	char name[32];

	void print() 
	{
		printf("%d, %s\n", age, name);
	}
};

// 사용자의 코드
int main()
{
	UserData user = { 10, "철수" };
	user.print();

	return 0;
}
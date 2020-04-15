// 101p 기존 절차지향 프로그래밍 코드

#include <stdio.h>

// 제작자의 코드
typedef struct UserData 
{
	int age;
	char name[32];
} UserData;

// 사용자의 코드 
int main() 
{
	UserData user = { 20, "철수" };
	printf("%d, %s\n", user.age, user.name); 

	return 0;
}
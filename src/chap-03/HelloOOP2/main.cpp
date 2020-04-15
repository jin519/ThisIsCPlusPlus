// 102p 제작자가 미리 구현한 코드

#include <stdio.h>

// 제작자의 코드
typedef struct UserData 
{
	int age;
	char name[32];
}UserData;

void printData(UserData* pUser) 
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

// 사용자의 코드
int main()
{
	UserData user = { 20, "철수" };
	printData(&user); 

	return 0;
}
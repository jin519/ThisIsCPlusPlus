// 104p 구조체와 함수 관계를 정의

#include <stdio.h>

// 제작자의 코드
typedef struct UserData
{
	int age;
	char name[32];
	void(*printData)(struct UserData* pUser);
}UserData;

void printData(UserData* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

// 사용자의 코드
int main()
{
	UserData user = { 20, "철수", printData };
	user.printData(&user);

	return 0;
}
// 104p ����ü�� �Լ� ���踦 ����

#include <stdio.h>

// �������� �ڵ�
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

// ������� �ڵ�
int main()
{
	UserData user = { 20, "ö��", printData };
	user.printData(&user);

	return 0;
}
// 101p ���� �������� ���α׷��� �ڵ�

#include <stdio.h>

// �������� �ڵ�
typedef struct UserData 
{
	int age;
	char name[32];
} UserData;

// ������� �ڵ� 
int main() 
{
	UserData user = { 20, "ö��" };
	printf("%d, %s\n", user.age, user.name); 

	return 0;
}
// 106p Ŭ������ �̿��� ��ü���� ���α׷����� ����

#include <cstdio>

// �������� �ڵ�
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

// ������� �ڵ�
int main()
{
	UserData user = { 10, "ö��" };
	user.print();

	return 0;
}
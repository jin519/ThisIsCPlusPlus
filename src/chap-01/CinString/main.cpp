// 39p std::cin ����

#include <iostream>
#include <cstdio>
#include <string>

int main()
{
	int age;

	std::cout << "���̸� �Է��ϼ���: ";
	std::cin >> age; 

	char job[32];

	std::cout << "������ �Է��ϼ���: ";
	std::cin >> job;

	std::string name;
	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;

	std::cout << "����� �̸��� " << name << "�̰�, " 
		<< "���̴� " << age << "���̸�, " 
		<< "������ " << job << "�Դϴ�." << std::endl;

	return 0;
}
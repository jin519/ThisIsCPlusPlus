// 367p friend ���� ������ Ŭ����

#include <iostream>
#include <cstring>

using namespace std;

class Node 
{
	friend class MyList; 

public:
	explicit Node(const char* pName) 
	{
		strcpy_s(name, sizeof(name), pName); 
	}

private:
	char name[32]; 
	Node* pNext = nullptr;
};

class MyList 
{
public:
	MyList() {}

	~MyList() 
	{
		Node* pOffset = __pTop; 

		while (pOffset)
		{
			Node* pNext = pOffset->pNext;

			cout << pOffset->name << endl;
			delete pOffset; 
			
			pOffset = pNext; 
		}
	}

	void pushNode(const char* pName) 
	{
		Node* pNode = new Node(pName);

		pNode->pNext = __pTop;
		__pTop = pNode; 
	}

private:
	Node* __pTop = nullptr; 
};

int main() 
{
	MyList list; 

	list.pushNode("�浿");
	list.pushNode("ö��");
	list.pushNode("����");

	return 0;
}
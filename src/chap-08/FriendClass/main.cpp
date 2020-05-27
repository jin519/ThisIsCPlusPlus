// 367p friend 예약어를 선언한 클래스

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

	list.pushNode("길동");
	list.pushNode("철수");
	list.pushNode("영희");

	return 0;
}
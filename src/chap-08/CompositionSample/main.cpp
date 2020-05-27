// 371p Composition 관계

#include <iostream>
#include <cstring>

using namespace std;

class Node 
{
	friend class MyList; 

public:
	explicit Node(const char* pName) 
	{
		strcpy_s(__name, sizeof(__name), pName);
	}

private:
	char __name[32];
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

	void print() 
	{
		Node* pOffset = __pTop; 

		while (pOffset) 
		{
			Node* pNext = pOffset->pNext;
			cout << pOffset->__name << endl;
			pOffset = pNext; 
		}

		system("pause");
	}

private:
	Node* __pTop = nullptr; 
};

class MyUI 
{
public:
	int printMenu() 
	{
		system("cls");
		
		cout << "[1] push [2] print [0] exit: ";
		int input;
		cin >> input; 

		return input;
	}

	void run() 
	{
		char name[32]; 
		int input = 0; 

		while ((input = printMenu()) > 0) 
		{
			switch (input) 
			{
			default:
				break;

			case 1:
				while (getchar() != '\n'); 

				cout << "이름: "; 
				cin >> name;

				__list.pushNode(name);
				break;

			case 2:
				__list.print(); 
			}
		}
	}

private:
	MyList __list; 
};

int main() 
{
	MyUI ui; 
	ui.run(); 

	return 0;
}
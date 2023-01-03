#include <iostream>
using namespace std; 
class Stack
{

	int top, item[100];
public:Stack()
	{
		top = -1;
	}
	int isempty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int isfull()
	{
		if (top >= 99)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void add(int element)
	{
		if (isfull())
		{
			cout << "the stack is full"<<endl;
		}
		else
		{
			top++;
			item[top] = element;
		}
	}
	void drop()
	{
		if (isempty())
		{
			cout << "the stack is empty"<<endl;
		}
		else
		{
			top--;
		}
	}
	void gettop(int& element)
	{
		if (isempty())
		{
			cout << "the stack is empty" << endl;
		}
		else
		{
			element = item[top];
		}
	}
	void print()
	{
		if (isempty())
		{
			cout << "the stack is empty"<<endl;
		}
		else
		{
			cout << "the values of stack =  [ ";
			for (int i = top; i >= 0; i--)
			{
				cout << item[i] << " ";
			}
			cout << "]" << endl;
		}
	}
};
int main()
{
	Stack s;
	int n, element;
	while (true)
	{
		char y,x;
		cout << "are you want to do any operation in stack" "\n" << "1 - yes \n" << "2 - no \n";
		cout << "entre a number of your operation\n";
		while (true)
		{
			cin >> x;
			if (x == '2')
			{
				break;
			}
			else if (x == '1')
			{
				cout << "which operation you want to do in stack \n" << "1 - add\n" << "2 - drop\n" << "3 - print\n";
				cout << "entre a number of your operation\n";
				while (true)
				{
					cin >> y;
					if (y == '1')
					{
						cout << "entre your count of your stack elements you would to add\n";
						cin >> n;
						cout << "entre your elements of your stack\n";
						for (int i = 0; i < n; i++)
						{
							cin >> element;
							s.add(element);
						}
						break;
					}
					else if (y == '2')
					{
						cout << "entre your count of your stack elements you would to drop \n";
						cin >> n;
						for (int i = 0; i < n; i++)
						{
							s.drop();
						}
						break;
					}
					else if (y == '3')
					{
						s.print();
						break;
					}
					else
					{
						cout << "=>your choise is not correct \n=>please intre a correct number of operation\n";
					}
				}
				break;
			}
			else
			{
				cout << "=>your choise is not correct \n=>please intre a correct number of operation\n";
			}
		}
		if (x == '2')
		{
			break;
		}
		
	}
	cout << "the program is ended";
	return 0;
}

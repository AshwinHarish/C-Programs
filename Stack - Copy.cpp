#include<iostream>
#include<exception>
#include<stdlib.h>
using namespace std;
class StackClass
{
	public:
	int stack[100], top, max, i;
	void Push(int);
	void Pop();
	void PrintStack();
	void ShowTop();
};
void StackClass::Push(int key)
{
	try
	{
		if(top==(max-1))
			throw 1;
		stack[++top] = key;
	}
	catch(int)
	{
		cout<<"Overflow\n";
	}
}
void StackClass::Pop()
{
	try
	{
		if(top == -1)
			throw 1.1;
		top--;
	}
	catch(double)
	{
		cout<<"Underflow\n";
	}
}
void StackClass::PrintStack()
{
	try
	{
		if(top == -1)
			throw 'a';
		for(i=0; i<=top; i++)
		cout<<stack[i]<<"\t";
		cout<<endl;
	}
	catch(char)
	{
		cout<<"No element in stack\n";
	}
}
void StackClass::ShowTop()
{
	try
	{
		if(top == -1)
			throw "Top of stack is not pointing to any element\n";
		cout<<"\nTop of stack is "<<stack[top]<<" at position "<<top<<endl;
	}
	catch(const char* s)
	{
		cout<<s;
	}
}

main()
{
	StackClass ob;
	cout<<"\nSize : ";
	cin>>ob.max;
	ob.top=-1;
	int n, a;
	for(;;)
	{
		cout<<"\n1. Push\n2. Pop\n
            3. Print\n4. View Top\n5. Exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
                   	cout<<"Element :";
                   	cin>>a;
	            	ob.Push(a);
                        break;
			case 2:
                        ob.Pop();
                        break;
 			case 3:
                        ob.PrintStack();
                        break;
			case 4:
                        ob.ShowTop();
                        break;
            case 5:
                        exit(0);
			default:
                        cout<<"\nInvalid choice !!\n";
                        break;
		}
	}
}




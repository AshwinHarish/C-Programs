#include<iostream>
#include<exception>
#include<stdlib.h>
using namespace std;
class StackClass
{
	public:
	int stack[100], top, max, i;
	void Push(int) throw(const char*);
	void Pop() throw(const char*);
	void PrintStack()throw(const char*);
	void ShowTop() throw(const char*);
};
void StackClass::Push(int key) throw(const char*)
{
	if(top==(max-1))
		throw "Overflow";
	stack[++top] = key;
}
void StackClass::Pop() throw(const char*)
{
	if(top == -1)
		throw "Underflow";
	top--;
}
void StackClass::PrintStack() throw(const char*)
{
	if(top == -1)
		throw "No element in stack";
	for(i=0; i<=top; i++)
	cout<<stack[i]<<"\t";
	cout<<endl;
}
void StackClass::ShowTop() throw(const char*)
{
	if(top == -1)
		throw "Top of stack is not pointing to any element\n";
	cout<<"\nTop of stack is "<<stack[top]<<" at "<<top<<endl;
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
		cout<<"\n1. Push\n2. Pop\n3. Print\n4. View Top\n5. Exit\n";
		cin>>n;
		try
		{
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
		catch(const char* s)
		{
			cout<<s;
		}
	}
}




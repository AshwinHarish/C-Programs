#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"\nA constructor";
    }
    ~A()
    {
        cout<<"\nA destructor";
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout<<"\nC constructor";
    }
    ~C()
    {
        cout<<"\nC destructor";
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout<<"\nB constructor";
    }
    ~B()
    {
        cout<<"\nB destructor";
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout<<"\nD constructor";
    }
    ~D()
    {
        cout<<"\nD destructor";
    }
};
class W
{
public:
    W()
    {
        cout<<"\nW constructor";
    }
    ~W()
    {
        cout<<"\nW destructor";
    }
};
class X : public W
{
public:
    X()
    {
        cout<<"\nX constructor";
    }
    ~X()
    {
        cout<<"\nX destructor";
    }
};
class Y : public X
{
public:
    Y()
    {
        cout<<"\nY constructor";
    }
    ~Y()
    {
        cout<<"\nY destructor";
    }
};
class Z : public Y
{
public:
    Z()
    {
        cout<<"\nZ constructor";
    }
    ~Z()
    {
        cout<<"\nZ destructor";
    }
};
void call()
{

}
main()
{
    cout<<"\nHybrid Inheritence :";
    D obj1;
    cout<<"\nMultilevel Inheritence :";
    Z obj2;
    return 0;
}

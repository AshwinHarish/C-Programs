#include<iostream>
using namespace std;
class MyClass
{
    public:
    int n, m;
    MyClass(int x, int y)
    {
        n = x;
        m = y;
    }
    void out();
    friend MyClass operator ++(MyClass &obj);
    friend MyClass operator ++(MyClass &obj, int);
};
void MyClass::out()
{
    cout<<endl<<n<<endl<<m;
}
MyClass operator ++(MyClass &ob)
{
    ++ob.n;
    ++ob.m;
    return ob;
}
MyClass operator ++(MyClass &ob, int)
{
    MyClass obj = ob;
    ob.n++;
    ob.m++;
    return obj;
}
main()
{
    int a, b;
    cout<<"\nEnter two values : ";
    cin>>a>>b;
    MyClass XYZ(a,b);
    cout<<endl<<"\nDuring pre-Increment";
    (++XYZ).out();
    cout<<endl<<"\nAfter pre-Increment";
    XYZ.out();
    cout<<endl<<"\nDuring post-Increment";
    (XYZ++).out();
    cout<<endl<<"\nAfter post-Increment";
    XYZ.out();
}

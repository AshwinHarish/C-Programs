#include<iostream>
using namespace std;
class A
{
    public:
    int x, y;
    void func()
    {
        cout << "Hi" <<endl;
    }
    A* operator->()
    {
        return this;
    }
    friend istream& operator>>(istream &in, A &obj);
    friend ostream& operator<<(ostream &out, A &obj);
};
istream& operator >> (istream &in, A &obj)
{
    in>>(obj.x)>>(obj.y);
}
ostream& operator << (ostream &out, A &obj)
{
    out<<(obj.x)<<" "<<(obj.y);
}
int main()
{
    A a;
    a->func();
    cin>>a;
    cout<<a;
}

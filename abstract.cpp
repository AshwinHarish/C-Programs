#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
    virtual void get() = 0;
};
class Engg : public Student
{
    public:
    void get()
    {
        cout<<"\nEnter marks : ";
        cin>>marks;
    }
};
class Med : public Student
{
    public:
    void get()
    {
        cout<<"\nEnter marks : ";
        cin>>marks;
    }
};
class Sci : public Student
{
    public:
    void get()
    {
        cout<<"\nEnter marks : ";
        cin>>marks;
    }
};
main()
{
    Student *p;
    Engg ob1;
    Med ob2;
    Sci ob3;
    p = &ob1;
    p->get();
    p = &ob2;
    p->get();
    p = &ob3;
    p->get();
}

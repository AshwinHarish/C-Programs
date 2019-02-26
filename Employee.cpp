#include<iostream>
#include<string>
using namespace std;
class EMPLOYEE
{
    public:
    string name, num;
    double basic, DA, gross, IT, net;
    void in();
    void calc();
    void out();
};
void EMPLOYEE::in()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"\nEnter Employee number : ";
    cin>>num;
    cout<<"\nEnter basic salary : ";
    cin>>basic;
}
void EMPLOYEE::calc()
{
    DA = 0.52*basic;
    gross = basic + DA;
    IT = 0.30*gross;
    net = gross - IT;
}
void EMPLOYEE::out()
{
    cout<<"\nEmployee Name : "<<name;
    cout<<"\nEmployee number : "<<num;
    cout<<"\nBasic : "<<basic;
    cout<<"\nDA : "<<DA;
    cout<<"\nGross : "<<gross;
    cout<<"\nIT : "<<IT;
    cout<<"\nNet Salary : "<<net;
}
main()
{
    int n, i;
    EMPLOYEE ob[10];
    cout<<"\nEnter number of employees : ";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cout<<"\nEmployee "<<(i+1)<<endl;
        ob[i].in();
    }
    for(i = 0; i < n; i++)
    {
        cout<<"\nEmployee "<<(i+1)<<endl;
        ob[i].calc();
        ob[i].out();
    }
}

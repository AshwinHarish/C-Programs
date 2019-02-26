#include<iostream>
#include<string>
using namespace std;
class STUDENT
{
    public:
    string name, roll;
    double m1, m2, m3, tot, avg;
    char grade;
    void in();
    void calc();
    void out();
};
void STUDENT::in()
{
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"\nEnter Roll No. : ";
    cin>>roll;
    cout<<"\nEnter marks of three subjects for 100 : ";
    cin>>m1>>m2>>m3;
}
void STUDENT::calc()
{
    if(m1<40 || m2<40 || m3<40)
    {
        grade = 'F';
        return;
    }
    tot = m1+m2+m3;
    avg = tot/3;
    switch((int)(avg/10))
    {
        case 10:
            grade = 'S';
            break;
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade = 'S';
            break;
    }
}
void STUDENT::out()
{
    cout<<"\nName : "<<name;
    cout<<"\nRoll No. : "<<roll;
    cout<<"\nTotal : "<<tot;
    cout<<"\nGrade : "<<grade;
}
main()
{
    STUDENT ob[3];
    STUDENT *p;
    for(p = &ob[0]; p <= &ob[2]; p++)
    {
        cout<<"\nStudent Details\n";
        p->in();
    }
    for(p = &ob[0]; p <= &ob[2]; p++)
    {
        cout<<"\nStudent Details\n";
        p->calc();
        p->out();
    }
    return 0;
}

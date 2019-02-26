#include<iostream>
using namespace std;
class tim
{
    int h, m, s;
    public:
    tim()
    {
    }
    tim(int hours, int minutes, int seconds)
    {
        h=hours;
        m=minutes;
        s=seconds;
    }
    void display()
    {
        cout<<"Time :"<<h<<":"<<m<<":"<<s<<endl;
    }
    void add(tim t1, tim t2)
    {
        h=t1.h+t2.h;
        m=t1.m+t2.m;
        s=t1.s+t2.s;
        m+=s/60;
        s%=60;
        h+=m/60;
        m%=60;
    }
};
int main()
{
    tim t1(11,29,30),t2(12,30,30),t3;
    t1.display();
    t2.display();
    t3.add(t1,t2);
    t3.display();
}

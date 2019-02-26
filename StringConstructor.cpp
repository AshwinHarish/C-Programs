#include<iostream>
using namespace std;
class CN
{
    public:
    char str[20];
    CN()
    {
        str[0] = '\0';
    }
    CN(char x[])
    {
        int i;
        for(i=0;x[i]!='\0';i++)
            str[i] = x[i];
        str[i] = '\0';
    }
    CN concat(CN a)
    {
        int l1, l2, i;
        for(l1=0;this->str[l1]!='\0';l1++);
        for(l2=0;a.str[l2]!='\0';l2++);
        for(i = l1; i < (l1+l2); i++)
            this->str[i] = a.str[i-l1];
        return *this;
    }
    void display()
    {
        cout<<endl<<str;
    }
};
main()
{
    CN ob1;
    ob1.display();
    CN ob2("hello");
    ob2.display();
    ob1 = ob2;
    ob1.concat(ob2);
    ob1.display();
    return 0;
}

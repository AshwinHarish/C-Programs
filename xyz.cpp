#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
main()
{
    int i=0,j;
    while(1)
    {
        for(i=0;i<=150;i++)
        {
            for(j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
        }
        for(i=149;i>0;i--)
        {
            for(j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
        }
    }
}

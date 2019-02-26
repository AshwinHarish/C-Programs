#include<iostream>
#include<list>
using namespace std;
main()
{
    list<int> lst1,lst;
    int t,n,m,k,e,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>e;
            lst1.push_back(e);
        }
        p=k;
        while(lst1.size() && p<=n)
        {
            if(p<lst1.begin())
            {
                lst.push_back(p);
                p +=k;
            }
            else
            {
                lst.push_back(lst1.begin());
                p = lst1.begin();
                p += k;
                lst1.pop_front();
            }
        }
        for(i=p;i<=n;i++k)
            lst.push_back(i);
        cout<<lst.size();
    }
}

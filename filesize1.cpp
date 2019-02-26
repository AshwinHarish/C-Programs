#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    fstream fobj;
    char ch;
    string str;
    fobj.open("1.txt", ios::in | ios::out);
    int size1 = 0;
    cin>>str;
    fobj.write((char*)&str, sizeof(str));
    fobj<<str;
    fobj.seekg(0, ios::beg);
    while(fobj.get())
        size1 += fobj.gcount();
    cout<<size1;
    fobj.close();
}

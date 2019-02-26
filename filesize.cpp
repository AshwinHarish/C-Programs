#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream fobj;
    string s;
    char c;
    int size = 0;
    fobj.open("1.txt", ios::in | ios::out);
    getline(cin,s);
    fobj<<s;
    fobj.seekg(0, ios::beg);
    while(fobj>>c)
        size++;
    cout<<size;
    return 0;
}

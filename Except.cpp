#include<iostream>
#include<stdexcept>
using namespace std;
main() {
    int a=1;
    try
    {
        if(a == 1){
            //throw exception();
            throw 1;
        }
    }
    catch (int e)
    {
        cerr << e.what() << endl;
    }
}

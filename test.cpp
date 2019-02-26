#include<iostream>
using namespace std;
int i = 200, n = 110;
main()
{
    int count  = 0;
  while (i >= n){
        count++;
    i = i-1;
    n = n+1;
  }
  cout<<count;
}

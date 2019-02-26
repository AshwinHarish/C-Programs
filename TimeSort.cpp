#define MAX 100000000
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int list[MAX];
int L_Search(int key)
{
    int i;
    for(i=0;i<MAX;i++)
        list[i] = i;
    for(i=0;i<MAX;i++)
        if(list[i]==key)
            return 1;
    return 0;
}
int B_Search(int key)
{
    int first = 0, last = MAX - 1;
    int mid;
    while(first <= last)
    {
        mid = (first + last)/2;
        if(key > list[mid])
            first = mid + 1;
        else if(key < list[mid])
            last = mid - 1;
        else if(key == list[mid])
            return 1;
    }
    return 0;
}
main()
{
    float time1 = clock(), time;
    int arr[] = {500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000, 5000000, 10000000, 50000000, 100000000};
    int i, a;
    cout<<"\n      Size         Linear   Binary\n";
    for(i=0;i<=11;i++)
    {
        cout<<setw(10)<<arr[i]<<setw(15);
        time = (float)clock();
        a = L_Search(arr[i]);
        cout<<setprecision(9)<<(((float)clock() - time)/CLOCKS_PER_SEC)<<setw(9);
        time = (float)clock();
        a = B_Search(arr[i]);
        cout<<setprecision(9)<<(((float)clock() - time)/CLOCKS_PER_SEC)<<"\n";
    }
    cout<<"Total time : "<<(clock()-time1)/CLOCKS_PER_SEC;
}

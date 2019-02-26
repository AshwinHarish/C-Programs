#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, j, a;
    vector<int> v;
    vector<int> :: iterator i;
    cout<<"\nEnter number of elements :";
    cin>>n;
    cout<<"\nEnter elements :";
    for(j=0; j<n; j++) {
        cin>>a;
        v.push_back(a);
    }
    for(i = v.begin();i != v.end(); i++)
        cout<<*i<<"\t";
    cout<<"\nNumber of elements in vector is "<<v.size();
    v.erase(v.begin()+n-1);
    cout<<"\nOne element is deleted";
    cout<<"\nNumber of elements in vector is "<<v.size();
    cout<<endl;
    v.clear();
    cout<<"\nVector is cleared";
}

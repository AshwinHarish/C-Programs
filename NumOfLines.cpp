/*#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string line;
    int number = 0;
    ifstream myfile("textexample.txt");
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            cout<< line << endl;
            number++;
        }
        myfile.close();
    }
    cout<<(number);
}*/

#include<fstream>
#include<iostream>
#include <string>
#include<stdlib.h>
using namespace std;
int main()
{
	string s;
	ifstream infile("textexample.txt",ios::in);
	int count=0;
	if(!infile)
	{
		cout<<"File doesnt exist \n";
		exit(0);
 	}
	while(getline(infile,s))
	{
		count++;
	}
	cout<<"No. of lines :"<<count<<endl;
}

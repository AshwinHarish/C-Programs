#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	ifstream infile("Newfile.txt",ios::in);
	ofstream outfile("Secondfile.txt",ios::out | ios::app);
	string s;
	if(!infile)
	{
		cout<<"File doesnt exist \n";
		exit(0);
	}
	while(getline(infile,s))
		outfile<<s;
}

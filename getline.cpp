#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 int main(int argc, char const *argv[])
 {
 	string str;
 	cout<<"Enter you full name : ";
 	//cin>>str;
	getline(cin,str);
	cout<<"your name is : "<<str<<endl;

	cout<<"**************************"<<endl;
	cout<<"now comes the character..."<<endl;

	char name[20];
	cout<<"Enter your name : ";
	cin.getline(name,20);
	cout<<"your name is : "<<name<<endl;
	return 0;
}


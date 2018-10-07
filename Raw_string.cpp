#include <iostream>
#include <string>
using namespace std;

// use extra "\" character to escape \n ot \t.

int main(){
	string str1="My \nname \nis \nKhan\n";
	cout<<str1<<endl;

	string str2="My \\n name \\n is \\n Anuj \\n";
	
	cout<<str2<<endl;

	return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

// just prints each character
void string_to_char(string str){
	for (int i = 0; i < str.size(); ++i)
	{
		cout<<str.at(i)<<"\t";
	}
	cout<<endl;
}

// just prints each character
void string_to_char2(string str){
	for (int i = 0; i < str.size(); ++i)
	{
		cout<<str[i]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);

	string_to_char(str);
	string_to_char2(str);

	cout<<"******* Second Method ********\n"<<endl;
// converts string to character
	string str2;
	cout<<"Enter the string : ";
	getline(cin,str2);
	int l2=str2.size();
	char c2[l2];
	strcpy(c2, str2.c_str());
	for (int i = 0; i < l2; ++i)
	{
		cout <<"'"<<c2[i]<<"'"<<" ";
	}
	return 0;
}
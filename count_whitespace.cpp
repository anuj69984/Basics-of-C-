#include <iostream>
#include <cstring>
using namespace std;

// In C++, isspace is a predefined function used for string and character handling.
// cstring is the header file required for string functions and cctype is the headerfile
// required for character functions. This function is used to check if the arguement
// contains any whitespace characters.There are many types of whitespace characters in c++.
// such as-

 /*   ‘ ‘ – Space
    ‘\t’ – Horizontal tab
    ‘\n’ – Newline
    ‘\v’ – Vertical tab
    ‘\f’ – Feed
    ‘\r’ – Carriage return
*/

int count_space(string str){
	int l=str.size();
	int count=0;
	for (int i = 0; i < l; ++i)
	{
		if (isspace(str[i]))
		{
			count++;
		}
	}
	return count;
}


int main(int argc, char const *argv[])
{
	string str;
	cout<<"enter the string : ";
	getline(cin,str);
	int count=count_space(str);
	cout<<"Number of white space is : "<<count<<endl;
	return 0;
}
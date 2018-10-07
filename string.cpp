#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;

int main(){

	string str1,str2;
	cout<<"Enter first string : ";
	getline(cin,str1);
	cout<<"Enter second string : ";
	getline(cin,str2);

	int l1=str1.length();
	int l2=str2.length();

	string str3=str1.append(str2);
	cout<<str3<<endl;

	// same character with n occurance
	string str4(5,'&');
	cout<<str4<<endl;

	// starting from index x and taking n character after that from another string str1 
	string str5(str1,3,10);
	cout<<str5<<endl;

	//starting from one index to another
	string str6(str2.begin(),str2.begin()+6);
	cout<<str6<<endl;

	//returning front and back character of a string
	// char ch1=str6.front();
	// char ch2=str6.back();
	// cout<<"Front char of str 6 is : "<<ch1 <<"and last char is : "<<ch2<<endl;

	// append something to any string
	str6.append("Thank You !");
	cout<<str6<<endl;

	// check if str4 is found in str6
	if(str6.find(str4) !=string::npos){
		cout<<"str4 found in str6 at "<<str6.find(str4)<<endl;
	}
	else
		cout<<"str4 is not found un str6"<<endl;



	//  substr(a, b) function returns a substring of b length
    //  starting from index a
    cout << str6.substr(7, 3) << endl;
 
    //  if second argument is not passed, string till end is
    // taken as substring
    cout << str6.substr(7) << endl;
 
    //  erase(a, b) deletes b character at index a
    str6.erase(7, 4);
    cout << str6 << endl;

    //  replace(a, b, str)  replaces b character from a index by str
    str6.replace(2, 7, "ese are test");
 
    cout << str6 << endl;

    // comparing two strings. it returns the difference in their length
    if (str1.compare(str2) == 0)
    {
    	cout<<"They have equal lenths"<<endl;
    }
    else
    	cout<<"They are not equal"<<endl;

    //insert function for string
    cout<<"******* Insert Function ******"<<endl;
    str1.insert(0,"Welcome ");
    cout<<str1<<endl;
 
	str2.clear();
	cout<<str2<<endl;

	if (str2.empty() ==1)
	{
		cout<<"str2 is empty"<<endl;
	}
	else
		cout<<"str2 is not empty"<<endl;

	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
void reverse(string str){
	string str2;
	int l=str.size();
	cout<<"length of string is "<<l<<endl;
	while(l>=0){
		str2=str2+str[l];
		l=l-1;
	}
	cout<<"After reversing the string **** "<<str2<<endl;
}

int main(int argc, char const *argv[])
{
	string str="gchaas";
	reverse(str);
	return 0;
}

*/

void reverse_string(string str){
	int l=str.size();
	for (int i = 0; i < l/2; ++i)
	{
		swap(str[i],str[l-i-1]);
	}
	cout<<"string after reversing is : "<<str<<endl;
}

int main(){
	string str="1234";
	reverse_string(str);
	return 0;
}


// int main(int argc, char const *argv[])
// {
// 	string str="ANUJKUMAR";
// 	reverse(str.begin()+2,str.end());
// 	cout<<str<<endl;
// 	return 0;
// }
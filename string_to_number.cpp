#include <iostream>
#include <string>
using namespace std;


// int string_to_int(string s)
// {
// 	int num=0;
// 	for(int i=0;i<s.size();i++)
// 	{
// 		char a=s[i];
// 		int x=a-'0';
// 		num=num*10+x;
// 	}	
// 	return num;
// } 
// int main(){
// 	string str;
// 	cin>>str;
// 	int num=string_to_int(str);
// 	cout<<2*num<<endl;
	
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	string str="23";
	int s=str.size();
	int result=0;
	for (int i = 0; i < s; ++i)
	{
		char a=str[i];
		int x=a-'0';
		result=result*10+x;
		
	}
	cout<<2*result<<endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;


// working with number array

// int main(){
// 	int A[10];
	
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		cout <<"enter "<<"a"<<i<<" : ";
// 		cin>>A[i];
// 	}
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		cout<<A[i]+10<<endl;
// 	}
// return 0;
// }

// working with string array

int main(int argc, char const *argv[])
{
	// char A[10];
	// for (int i=0;i<2;i++){
	// 	cout<<"Enter the char : ";
	// 	cin>>A;
	// 	cout <<"You entered "<<A<<endl;
	// 	cout<<"********************************"<<endl;
	// }

	string str[4];
	for(int i=0;i<4;i++){
		cout<<"Enter string : ";
		cin>>str[i];
		
		
	}
	cout<<"********************************"<<endl;
	for (int i = 0; i < 4; ++i)
	{
		cout<<"you entered the string : "<<str[i]<<endl;
	}
	string result=str[1]+str[2];
	cout<<"resultanat string is : "<<result<<endl;
	
	return 0;
}
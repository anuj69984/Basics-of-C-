#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	//cout << "enter number of test cases : ";
	cin >> t;
	int a,b;
	for (int i = 1; i <= t; ++i)
	{
		//cout << "Enter test case : "<< i ;
		cin >>a;
		cin >>b;
		if (a>b)
		{
			cout << a+b<<endl;
			cout <<a-b<<endl;			
			cout <<a/b <<endl;
			cout <<a*b<<endl;
		}
		else{
			cout << a+b<<endl;
			cout <<b-a<<endl;			
			cout <<b/a <<endl;
			cout <<a*b<<endl;
		}
		
	}
	return 0;
}
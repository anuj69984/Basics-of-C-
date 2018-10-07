#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cout <<"Enter number of test cases : ";
	cin>> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cout <<"Enter the test case "<< i ;
		cin >>n; 
		if (n > 5)
			cout <<"Greater than 5"<<endl;
		else if (n<5)
		{
			cout <<"Less than 5"<<endl;
		}
		else
			cout <<"Equal to 5"<<endl;
	}
	return 0;
}
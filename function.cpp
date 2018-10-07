#include <iostream>
using namespace std;

int calcSum(int a, int b, int c){
	int sum=a+b+c;
	return sum;
} 

int main(int argc, char const *argv[])
{
	int t;
	//cout <<"Enter number of test cases : ";
	cin >>t;
	for (int i = 0; i < t; ++i)
	{
		int A,B,C;
		//cout <<"Enter A : ";
		cin>>A;
		//cout <<"Enter B : ";
		cin>>B;
		//cout <<"Enter C : ";
		cin >>C;
		cout << calcSum(A,B,C) <<endl;

	}
	return 0;
}
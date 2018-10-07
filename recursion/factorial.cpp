#include <iostream>
using namespace std;

/* // factorial withoout recursion
int main(int argc, char const *argv[])
{
	int n,fact=1;
	cout<<"Enter any number : ";
	cin>>n;
	if(n==0 || n==1)
		cout<<"factorial is 1";
	else{	
	for (int i = 1; i <= n; ++i)
	{
		fact=fact*i;
	}
	cout<<"factorial of "<<n<<" is "<<fact<<endl;
	}
	return 0;
}

*/ // using recursion

int factorial(int n){
	int fact=1;
	if (n==0 || n==1)
		{
			return 1;
		}	
	else{
		return n*factorial(n-1);
	}	
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter any number : ";
	cin>>n;
	int fact=factorial(n);
	cout<<"factorial of "<<n<<" is "<<fact<<endl;

	return 0;
}
#include <iostream>
using namespace std;

/* // without using recursion   
int main(int argc, char const *argv[])
{
	int n,flag=0;
	cout<<"Enter any number : ";
	cin>>n;

	for (int i = 2; i <=n/2 ; ++i)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
	{
		cout<<n<<" is a prime number."<<endl;
	}
	else
		cout<<n<<" is not a prime number."<<endl;
	return 0;
}

*/ // using recursion
int function(int n, int i){
	if (i==1)
	{
		return 1;
	}
	else{
		if (n%i==0)
		{
			return 0;
		}
		else
			return function (n,i-1);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter any number : ";
	cin>>n;
	int ans=function(n,n/2);
	if (ans==1)
	{
		cout<<"prime number."<<endl;
	}
	else
		cout<<"Not a prime number."<<endl;

	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

/*

void primefactorization(int n){
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i==0)
		{
			int count=0;
			while(n%i==0){
				count++;
				n=n/i;
			}
			for (int j = 0; j < count; ++j)
			{
				cout<<i<<"\t";	
			}
			
		}
	}
	if (n!=1)
	{
		cout<<n<<endl; 
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	primefactorization(n);
	return 0;
}
*/
void prime_factorization(int n){
	while(n%2 == 0){
		cout<<"2\t";
		n=n/2;
	}
	for (int i = 3; i <= sqrt(n); i=i+2)
	{
		while(n%i==0){
			cout<<i<<"\t";
			n=n/i;
		}
	}
	if (n!=1)
	{
		cout<<n<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter n :";
	cin>>n;
	prime_factorization(n);
	return 0;
}
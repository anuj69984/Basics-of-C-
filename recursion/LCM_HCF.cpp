#include <iostream>
using namespace std;

int hcf(int a, int b){
	if (a==0 || b==0)
	{
		return 0;
	}
	if (a==b)
	{
		return a;
	}
	else{
		if (a>b)
		{
			return hcf(a-b,b);
		}
		else
			return hcf(a,b-a);
	}
}
int lcm(int a, int b){
	return (a*b)/hcf(a,b);
}

int main(int argc, char const *argv[])
{
	int a,b;
	cout<<"enter a and b : ";
	cin>>a;
	cin>>b;
	int ans=lcm(a,b);
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<ans<<endl;
	return 0;
}

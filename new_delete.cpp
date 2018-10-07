#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int *p;
	p=new int;
	*p=10;
	if(!p){
		cout <<"not enough memory !"<<endl;
	}
	else{
		cout <<"address of p is : "<<p<<endl;
		cout <<"value of p is : "<<*p<<endl;
		delete p;
		p=new int(19);
		cout <<"address of p is : "<<p<<endl;
		cout <<"value of p is : "<<*p<<endl;	
	}

	int *ptr;
	ptr=new int [5];
	for (int i = 0; i < 5; ++i)
	{
		ptr[i]=i;
	}
	for (int i = 0; i < 4; ++i)
	{
		cout <<"the value of ptr["<<i<<"] = "<<ptr[i]<<endl;
	}

	for (int i = 0; i < 4; ++i)
	{
		cout <<"the address of ptr["<<i<<"] = "<<ptr<<endl;
	}

	delete [] ptr;

	int b=10;
	int *ptr1;
	ptr1=new int;
	cout <<"address of ptr1 when assigned is : "<<ptr1<<endl;
	delete ptr1;
	ptr1=&b;
	// ptr1= new int(b);

	cout <<"address of b is : "<<&b<<endl;
	cout <<"address of ptr1 is : "<<ptr1<<endl;

	cout <<"value of b is : "<<b<<endl;
	cout <<"value of *ptr1 is : "<<*ptr1<<endl;
	// delete ptr1;
	return 0;
}
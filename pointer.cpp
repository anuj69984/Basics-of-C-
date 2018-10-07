#include <iostream>
using namespace std;

void add(int *a){
	*a=*a+10;
}

int main(){
	int a;
	cout<<"Enter the value of a : ";
	cin>>a;
	int *p;
	p=&a;
	cout <<"the value of *p is : "<<*p<<endl;
	cout <<"the value of p is : "<<p<<endl;

	*p=*p+10;
	cout <<"the value of *p is : "<<*p<<endl;
	cout <<"the value of p is : "<<p<<endl;

	int b;
	cout<<"enter b : ";
	cin>>b;
	int *c=&b;
	add(c);
	cout<<"the value of c is : "<<*c<<endl;

	return 0;
}
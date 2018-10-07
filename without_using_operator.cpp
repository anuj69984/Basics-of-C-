/*
If c = 0
    x = a
Else // Note c is binary
    x = b.
*/
#include <bits/stdc++.h>
using namespace std;

int returnValue(int a, int b, int c){
	int arr[]={a,b};
	return *(arr + c);
}

int returnValue2(int a, int b, int c){
	return ((a*!c) | (b*c));
}

int returnX(int a, int b, int c){
	int arr[2];
	arr[0]=a;
	arr[1]=b;
	return arr[c];
}

int main(int argc, char const *argv[])
{
	int a=10, b=5, c=0;
	int x=returnValue(a,b,c);
	cout <<x<<endl;
	x=returnValue2(a,b,c);
	cout <<x<<endl;	
	x=returnX(a,b,c);
	cout <<x<<endl;
	return 0;
}
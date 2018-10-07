#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a=10;
	++a=5; // In C++, pre-increment (or pre-decrement) can be used as l-value,
				// but post-increment (or post-decrement a++) can not be used as l-value.
	cout <<"a is now : "<<a<<endl;

	++a=7;
	cout <<"a is now : "<<a<<endl;

	// a++=9;
	// cout <<"a is now : "<<a<<endl;	
	return 0;
}
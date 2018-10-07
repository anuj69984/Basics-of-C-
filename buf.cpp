#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[80],ch;
	cout <<"Enter str: ";
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); // to ignore newline as input character
	// cin.sync();     it can also be used.

	// cin >> ws; Discards the input buffer and intial white spaces of string
    
	cin.getline(str,80);
	// cin >>str;

	cout <<"Enter ch : ";
	cin >>ch;

	cout <<str<<endl;
	cout<<ch<<endl;
	return 0;
}

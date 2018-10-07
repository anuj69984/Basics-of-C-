#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cout <<"Enter number of test cases : ";
	cin >> t;
	string s;	
	for (int i = 0; i < t; ++i)
	{
		cout << "Enter the string "<< i << " : ";
		cin >> s;
		int p=s.size();
		if (s[0] < '0' || s[0] > '9')
		{
			cout << "char : 1 byte"<<endl;
		}
		else{
			for (int j = 0; j < p; ++j)
			{
				if (s[j]== '.' && p < 7)
				{
					cout << "float : 4 byte"<<endl;
				}
				else if (s[j]== '.' && p > 7)
				{
					cout << "double : 8 byte"<<endl;
				}
				else
					cout << "int : 4 byte"<<endl;
			}
		} 
	}
	return 0;
}
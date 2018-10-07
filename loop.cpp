#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cout << "Enter number of test cases : ";
	cin >> t;
	int p;
	for (int i = 0; i < t; ++i)
	{
		cout << "Enter the test case : "<< i;
		cin >>p;
		for (int i = 0; i < p; ++i)
		{
			cout << "GeeksforGeeks" <<endl;
		}
	}
	return 0;
}
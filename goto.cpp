#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	if (1)
	{
		statement_1 : (cout<<"Hello \t");
		goto statement_2;
	}
	else{
		goto statement_1;
		statement_2 : (cout <<"Anuj");
		// goto statement_1;  what will happen if we put here ? (it will run infinitely...why ?)
	}
	return 0;
}
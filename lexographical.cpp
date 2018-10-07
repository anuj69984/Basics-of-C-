#include <iostream>
#include <algorithm>
using namespace std;
void lexicographical(string str);
int main(int argc, char const *argv[])
{
	string str="32574";
	lexicographical(str);

	return 0;
}

void lexicographical(string str){
	bool val=next_permutation(str.begin(),str.end());
	if (val == false)
	{
		cout<<"Next lexicographical permutation is not possible"<<endl;
	}
	else
		cout<<"Next lexicographical permutation is : "<<str<<endl;
}
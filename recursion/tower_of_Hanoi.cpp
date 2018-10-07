#include <iostream>
using namespace std;

void toh(int n, char from_peg, char topeg, char auxpeg){
	
	if (n==1)
	{
		cout<<"move peg 1 from rod "<<from_peg<<" to rod "<<topeg<<endl;
	}
	else{
		toh(n-1,from_peg,auxpeg,topeg);
		cout<<"move peg "<<n<<" from rod "<<from_peg<<" to rod "<<topeg<<endl;
		toh(n-1,auxpeg,topeg,from_peg);
		
	}
	
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter no of pegs : ";
	cin>>n;
	char A,B,C;
	cout<<"Enter names of rods : ";
	cin>>A;
	cin>>B;
	cin>>C;
	toh(n,A,B,C);
	return 0;
}
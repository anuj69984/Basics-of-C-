#include <iostream>
using namespace std;

int is_sorted(int* A[], int n){
	if (n==1)
	{
		return 1;
	}
	if (A[n-1] < A[n-2])
	{
		return 0;
	}
	else
		return is_sorted(A,n-1);
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	int ans=is_sorted(*A[],n);
	cout<<ans<<endl;
	// if (is_sorted(A[],n)==0)
	// {
	// 	cout<<"not sorted."<<endl;
	// }
	// else
	// 	cout<<"array us sorted."<<endl;
	return 0;
}
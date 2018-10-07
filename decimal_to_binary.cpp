#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}

void print(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void decimalToBinary(int n){
	int i=0,rem,list[10];

	while(n>0){
		rem=n%2;
		list[i]=rem;
		i++;
		n=n/2;
	}
	reverse(list,0,i-1);
	print(list,i);
}
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter decimal number : ";
	cin>>n;
	decimalToBinary(n);
	return 0;
}
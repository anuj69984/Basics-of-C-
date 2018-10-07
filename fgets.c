#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[100];
	int n;
	printf("Enter the integer: ");
	scanf("%d\n",&n); // here we have to use \n else fgets would not take the str input as \n will be read as input.   
	// printf("Enter the str: ");
	fgets(str,100,stdin);

	printf("The integer is : %d\n",n );
	printf("The str is : %s\n",str);
	return 0;
}
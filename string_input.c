#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[50];
	printf("Enter the string : ");
	fgets(str,50,stdin);

	printf("The entered string is : %s\n",str);
	return 0;
}
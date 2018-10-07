#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	printf("Enter any string which contains integer at the end : ");
	scanf("%*s %d",&a);

	printf("The value of a is : %d\n",a );
	return 0;
}
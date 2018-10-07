// this would not print the desired result...Reason to this is an occupied Buffer.
// The “\n” character goes remains there in buffer and read as next input.
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[50], ch;
	printf("Enter the string str : ");
	scanf("%s",str);
	
	printf("Enter the character ch : ");
	ch=getchar();

	printf("str is : %s\n",str );
	printf("ch is : %c\n",ch );
	return 0;
}

// the solution to the above problem...

/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, str1[20];
	
	printf("Enter str1 : ");
	scanf("%s",str1);
	printf("Enter ch: ");
	while(getchar() != '\n');
	ch=getchar();
	

	printf("ch is : %c\n",ch );
	printf("str1 is : %s\n",str1 );
	return 0;
}
*/
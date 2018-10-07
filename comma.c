#include <stdio.h>

int fun1(int a){
	return a;
}
int fun2(int a){
	return a;
}
int main(int argc, char const *argv[]){

	int i=(5,20);  // evaluates its first operand and discards the result, it then 
					// evaluates the second operand and returns this value
	printf("value of i is : %d",i);
	int j=(fun1(1),fun2(2));
	printf("value of j is : %d",j);

	return 0;
}
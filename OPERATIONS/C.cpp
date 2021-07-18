#include <stdio.h>
int main(void) {
	int a;
	int b;
	int sum, diff, mul, div, rem;

	printf("What is a? = ");
	scanf("%d", &a);

	printf("What is b? = ");
	scanf("%d", &b);
	printf("========================================\n");
	sum = a + b;
	diff = a - b;
	mul =  a * b;
	div = a / b;
	rem = a % b;

	printf("a+b is = %d \n", sum);
	printf("a-b is = %d \n", diff);
	printf("a*b is = %d \n", mul);
	printf("a/b is = %d \n", div);
	printf("a%b is = %d \n", rem);
	printf("======================================");
	return 0;
}
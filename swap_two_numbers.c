//Program to swap two numbers without using temporary variable
#include<stdio.h>
void swap(int *num1, int *num2);
int main()
{
	int num1, num2;
	printf("Enter value for num1: ");
	scanf("%d", &num1);
	printf("Enter value for num2: ");
	scanf("%d", &num2);
	printf("Before swapping:\nnum1 = %d, num2 = %d\n", num1, num2);
	swap(&num1, &num2);
	printf("After swapping:\nnum1 = %d, num2 = %d\n", num1, num2);
}
void swap(int *num1, int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

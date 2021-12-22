//Given an array of integers and an integer target, return indices of numbers such that they add up to target
#include<stdio.h>
int main()
{
	int size, sum=0;
	printf("Enter array size: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter array elements: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	int i, target, count = 0;
	printf("Enter the target number: ");
	scanf("%d", &target);
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i];
		arr[i] = i;
		if(sum == target)
		{
			count = 1;
			break;
		}
	}
	if(count == 1)
	{
	for(int j = 0;j <= i;j++)
	{
		printf("%d ", arr[j]);
	}
	}
	else
	{
		printf("Target is not equal to sum of array elements");
	}
	printf("\n");
}

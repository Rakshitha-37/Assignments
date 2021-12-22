//Program to delete an array element
#include<stdio.h>
int main()
{
	int size;
	printf("Enter the array size: ");
	scanf("%d", &size);
	int arr[size], count = size;
	printf("Enter array elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	}
	int index;
	printf("Enter the array index to be deleted: ");
	scanf("%d", &index);
	if(index < size)
	{
		for(int i = index;i < size;i++)
		{
			arr[i] = arr[i+1];
		}
		count = size - 1;
	}
	else
	{
		printf("Index to be deleted >= size\n");
	}
	printf("Array elements after deletion: ");
	for(int i = 0;i < count;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

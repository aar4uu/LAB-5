//PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include<stdio.h>
int main()
{
	int a[50],i,sum=0,size;
	
	printf("Enter the size of the array:");
	scanf("%d", &size);
	
	printf("Enter the array elements: \n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	
		printf("sum of array:%d",sum);

	
	return 0;
}

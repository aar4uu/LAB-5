//SWAPPING THE VALUES OF ARRAY.
#include<stdio.h>
int main()
{
	int size=10,a[size], b[size],c[size],i;
	
	printf("Enter the 1st array elements:");
	for(int i=0;i<size;i++)
	{
	      printf(" \n Enter no:");
	      scanf("%d", &a[i]);	
	}
	
	printf("Enter the 2nd array elements:");
	for(int i=0;i<size;i++)
	{
	       printf(" \n Enter no:");
	      scanf("%d", &b[i]);	
	
	}
	
	//swapping
	for(int i=0; i<10; i++);
	{
		int temp;
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	
	printf(" \n Values after swapping \n:");
	for(int i=0; i<size; i++)
	{
		printf("%d %d \n", a[i],b[i]);
	}
	
	return 0;
}

	
	

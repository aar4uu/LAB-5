//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD.
#include<stdio.h>
int main()
{
	int a1[10],a2[10],asum[10];
	
	printf("Enter the elements of 1st array \n:");
	for(int i=0; i<10; i++)
	{
		scanf("%d", &a1[i]);
	}
	
	printf("Enter the elements of 2nd array:");
	for(int i=0; i<10; i++)
	{
		scanf("%d", &a2[i]);
	}
	
	//storing sum 
	for(int i=0; i<10; i++)
	{
		asum[i]=a1[i]+a2[i];
	}
	
	//printing sum
	printf("The sum:");
	for(int i=0; i<10; i++)
	{
		printf("%d \n", asum[i]);
	}
	return 0;
}
	
	


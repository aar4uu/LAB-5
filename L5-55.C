//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY ELEMENT
#include<stdio.h>
int main()
{
	int a[50],size,i,oddcount=0,evencount=0;
	
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	printf("Enter the array elements: \n");
	
	for(i=0;i<size;i++)
	{
		printf(" \n Enter the no:");
	      scanf("%d", &a[i]);	
       
       //counting even no
		if(a[i]%2==0)
		{
			evencount++;
		}
		if(a[i]%2 !=0)
		{
		
		      oddcount++;
	       }
       }
	 
	//output
	printf(" No of even no:%d \n ", evencount);
	printf("  No of odd no:%d \n", oddcount);
	
	return 0;

	
	 
	
}

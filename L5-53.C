//Pattern 7 of stars.
#include<stdio.h>
int main()
{
	int rows;
	printf(" Enter the value of rows:");
	scanf("%d", &rows);
	
	for(int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for(int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");


        
    }
    for(int i =rows-1; i >=1; i--)
    {
        //print leading spaces
        for(int j = rows-i; j >=1; j--)
        {
            printf(" ");
        }

        //print stars

        for(int j =(2*i-1);j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

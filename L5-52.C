//PATTERN NO 6.
#include<stdio.h>
int main()
{
    int rows; 
    printf("Enter the value of rows: ");
    scanf("%d",&rows);

    
    for(int i =1; i <=rows; i++)
    {
        for(int j =1; j <=i; j++)
        {
            printf("%d",j); //printing the value of j to print the numbers from 1 to i
            if(j == i)
            for(int k =j-1; k >=1; k--)
            {
                printf("%d",k); //printing numbers from i to 1
            }
        }
        printf("\n");
    }


}

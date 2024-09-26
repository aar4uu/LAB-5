//Pattern 5.
#include<stdio.h>
int main()
{
    int rows;  
    
    printf("Enter the value of rows: ");
    scanf("%d",&rows);

    // triggering the loop for printing the required pattern
    for(int i =1; i <=rows; i++)
    {   
        for(int j =1; j <=rows; j++)
        
        //printing 1 whenever i = j
        {
            if(j == i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

        }
        printf("\n");
    }

    return 0;
}

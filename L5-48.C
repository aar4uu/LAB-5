//Pattern no 2
#include<stdio.h>
int main()
{
    int rows;
  int count =1; 
    printf("Enter the value of rows:");
    scanf("%d",&rows);
    

    for(int i =1; i <= rows; i ++) //loop for printing rows
    {
        for(int j =1; j <=rows; j++) //loop for printing columns
        {
            if(i+j >rows) //pattern condition
            {
                printf("%d",count);

                count ++;
                if(j == rows)
                count =1;
             
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}

#include<stdio.h>
int main()
{
	int rows;
	
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
	
          //triggering the loop for printing the required pattern
          for(char i ='A'; i <=65+rows; i++)
               {
                   for(int j =65 ; j<=i;j++ )
                     {
                        printf("%c",i);//printing the value of variable i
                      }
        printf("\n");//printing new line
    }
    return 0;
}

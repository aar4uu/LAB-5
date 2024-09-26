//pattern 1 - program 47
#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    
    for(char i = 1 ; i <=  rows; i++)
    {
        for(char j ='A'; j < 65+i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}

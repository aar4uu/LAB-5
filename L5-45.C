//A GUESSING GAME.

#include<stdio.h>
#include<time.h>
int main()
{
      int input; 
      time_t time;
 

     while (input != -1)
    {   
             printf("Enter the number (from 0 to 9 ) which you assume to be lucky or press -1 to terminate: ");
            scanf("%d",&input);
               
               
              //evaluation of lucky number
            int luckynumber = time%10;
            time = time /10;
            
            if(input >=0 && input <=9)
            {
            if(input == luckynumber)
            {
                printf("Congratulations ! Your assumption is right and %d is the lucky number.\n",luckynumber);
            }
            else
            {
                printf("Sorry ! %d is the lucky number.\n",luckynumber);
            }
        }
        else
        {   
            if(input == -1)
           { printf("Program Terminated.");
            break;
           }

            else
            {
                printf("Invalid input\n");
            }
        }
        

        }
    
    
return 0;

}

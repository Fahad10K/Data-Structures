#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int c, n;
    while(1)
    {
        printf("1. Even or odd \n");
        printf("2. Positive or negetive\n");
        printf("3. Finding Square of a number\n");
        printf("4. Finding Squareroot of a number\n");
        printf("5. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&c);
 switch(c)
        {
            case 1:
                printf("\nEnter number:\n");
                scanf("%d", &n);
        
                if(n%2 == 0) 
                    printf("\n\n%d is an Even number\n\n",n);
                else
                    printf("\n\n%d is an Odd number\n\n",n);
                break;
        
            case 2:
                printf("\nEnter number:\n");
                scanf("%d", &n);
                if(n>0)
                printf("\n\nnumber is positive number\n\n");
                else 
                printf("\n\nnumber is negetive number\n\n");
                    break;
            case 3:
                printf("\nEnter number:\n");
                scanf("%d", &n);
                printf("\n\nSquare of a number is %d\n\n", n*n);
                break;
            case 4:
                printf("\nEnter number:\n");
                scanf("%d", &n);
                float s;
                s=sqrt(n);
                printf("\n\nSquare root of a number is %.3f\n\n", s);
                break;
            case 5:
                 exit(0);   
         }
    }
    
    return 0;
}


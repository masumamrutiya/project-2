#include <stdio.h>

int main() {

    // question-1
    int number;
    
     printf("Enter your number: ");
     
     
    scanf("%d", &number);
    
    
    (number % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");
    
    // question-2
    int month;
    printf("enter your month no");
    scanf("%d",&month);
    switch(month){
        case 1:{
            printf("january");
            break;
        }
         case 2:{
            printf("february");
            break;
        }
         case 3:{
            printf("march");
            break;
        }
         case 4:{
            printf("april");
            break;
        }
         case 5:{
            printf("may");
            break;
        }
         case 6:{
            printf("jun");
            break;
        }
         case 7:{
            printf("july");
            break;
        }
         case 8:{
            printf("august");
            break;
        }
         case 9:{
            printf("september");
            break;
        }
         case 10:{
            printf("october");
            break;
        }
         case 11:{
            printf("november");
            break;
        }
         case 12:{
            printf("december");
            break;
        }
       
    }

    // question-3
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
        printf("%d is a leap year.\n", year);
        } else
        {
        printf("%d is not a leap year.\n", year);
        }

 return 0;
}
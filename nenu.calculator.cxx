#include <stdio.h>
#include <conio.h>
void main() 
{
    int a, b, choice;
    while(1) 
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        if(choice==5) 
        {
            printf("Exiting program...");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        switch(choice) 
       {
            case 1:printf("Result = %d", a + b);
                break;
            case 2:printf("Result = %d", a - b);
                break;
            case 3:printf("Result = %d", a * b);
                break;
            case 4:
                if(b == 0) 
                {
                    printf("Cannot divide by zero");
                } 
                else 
                {
                    printf("Result = %.2f", (float)a / b);
                }
                break;
            default:printf("Invalid choice");
        }
    }
    getch();
}
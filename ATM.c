#include<stdio.h>

int main()
{
    int pin=1234;
    int epin,choice;
    float Balance=500;
    float amount;

    printf("Enter the pin:");
    scanf("%d", &epin);
    if(pin != epin)
    {
        printf("This is an incorrect pin\n");
        return 0;
    }

    printf("Login successful\n");

    do
    {
        printf("\n------ ATM application menu ------\n");
        printf("1) Check balance\n");
        printf("2) Withdraw\n");
        printf("3) Deposit\n");
        printf("4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        }
        switch (choice)
        {
            case 1:
                printf("Your balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter your amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    balance -= amount;
                    printf("Collected amount = %.2f\n", amount);
                    printf("Remaining balance = %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter your amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                }
                else
                {
                    balance += amount;
                    printf("Your new balance = %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using us\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
    while (choice != 4);

    return 0;
}
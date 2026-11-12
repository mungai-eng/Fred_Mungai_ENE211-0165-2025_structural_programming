#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define CORRECT_PIN 1111
#define MAX_ATTEMPTS 3
double balance=10000;
int login();
int checkbalance();
double deposit(double amount);
double withdraw(double amount);

int main()
{
  if (login()==0)
  {
    printf("Max attempts reached.Access denied.\n");
    return 0;
  }
int choice =0;
double amount;

while (choice !=4){
    printf("\n---ATM Menu---\n");
    printf("1.Balance\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Exit\n");
    printf("Enter choice: ");
    scanf("%i", &choice);

    switch(choice){
    case 1:
        checkbalance();
        break;
    case 2:
        printf("Enter deposit amount:   ");
        scanf("%lf", &amount);
        deposit(amount);
        break;
     case 3:
        printf("enter withdrawal amount");
        scanf("%lf", &amount);
        withdraw(amount);
        break;
     case 4:
        printf("Exiting....Goodbye\n");
        break;
     default:
        printf("invalid option.Please try again.\n");
   }
}
    return 0;
}

int login(){
    int pin;
    int correctpin=1111;
    int attempts=0;

    while (attempts<3){
        printf("enter pin: ");
        scanf("%i",&pin);

        if (pin==correctpin){
            return 1;
        }
        attempts++;
        printf("Incorrect pin. Attempts left:%i\n" ,3-attempts);
    }
    return 0;
}

int checkbalance(){
    printf("current balance:  %.2lf\n", balance);
    return 0;
}
double deposit(double amount){
    if(amount>0){
        balance=balance +amount;
        printf("succesfully deposited %.2lf. New balance: %.2lf\n",amount,balance);
    }
    else{
        printf("error.amount must be greater than 0.\n");
    }
    return balance;
}

double withdraw (double amount){
    if(amount<=0){
        printf("error.amount must be grater than 0.\n");
        }
       else if(amount>balance){
            printf("ërror.insufficient balance.\n");
       }
    else
        {
            balance=balance-amount;
            printf("succesfully withdrew %.2lf. remain balance:%.2lf\n",amount, balance);
        }
    return balance;
}

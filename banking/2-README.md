Project: Simple ATM System
This project involves creating a simple ATM (Automated Teller Machine) system that allows a user to perform basic banking operations such as checking balance, depositing money, and withdrawing money.

Requirements:
Use variables to store user information and account balance.
Use functions to modularize the code.
Use conditional statements to handle different operations.
Use loops to allow multiple transactions.
Use nested loops to handle input validation.
Implementation:
Step 1: Define constants and function prototypes
c
Copy code
#include <stdio.h>

// Constants
#define PIN 1234
#define MAX_ATTEMPTS 3

// Function prototypes
int validatePIN();
void showMenu();
void checkBalance(float balance);
void depositMoney(float *balance);
void withdrawMoney(float *balance);

Step 2: Main function
c
Copy code
int main() {
    float balance = 1000.0;  // Initial balance
    int pinValidated = 0;
    int attempts = 0;
    int choice;

    // Validate PIN
    while (attempts < MAX_ATTEMPTS && !pinValidated) {
        if (validatePIN()) {
            pinValidated = 1;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts left.\n", MAX_ATTEMPTS - attempts);
        }
    }

    if (!pinValidated) {
        printf("Too many incorrect attempts. Exiting...\n");
        return 1;
    }

    // Main menu loop
    do
    {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(&balance);
                break;
            case 3:
                withdrawMoney(&balance);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    while (choice != 4);

    return 0;
}
Step 3: Function definitions
c
Copy code
void showMenu() {
    printf("\nATM Main Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

void depositMoney(float *balance) {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if (amount > 0) {
        *balance += amount;
        printf("Deposit successful. Your new balance is: $%.2f\n", *balance);
    } else {
        printf("Invalid amount. Please try again.\n");
    }
}

void withdrawMoney(float *balance) {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    if (amount > 0 && amount <= *balance) {
        *balance -= amount;
        printf("Withdrawal successful. Your new balance is: $%.2f\n", *balance);
    } else if (amount > *balance) {
        printf("Insufficient funds. Your balance is: $%.2f\n", *balance);
    } else {
        printf("Invalid amount. Please try again.\n");
    }
}

int validatePIN() {
    int inputPIN;
    printf("Enter your PIN: ");
    scanf("%d", &inputPIN);

    if (inputPIN == PIN) {
        return 1;



CREATE AND VALIDATE PIN

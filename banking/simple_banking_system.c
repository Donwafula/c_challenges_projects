#include "bank.h"

/**
 * Function to create an account and set initial balance to zero
 */
void createAccount(struct Account *account, int accountNumber)
{
	account->accountNumber = accountNumber;
	account->balance = 0.0;
}

/**
 * Function to perform deposit function
 */
void deposit(struct Account *account, float amount)
{
	if (amount < 0)
	{
		printf("Must be positive\n");
		return;
	}
	account->balance += amount;
	printf("Deposited: %.2f\n", amount);
}

/**
 * Function to perform withdrawal function
 */
void withdraw(struct Account *account, float amount)
{
	if (account->balance < amount)
	{
		printf("Insuffecient funds\n");
		return;
	}
	account->balance = account->balance - amount;
	printf("Withdrew: %.2f\n", amount);
}

/**
 * Function to confirm account balance
 */
float checkBalance(struct Account *account)
{
	return (account->balance);
}

int main() {
    struct Account accounts[100];
    int numOfAccounts = 0;

    // Create an account
    createAccount(&accounts[numOfAccounts], numOfAccounts + 1);
    numOfAccounts++;

    // Test cases
    printf("Initial Balance: %.2f\n", checkBalance(&accounts[0])); // Expected: 0.00

    // Deposit money
    deposit(&accounts[0], 1000.0); // Expected: Deposited: 1000.00
    printf("Balance after deposit: %.2f\n", checkBalance(&accounts[0])); // Expected: 1000.00

    // Withdraw money
    withdraw(&accounts[0], 500.0); // Expected: Withdrew: 500.00
    printf("Balance after withdrawal: %.2f\n", checkBalance(&accounts[0])); // Expected: 500.00

    // Withdraw more than balance
    withdraw(&accounts[0], 600.0); // Expected: Insufficient funds or invalid amount.

    // Negative deposit
    deposit(&accounts[0], -100.0); // Expected: Deposit amount must be positive.

    return 0;
}

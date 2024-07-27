#include "bank.h"

/**
 * validatePIN - function to validate account PIN
 * Return: true on succes, false on failure
 */
bool validatePIN(void)
{
	int input = 1, _PIN = 1234, pin = 0;

	do {
		if (input == 1)
			printf("ENTER PIN: ");
		scanf("%d", &pin);

		if (pin != _PIN)
		{
			if (input < ATTEMPTS)
				printf("Wrong PIN. %d attemps left. Renter: ", ATTEMPTS - input);
			else if (input == ATTEMPTS)
			{
				printf("Maximum attempts reached.\nPlease try again later\n");
				return (false);
			}
		}
		else
		{
			printf("SUCCESS\n");
			return (true);
		}
		input++;
	}
	while (input <= ATTEMPTS)
		;

	printf("FATAL: PIN ERROR!!\n");
	return (false);
}

/**
 * showMenu - shows user menu
 */
void showMenu(void)
{
	printf("\nATM Main Menu:\n");
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("4. Exit\n");
}

/**
 * checkBalance - chackes current account balance
 * @balance: balance amount
 */
void checkBalance(float balance)
{
	printf("Your account balance is: %.2f\n", balance);
}

/**
 * depositMoney - function to perform deposit operation
 * @balance: account balance
 */
void depositMoney(float *balance)
{
	float amount = 0, bre_ak = 0;

	while (bre_ak != 1)
	{
		printf("Enter amount to deposit: ");
		scanf("%f", &amount);
		if (!amount)
		{
			printf("Deposit Error!");
			return;
		}
		else if (amount < 0)
		{
			printf("Deposit amount must be positive\n");
		}
		else
		{
			*balance += amount;
			bre_ak = 1;
		}
	}
	printf("Deposit amount: %.2f\nNew balance: %.2f\n", amount, *balance);
}

/**
 * withdrawMoney - function to perform withdrawal operation
 * @balance: account balance
 */
void withdrawMoney(float *balance)
{
	float amount = 0, bre_ak = 0;

	while (bre_ak != 1)
	{
		printf("Enter amount to withdraw: ");
		scanf("%f", &amount);
		if (!amount)
		{
			printf("Withdrawal Error!");
			return;
		}
		else if (amount < 0)
		{
			printf("Withdrawal amount must be positive\n");
		}
		else if (amount > *balance)
		{
			printf("Insuffecient balance to complete transaction\n");
			printf("Current account balance is: %.2f\n", *balance);
		}
		else
		{
			*balance -= amount;
			bre_ak = 1;
		}
	}
	printf("Withdrawal amount: %.2f\nNew balance: %.2f\n", amount, *balance);
}

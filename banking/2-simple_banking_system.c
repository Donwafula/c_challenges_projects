#include "bank.h"

/**
 * main - simple ATM
 * Return: 0
 */
int main(void)
{
	/*float balance = 1000.00;*/


	printf("*** WELCOME ***\n");
	if (validatePIN() == false)
	exit(EXIT_FAILURE);

	loop();

	return (0);
}

/**
 * loop - function to run operations
 */
void loop(void)
{
	int choice = 0;
	float balance = 1000.00;

	do {
		showMenu();
		printf("\n: ");
		scanf("%d", &choice);

		if (choice < 1 || choice > 4)
			printf("Invalid choice. Try again\n");
		else if (choice == 4)
			printf("EXITING PROGRAM! GOODBYE.\n");
		else
			selectOperation(choice, balance);

	}
	while (choice != 4)
		;
}

/**
 * selectOperation - function to switch between various operations
 * @choice: from menu
 * @balance: account balace
 */
void selectOperation(int choice, float balance)
{

	switch (choice)
	{
		case 1:
			checkBalance(balance);
			break;
		case 2:
			depositMoney(&balance);
			break;
		case 3:
			withdrawMoney(&balance);
			break;
	}
}

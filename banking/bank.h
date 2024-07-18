#ifndef BANK_H
#define BANK_H

/**
 * Simple banking system
 * Author: Donwafula
 */

/*Headers*/
#include <stdio.h>


struct Account {
	int accountNumber;
	float balance;
};

void createAccount(struct Account *account, int accountNumber);
void deposit(struct Account *account, float amount);
void withdraw(struct Account *account, float amount);
float checkBalance(struct Account *account);


#endif /*BANK_H*/

#ifndef BANK_H
#define BANK_H
/*This project involves creating a simple ATM (Automated Teller Machine)*/
/*system that allows a user to perform basic banking operations such as*/
/*checking balance, depositing money, and withdrawing money.*/

/*AUTHOR: Donwafula*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ATTEMPTS 3

bool validatePIN(void);
void showMenu(void);
void checkBalance(float balance);
void depositMoney(float *balance);
void withdrawMoney(float *balance);
void selectOperation(int choice, float balance);
void loop(void);

#endif

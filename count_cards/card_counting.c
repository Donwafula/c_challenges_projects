/*A program to count cards in the blackjack game*/
/*VARIABLES LOOPS CONDITIONAL STATEMENTS*/
/*By keeping a running count as the cards are dealt, a player can work out*/
/*the best time to place large bets and the best time to place small bets*/
/*Low cards: 2, 3, 4, 5, 6. Are good for the dealer*/
						/*As they are depleted, player advantage goes up; count++*/

/*Neutral cards: 7, 8, 9. Don't have a count value at all*/
						/*No advantage to both the player and the dealer*/

/*High cards: 10, J, Q, K, A. Are good for the player*/
						/*as they are depleted, player advantage goes down; count--*/

/*1. Evaluate the card*/
/*2. If card is between 3 & 6; increase count by 1*/
/*3. Otherwise, If card is 10, J, Q or K; Decrease count by 1*/
/*You keep doing this until the count gets really high*/
/*then lay on cash in your next bet*/

#include "cards.h"

/**
 * main - Entry
 * Return: 0 on success
 */
int main(void)
{
	printf("*****CARDS*****\n");
	char card[3];
	int value = card_value();

	printf("Final count: %d\n", value);

	return (0);
}

/**
 * card_value - Function to evaluate face value of cards
 * Return: 0 on success
 */
int card_value(void)
{
	char n[3];
	int val = 0, counter = 0;

	while (n[0] != 'X')
	{
		puts("\nEnter the card's Letter (e.g. K, Q) OR Number (e.g. 2, 4, 5)");
		scanf("%s", n);
		switch (n[0])
		{
			case 'A':
				val = 11;
				break;
			case 'K': case 'Q': case 'J': case '1':
				val = 10;
				break;
			case 'X':
				continue;
			default:
					val = _atoi(n);
		}
		printf("The card value is: %i\n", val);
		if (val < 1 || val > 11)
		{
			puts("Value not applicable");
			printf("Current count: %d\n", counter);
			continue;
		}
		if (val > 1 && val < 7)
			counter++;
		else if (val == 10 || val == 11)
			counter--;
		printf("Current count: %d\n", counter);
	}
	return (counter);
}

/**
 * _atoi - custom atoi(). Function to convert string to integer
 * @n: string to convert
 * Return: resultant integer
 */
int _atoi(char *n)
{
	int index = 0, bre_ak = 0, sign = 1, at_oi = 0;

	while (n[index] != '\0')
	{
		if (n[index] == 45)
			sign *= -1;
		while (isdigit(n[index]))
		{
			at_oi = (at_oi * 10) + (n[index] - 48);
			bre_ak = 1;
			index++;
		}
		if (bre_ak == 1)
			break;
		index++;
	}
	at_oi *= sign;

	return (at_oi);
}

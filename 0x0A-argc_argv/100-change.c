#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program calculates the minimum number of coins needed to make change for a given amount of money. It uses coin values of 25, 10, 5, 2, and 1 cent. If the number of arguments passed to the program is not exactly 1, it prints "Error" and returns 1. If the amount passed as the argument is negative, it prints 0.
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);

	if (amount < 0) {
		printf("0\n");
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int coin_count = 0;

	for (int i = 0; i < 5; i++) {
		while (amount >= coins[i]) {
			amount -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);
}


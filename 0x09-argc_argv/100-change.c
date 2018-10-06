#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * count_coins - counts the minimum number of coins
 * for integer cents
 * @cents: the value of change to be returned
 * @coins: the coins to make up change
 * Return: Number of coins.
 */
int count_coins(int cents, int coins)
{
	int quarters, dimes, nickles, twocents, pennies;

	quarters = dimes = nickles = twocents = pennies = 0;

	if (cents >= 25)
	{
		quarters = cents / 25;
		cents %= 25;
	}
	if (cents >= 10)
	{
		dimes = cents / 10;
		cents %= 10;
	}
	if (cents >= 5)
	{
		nickles = cents / 5;
		cents %= 5;
	}
	if (cents >= 2)
	{
		twocents = cents / 2;
		cents %= 2;
	}
	if (cents > 0)
		pennies = cents;

	coins = quarters + dimes + nickles + twocents + pennies;
	return (coins);
}

/**
 * main - multiplies two integer arguments
 * @argc: the number of arguments to main
 * @argv: an arrary of string arguments
 * Return: 0 if successful, 1 if erroneous.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", count_coins(atoi(argv[1]), 0));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

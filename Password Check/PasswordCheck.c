#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool PasswordCheck(char *p);

int main()
{
	char userPassword[] = "ABCD!12ght";
	bool result = PasswordCheck(userPassword);

	// prompting the user with some info about the program.

	printf("\n PasswordCheck by Gustavo Yepez.");
	printf("\n Hello there and welcome to my program that checks if a password is good enough to pass.\n");

	if (result) printf("\n Verified");
	else printf("\n Invalid");

	return 0;
}

bool PasswordCheck(char *userPassword)
{
	int length = strlen(userPassword);
	if (length < 8) return false;

	bool containUpper = false;
	bool containLower = false;
	bool containDigit = false;
	bool containSymbol = false;

	for (int i = 0; i < length; i++)
	{
		if (isupper(userPassword[i])) containUpper = true;
		if (islower(userPassword[i])) containLower = true;
		if (isdigit(userPassword[i])) containDigit = true;
		if (ispunct(userPassword[i])) containSymbol = true;
	}

	if (!containUpper) return false;
	if (!containLower) return false;
	if (!containDigit) return false;
	if (!containSymbol) return false;

	return true;
}
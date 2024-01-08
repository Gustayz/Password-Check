#include <stdio.h>

int PasswordCheck();

int main()
{
	// variable userPassword created to store the user password.

	int userPassword;

	// prompting the user with some info about the program and asking about to insert a password of their choice.

	printf("\n PasswordCheck by Gustavo Yepez.");
	printf("\n Hello there and welcome to my program that checks if a password is good enough to pass.");
	printf("\n Please insert your password down below:\n ");

	// assigning the user password into the variable userPassword.

	scanf_s("%i", &userPassword);

	// 
	int finalAnswer = PasswordCheck(userPassword);
}

int PasswordCheck(int userAnswer)
{
	
	
	return userAnswer;
}
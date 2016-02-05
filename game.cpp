#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int randomNumber, userGuess, numberOfGuesses;
	srand(time(NULL));
	randomNumber = rand() % 100; // Generate a random number between 0 and 99.

	cout << "I'm thinking of a number between 0 and 99. Can you guess what it is?" << endl;
	//cout << "The hidden number is " << randomNumber << endl;

	for (userGuess = 0, numberOfGuesses = 1;; numberOfGuesses++) 
	/*
	For loop flow control
	init: Set the variables userGuess to 0 and numberOfGuesses to 1.
	condition: None.
	increment: Increment the numberOfGuesses variable.
	*/
	{
		cout << "Guess number " << numberOfGuesses << ": ";
		cin >> userGuess;

		if (userGuess > randomNumber)
		{
			cout << "Your guess is too high! ";
		}
		else if (userGuess < randomNumber)
		{
			cout << "Your guess is too low! ";
		}
		else
		{
			break; // Break out of the for loop and end the game.
		}
	}

	cout << "You guessed the number in " << numberOfGuesses << " turns. ";

	if (numberOfGuesses <= 5)
	{
		cout << "Excellent!" << endl;
	}
	else if (numberOfGuesses <= 15)
	{
		cout << "Good job!" << endl;
	}
	else
	{
		cout << "At least you tried." << endl;
	}

	system("pause");
	return 0;
}
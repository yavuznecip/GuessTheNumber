#include <iostream>
using namespace std;

int main()
{
	int secretNum, guess, i;
	i = 1;
	secretNum = rand() % 10;

	cout << "Guess the secret number(0-9): " << endl;
	cin >> guess;
	if (guess == secretNum)
		cout << "Conguragulations u found it at the first try!!!" << endl;
	else {
		do {
			cout << "please try again: " << endl;
			cin >> guess;
			i++;

		} while (guess != secretNum & i < 3);

	    if (guess == secretNum)
			cout << "Conguragulations u found it at the " << i << "th try! " << endl;
		else
			cout << "You are out of changes :(" << endl;
	}
}
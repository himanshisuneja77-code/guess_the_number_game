#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, guess, tries, choice;
    srand(time(NULL));

    cout << "*********************************************************\n";
    cout << "*************** NUMBER GUESSING GAME ********************\n";
    cout << "*********************************************************\n";

    do {
        cout << "\n1. Play\n2. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            num = (rand() % 100) + 1;
            tries = 0;
                   cout << "You have 5 attempts.\n";
            do {
                cout << "Enter a number between 1 and 100: ";
                cin >> guess;

                if (guess < 1 || guess > 100) {
                    cout << "Invalid input! Try again.\n";
                    continue;
                }

                tries++;

                if (guess > num) {
                    cout << "Too high!\n";
                } else if (guess < num) {
                    cout << "Too low!\n";
                } else {
                    cout << "\nYou guessed it right in " << tries << " tries!\n";
                    break;
                }

                if (tries == 5) {
                    cout << "\nBetter luck next time! The number was " << num << ".\n";
                    break;
                }

            } while (true);
            break;

        case 2:
            cout << "\n###### THANK YOU FOR VISITING ######\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 2);

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

class game
{
    // 1=rock
    // 2=paper
    // 3=scissor

public:
    void choose()
    {
        int PLAYER_THROW;
        int x = time(0);
        srand(x);
        bool dice = true;

        do
        {
            int AI_THROW = (rand() % 3) + 1;
            cout << "Enter your choice : ";
            cin >> PLAYER_THROW;
           
            if (AI_THROW == ROCK)
            {
                cout << "AI throws ROCK " << endl;
            }
            else if (AI_THROW == PAPER)
            {
                cout << "AI throws PAPER " << endl;
            }
            else
            {
                cout << "AI throws SCISSORS " << endl;
            }

            dice = false;

            if (AI_THROW == PLAYER_THROW)
            {
                dice = true;
                cout <<endl<< "It's a draw! Let's play again" << endl;
            }
            else if (PLAYER_THROW == ROCK && AI_THROW == SCISSORS)
            {
                cout <<endl<< "Rock beats Scissors! You won!" << endl;
            }
            else if (PLAYER_THROW == SCISSORS && AI_THROW == ROCK)
            {
                cout <<endl<< "Rock beats scissors! AI won!" << endl;
            }
            else if (PLAYER_THROW == PAPER && AI_THROW == ROCK)
            {
                cout <<endl<< "Paper beats rock! You won!" << endl;
            }
            else if (PLAYER_THROW == ROCK && AI_THROW == PAPER)
            {
                cout <<endl<< "Paper beats rock! AI won!" << endl;
            }
            else if (PLAYER_THROW == PAPER && AI_THROW == SCISSORS)
            {
                cout <<endl<< "Scissors beats paper! AI won!" << endl;
            }
            else if (PLAYER_THROW == SCISSORS && AI_THROW == PAPER)
            {
                cout <<endl<< "Scissors beats paper! You won!" << endl;
            }

        } while (dice);
    }
};
int main()
{
    game g1;

    cout << "Welcome to Rock-Paper-Scissors!\n";
    cout << "In this game, you'll choose:\n";
    cout << "1 for Stone\n";
    cout << "2 for Paper\n";
    cout << "3 for Scissors\n\n";

    g1.choose();
}

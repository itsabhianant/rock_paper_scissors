#include "declarations.hpp"

int main() {
    // Welcome and rules display prompt;
    cout << "---Welcome to the rps game---" << endl;
    char res;
    cout << "Would you like to have a look at the rules?(y/n) ";
    cin >> res;
    if (tolower(res) == 'n') { 
        not_display_rules();
    } else if (tolower(res) == 'y') {
        display_rules();
    } else {
        cout << "Please learn to follow instructions..." << endl;
        not_display_rules();
    }


    // Asking the player for the number of matches
    int match = no_of_matches();


    // Making the user and the computer objects
    Player user;
    Player computer;

    
    for (int i = 0; i < match ; i++) {
        // Getting the move of the user
        bool correct_move {true};
        char move;
        cout << "\nYour Move: ";
        while(correct_move) {
            char response;
            cin >> response;
            if (tolower(response) != 'r' &&
                tolower(response) != 'p' &&
                tolower(response) != 's'){
                    cout << "Please give a valid response...: ";
            } else {
                move = tolower(response);
                correct_move = false;
            }
            user.set_move(move);
        }


        // Getting the move of the computer by generating a random number
        int random_number {};
        int min {1};
        int max{9};
        srand(time(nullptr));
        random_number = rand() % max + min;
        if (random_number == 1 || random_number == 5 || random_number == 9)
            computer.set_move('r');
        else if (random_number == 2 || random_number == 6 || random_number == 7)
            computer.set_move('p');
        else
            computer.set_move('s');
        cout << "My move: " << computer.get_move() << endl;


        // Comparing the moves
        if (user.get_move() == 'r' && computer.get_move() == 'p') {
            computer.set_score();
        } else if (user.get_move() == 'p' && computer.get_move() == 'r') {
            user.set_score();
        } else if (user.get_move() == 's' && computer.get_move() == 'r') {
            computer.set_score();
        } else if (user.get_move() == 'r' && computer.get_move() == 's') {
            user.set_score();
        } else if (user.get_move() == 's' && computer.get_move() == 'p') {
            user.set_score();
        } else if (user.get_move() == 'p' && computer.get_move() == 's') {
            computer.set_score();
        } 
        
    }
    
    // Giving the results of the tournament
    if (computer.get_score() > user.get_score())
        cout << "\nHAHA... I won" << endl;
    else if (computer.get_score() < user.get_score())
        cout << "\nOH NOOO... You won" << endl;
    else 
        cout << "\nGuess what... it's a tie" << endl;

    cout << "Your score: " << user.get_score() << " My score: " << computer.get_score() << endl;

    return 0;

}
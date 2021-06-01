#include "declarations.hpp"


// Defining the setter for move
void Player::set_move(char m) {
    move = m;
}


// Defining the getter for move
char Player::get_move() {
    return move;
}


// Defining the setter for score
void Player::set_score(int s) {
    score += s;
}


// Defining the getter for score
int Player::get_score() {
    return score;
}


// Welcoming the player
void welcome_and_rules() {
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
}


// Displaying the rules
void display_rules() {
    cout << "\nr => rock, p => paper, and s => scissors..." << endl;
    cout << "\nrock wins over scissors, scissors wins over paper and paper wins over rock" << endl;
    cout << "\nYou can decide how much matches you want in the tournament";
    cout << ". The winner will be decided on the basis of who wins most of the matches" << endl;
}


// Not displaying the rules
void not_display_rules() {
    cout << "\nOk... just remember" << endl;
    cout << "r => rock, p => paper, and s => scissors..." << endl;
}


// No of matches
int no_of_matches() {
    int match;
    cout << "\nHow many matches do you want to play? ";
    cin >> match;

    return match;
}


// Getting the user's move
char user_move() {
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
    }
    return move;
}


// Getting the computer's move
char computer_move() {
    int random_number {};
    int min {1};
    int max{9};
    srand(time(nullptr));
    random_number = rand() % max + min;
    if (random_number == 1 || random_number == 5 || random_number == 9)
        return 'r';
    else if (random_number == 2 || random_number == 6 || random_number == 7)
        return 'p';
    else
        return 's';
}


// Comparing the moves (return 1 if the computer wins and 2 if the user wins)
int compare_moves(char user, char computer) {
    if (user == 'r' && computer == 'p') {
        return 1;
    } else if (user == 'p' && computer == 'r') {
        return 2;
    } else if (user == 's' && computer == 'r') {
        return 1;
    } else if (user == 'r' && computer == 's') {
        return 2;
    } else if (user == 's' && computer == 'p') {
        return 2;
    } else if (user == 'p' && computer == 's') {
        return 1;
    }
    return 0;
}


// Printing the result
void print_result(int user, int computer) {
    if (computer > user)
        cout << "\nHAHA... I won" << endl;
    else if (computer< user)
        cout << "\nOH NOOO... You won" << endl;
    else 
        cout << "\nGuess what... it's a tie" << endl;

    cout << "Your score: " << user<< " My score: " << computer << endl;
}
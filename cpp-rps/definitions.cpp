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
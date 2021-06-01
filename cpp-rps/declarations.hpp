#pragma once

#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>


// std scopes
using std::cout;
using std::cin;
using std::endl;


// Prototypes
void display_rules ();
void not_display_rules ();
int no_of_matches();
void welcome_and_rules();
char user_move();
char computer_move();
int compare_moves(char user, char computer);
void print_result(int user, int computer);


// Creating the class Player
class Player {
    private:
        char move;
        int score = 0;
    
    public:
        void set_move(char m);      // Setter for move
        char get_move();            // Getter for move
        void set_score(int s = 1);  // Setter for score
        int get_score ();           // Getter for score
};
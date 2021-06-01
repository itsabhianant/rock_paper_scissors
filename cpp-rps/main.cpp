#include "declarations.hpp"

int main() {
    // Welcome and rules display prompt;
    welcome_and_rules();


    // Asking the player for the number of matches
    int match = no_of_matches();


    // Making the user and the computer objects
    Player user;
    Player computer;

    
    for (int i = 0; i < match ; i++) {
        // Getting the move of the user
        user.set_move(user_move());


        // Getting the move of the computer
        computer.set_move(computer_move());
        cout << "My move: " << computer.get_move() << endl;

        // Comparing the results
        int win_num = compare_moves(user.get_move(), computer.get_move());
        
        switch (win_num){

        case 1: 
            computer.set_score();
            break;
        
        case 2:
            user.set_score();
            break;

        default:
            computer.set_score(0);
            user.set_score(0);
            break;
        }
        
    }
    
    // Printing the results of the tournament
    print_result(user.get_score(), computer.get_score());

    return 0;

}
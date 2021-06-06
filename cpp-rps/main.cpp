#include "declarations.hpp"

int main() {
    // Welcome and rules display prompt;
    welcome_and_rules();

    
    // Plays the game until the user wishes
    char play_again;
    do{
        // Plays the game and then prints the results
        play_game();
        cout << "\n-------------------------------------------" << endl;
        cout << "Press y to play again. Anything else will be considered as a command to quit: " << endl;
        cin >> play_again;
    } while (tolower(play_again) == 'y');
    
    return 0;
}
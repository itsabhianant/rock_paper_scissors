import random

def play():
    """Takes the user input and prints if he won or lost."""

    print("Enter 'q' to exit any time.")
    user = input("\nWhat's your choice? 'r' for rock, 'p' for papers, and 's' for scissors. ")
    computer = random.choice(['r', 'p', 's'])
    
    if user == 'q':
        return "Thanks for playing the game."
        
    elif user == computer :
        return "It's a tie."
        
            
    if winner(user, computer):
        return "You won!"
            

    return "You lose!"
        
def winner(player, opponent):
    """Logic of the game."""

    if (player == 'r' and opponent == 's') or (player == 's' and opponent == 'p') or (player == 'p' and opponent == 'r'):

        return True

print(play())
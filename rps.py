import random

#print("\nEnter 'q' to exit any time.")
def play():
    """Takes the user input and prints if he won or lost."""
   
    user = input("\nWhat's your choice? 'r' for rock, 'p' for papers, and 's' for scissors. ")
    computer = random.choice(['r', 'p', 's'])
    
    #if user == 'q': # If the user gives the input as q the program breaks.
    #    return "\nThanks for playing the game."
        

    if user == computer :
        return "\nIt's a tie."
        
            
    if winner(user, computer):
        return "\nYou won!"
            

    return "\nYou lose!"

def rps_loop(end_char="q"):
    """
    We can choose whether to play the game again

    If the character string specified by end_char is entered, it can be finished
    """
    inputed_char = ""
    content = f"\nIf you want to end this game, press {end_char} any time else press any key to continue:  "

    while True:
        inputed_char = input(content)
        if inputed_char != end_char:
            print(play())
        else:
            print("\nThanks for playing.")
            break
        
def winner(player, opponent):
    """Logic of the game."""

    if (player == 'r' and opponent == 's') or (player == 's' and opponent == 'p') or (player == 'p' and opponent == 'r'):

        return True


if __name__ == '__main__':
    print(play())
    rps_loop()
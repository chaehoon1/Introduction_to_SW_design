#Yes or No to Play Again
def inputYN() :
    answer = ""
    while answer != "yes" and answer != "no" :
        print("Do you want to play again? (yes or no)")
        answer = input()
    return answer

playAgain = True
while playAgain :
    print("some logic here...")
    answer = inputYN()
    if answer == "no" :
        playAgain = False

